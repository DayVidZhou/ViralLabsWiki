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
    std::ifstream infile("C:/Hours/hours.txt");
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
    std::string jeeboman = "Jeeboman.exe";
    std::string a10 =  "A-10VR.exe";
    std::string drummerTalent = "DrumGame.exe";
    std::string accounting = "Accounting.exe";
    std::string natureTreks = "Nature Treks VR.exe";
    std::string theLab = "TheLab.exe";
    std::string destinations = "steamtours.exe";
    std::string cloudlands = "Cloudlands.exe";
    std::string crazyFishing = "CrazyFishing.exe";
    std::string recRoom = "Recroom_Release.exe";
    std::string theBellows = "TheBellows.exe";
    std::string vR2017 = "ShooterGame.exe";
    std::string ghostTownMineRide = "HauntedMineRide.exe";
    std::string talesOfEscape = "TalesOfEscape.exe";
    std::string surgeonSimulator = "SurgeonVR.exe";
    std::string portalStories = "Lift.exe";
    std::string eyeInTheSky = "Eye in the Sky v0.2.exe";
    std::string lightblade = "LightbladeVR.exe";
    std::string quiVr = "QuiVr.exe";
    std::string blueshift = "Blueshift.exe";
    std::string acansCall = "AcansCall.exe";
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
                        //qDebug()<<"SPACE PIRATE";
                        CurGame = "Space Pirate";
                        games ++;
                    }
                    else if(matchProcessName( aProcesses[i], jeeboman )){
                        //qDebug()<<"Jeeboman";
                        CurGame = "Jeeboman";
                        games ++;
                    }
                    else if(matchProcessName( aProcesses[i], a10 )){
                        //qDebug()<<"A10";
                        CurGame = "A-10 VR";
                        games ++;
                    }
                    else if(matchProcessName( aProcesses[i], drummerTalent )){
                        //qDebug()<<"Drummer Talent";
                        CurGame = "Drummer Talent";
                        games ++;
                    }
                    else if(matchProcessName( aProcesses[i], accounting )){
                        //qDebug()<<"Accounting";
                        CurGame = "Accounting";
                        games ++;
                    }
                    else if(matchProcessName( aProcesses[i], natureTreks )){
                        //qDebug()<<"Nature Treks";
                        CurGame = "Nature Treks";
                        games ++;
                    }
                    else if(matchProcessName( aProcesses[i], theLab )){
                        //qDebug()<<"Thelab";
                        CurGame = "The Lab";
                        games ++;
                    }
                    else if(matchProcessName( aProcesses[i], destinations )){
                        //qDebug()<<"Destinations";
                        CurGame = "Destinations";
                        games ++;
                    }
                    else if(matchProcessName( aProcesses[i], cloudlands )){
                        //qDebug()<<"Cloudlands";
                        CurGame = "Cloudlands Minigolf";
                        games ++;
                    }
                    else if(matchProcessName( aProcesses[i], crazyFishing )){
                        //qDebug()<<"Crazy Fishing";
                        CurGame = "Crazy Fishing";
                        games ++;
                    }
                    else if(matchProcessName( aProcesses[i], recRoom )){
                        //qDebug()<<"Rec Room";
                        CurGame = "Rec Room";
                        games ++;
                    }
                    else if(matchProcessName( aProcesses[i], theBellows )){
                        //qDebug()<<"The Bellows";
                        CurGame = "The Bellows";
                        games ++;
                    }
                    else if(matchProcessName( aProcesses[i], vR2017 )){
                        //qDebug()<<"2017 VR";
                        CurGame = "2017 VR";
                        games ++;
                    }
                    else if(matchProcessName( aProcesses[i], ghostTownMineRide )){
                        //qDebug()<<"Ghost Towm Mine Ride";
                        CurGame = "Ghost Town Mine Ride";
                        games ++;
                    }
                    else if(matchProcessName( aProcesses[i], talesOfEscape )){
                        //qDebug()<<"Tales of Escape";
                        CurGame = "Tales of Escape";
                        games ++;
                    }
                    else if(matchProcessName( aProcesses[i], surgeonSimulator )){
                        //qDebug()<<"Surgeon Simulator";
                        CurGame = "Surgeon Simulator";
                        games ++;
                    }
                    else if(matchProcessName( aProcesses[i], portalStories )){
                        //qDebug()<<"Portal Stories";
                        CurGame = "Portal Stories";
                        games ++;
                    }
                    else if(matchProcessName( aProcesses[i], eyeInTheSky )){
                        //qDebug()<<"Eye in the Sky";
                        CurGame = "Eye in the Sky";
                        games ++;
                    }
                    else if(matchProcessName( aProcesses[i], lightblade )){
                        //qDebug()<<"Lightblade";
                        CurGame = "Lightblade";
                        games ++;
                    }
                    else if(matchProcessName( aProcesses[i], quiVr )){
                        //qDebug()<<"QuiVr";
                        CurGame = "QuiVr";
                        games ++;
                    }
                    else if(matchProcessName( aProcesses[i], blueshift )){
                        //qDebug()<<"Blueshift";
                        CurGame = "Blueshift";
                        games ++;
                    }
                    else if(matchProcessName( aProcesses[i], acansCall )){
                        //qDebug()<<"Acan's Call";
                        CurGame = "Acan's Call";
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
