#include "overlaywidget.h"
#include "ui_overlaywidget.h"
#include <QTimer>
#include <QDateTime>
#include <QElapsedTimer>
#include <QPixmap>
#include <cstdio>
#include <tlhelp32.h>
#include <QProcess>
#include <stdio.h>
#include <tchar.h>
#include <psapi.h>
#include <fstream>
std::string CurGame = "None";
HANDLE ghandle;
DWORD PID;
int Hour;
int Min;
int Sec;
OverlayWidget::OverlayWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::OverlayWidget)
{
    ui->setupUi(this);
    //opening the hours file to get the seconds
    std::ifstream infile("D:/Environment/EnvironmentProject/Assets/hours.txt");
    if(infile.fail()){
        qDebug()<<"DIDNT OPEN";
    }
    int thetime;
    infile >> thetime;
    //int thehour = (int)thetime;
    Hour = thetime/3600;
    Min = (thetime - Hour*3600)/60;
    Sec = thetime%60;
    qDebug()<<"IT OPENED! THE TIME IS " << thetime << " STATIc HOUR IS "<<Hour <<" Min is " <<Min << " Sec is " << Sec;
    QTimer *timer = new QTimer(this);
    connect(timer , SIGNAL(timeout()),this, SLOT(showTime()));
    timer->start(1000);
    QPixmap pix("C:/openvr-master/samples/helloworldoverlay/pausemenuimages/BG.png");/*
    ui->frame->setPixmap(pix.scaled(601,465,Qt::KeepAspectRatio));*/
}

OverlayWidget::~OverlayWidget()
{
    delete ui;
}
//function that deals with the timer
void OverlayWidget::showTime(){
    //initializes a timer
    QTime zero = QTime::QTime(0,0,0);
    static int hour = Hour;
    static int min = Min;
    static int sec = Sec;
    QTime time = QTime::QTime(hour,min,sec);
    //decrements if timer isnt up
    if(time != zero){
        time = time.addSecs(-1);
    }
    hour = time.hour();
    min = time.minute();
    sec = time.second();
    QString time_text = time.toString("h : mm : ss");
    ui->label_3->setText(time_text);
    processes();
}

void OverlayWidget::on_pushButton_clicked()
{
    qDebug()<<QString::fromStdString(CurGame);
    HANDLE hProcess = OpenProcess(PROCESS_TERMINATE, 0,PID);
    TerminateProcess(hProcess, 9);
    CloseHandle(hProcess);
}

void OverlayWidget::processes()
{
    //qDebug()<<"PROCESSES RUNNN";
    // Get the list of process identifiers.
    std::string spacePirate = "SpacePirateVR.exe";
    std::string A10VR = "A-10VR.exe";
    std::string CyberThreat = "CyberThreat.exe";
    std::string QuiVr = "QuiVr.exe";
    std::string LightbladeVR = "LightbladeVR-Win64-Shipping.exe";
    std::string TheLab = "TheLab.exe";
    std::string steamtours = "steamtours.exe";
    std::string CrazyFishing = "CrazyFishing.exe";
    std::string RecRoom = "Recroom_Release.exe";
    std::string TalesOfEscape = "TalesOfEscape.exe";
    std::string InMind2 = "InMind 2.exe";
    std::string HauntedMineRide = "UE4Game-Win64-Shipping.exe";
    std::string TheBellows = "TheBellows.exe";
    std::string Holopoint = "Holopoint.exe";
    std::string fruitNinja = "FruitNinjaVR.exe";
    int games = 0;
    QString game;
    //QString CurGame;
    DWORD aProcesses[1024], cbNeeded, cProcesses;
    unsigned int i;

    if ( !EnumProcesses( aProcesses, sizeof(aProcesses), &cbNeeded ) )
    {
    }

    // Calculate how many process identifiers were returned.

    cProcesses = cbNeeded / sizeof(DWORD);

    // Print the name and process identifier for each process.

    for ( i = 0; i < cProcesses; i++ )
    {
        if( aProcesses[i] != 0 )
        {
            if(matchProcessName( aProcesses[i], spacePirate )){
                //qDebug()<<"SPACE PIRATEEE";
                CurGame = "Space Pirate";
                games ++;
            }
            else if(matchProcessName( aProcesses[i], A10VR )){
                //qDebug()<<"A-10VR";
                CurGame = "A-10 VR";
                games ++;
            }
            else if(matchProcessName( aProcesses[i], CyberThreat )){
                //qDebug()<<"CyberThreat";
                CurGame = "CyberThreat";
                games ++;
            }
            else if(matchProcessName( aProcesses[i], QuiVr )){
                //qDebug()<<"QuiVr";
                CurGame = "QuiVr";
                games ++;
            }
            else if(matchProcessName( aProcesses[i], LightbladeVR )){
                //qDebug()<<"LightbladeVR";
                CurGame = "Lightblade VR";
                games ++;
            }
            else if(matchProcessName( aProcesses[i], TheLab )){
                //qDebug()<<"THEEEE LABBB";
                CurGame = "The Lab";
                games ++;
            }
            else if(matchProcessName( aProcesses[i], steamtours )){
                //qDebug()<<"steamtours";
                CurGame = "Destinations";
                games ++;
            }
            else if(matchProcessName( aProcesses[i], CrazyFishing )){
                //qDebug()<<"CrazyFishing";
                CurGame = "Crazy Fishing";
                games ++;
            }
            else if(matchProcessName( aProcesses[i], RecRoom )){
                //qDebug()<<"RecRoom";
                CurGame = "RecRoom";
                games ++;
            }
            else if(matchProcessName( aProcesses[i], TalesOfEscape )){
                //qDebug()<<"TalesOfEscape";
                CurGame = "Tales of Escape";
                games ++;
            }
            else if(matchProcessName( aProcesses[i], InMind2 )){
                //qDebug()<<"InMind 2";
                CurGame = "InMind 2";
                games ++;
            }
            else if(matchProcessName( aProcesses[i], HauntedMineRide )){
                //qDebug()<<"HauntedMineRide";
                CurGame = "Ghost Town Mine";
                games ++;
            }
            else if(matchProcessName( aProcesses[i], TheBellows )){
                //qDebug()<<"TheBellows";
                CurGame = "The Bellows";
                games ++;
            }
            else if(matchProcessName( aProcesses[i], Holopoint )){
                //qDebug()<<"HOLOO PPOINTT";
                CurGame = "Holopoint";
                games ++;
            }
            else if(matchProcessName( aProcesses[i], fruitNinja )){
                //qDebug()<<"FRUIITIT NINJAAA";
                CurGame = "Fruit Ninja";
                games ++;
            }
        }
    }
    //if no game then set none
    if(games == 0){
        CurGame = "None";
    }
    else if(games > 0){
        games = 0;
    }
    //set the game title to the ui label
    game = QString::fromStdString(CurGame);
    ui->label_2->setText("Currently Playing : "+game);
}

bool OverlayWidget::matchProcessName( DWORD processID, std::string processName)
{
    TCHAR szProcessName[MAX_PATH] = TEXT("<unknown>");

    // Get a handle to the process.

    HANDLE hProcess = OpenProcess( PROCESS_QUERY_INFORMATION |
                                   PROCESS_VM_READ,
                                   FALSE, processID );

    // Get the process name.

    if (NULL != hProcess )
    {
        HMODULE hMod;
        DWORD cbNeeded;

        if ( EnumProcessModules( hProcess, &hMod, sizeof(hMod),
             &cbNeeded) )
        {
            GetModuleBaseName( hProcess, hMod, szProcessName,
                               sizeof(szProcessName)/sizeof(TCHAR) );
        }
    }
    // Compare process name with your string
    bool matchFound = !_tcscmp(szProcessName, processName.c_str() );

    if(matchFound && ghandle != hProcess){
        PID = processID;
    }

    // Release the handle to the process.
    CloseHandle( hProcess );

    return matchFound;
}
