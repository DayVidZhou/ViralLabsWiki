#include "overlaywidget.h"
#include "ui_overlaywidget.h"
#include <QTimer>
#include <QDateTime>
#include <QElapsedTimer>
#include <QPixmap>
#include <stdio.h>
#include <tchar.h>
#include <psapi.h>
#define Hour 1;
#define Min 0;
#define Sec 0;
OverlayWidget::OverlayWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::OverlayWidget)
{
    ui->setupUi(this);
    QTimer *timer = new QTimer(this);
    connect(timer , SIGNAL(timeout()),this, SLOT(showTime()));
    timer->start(1000);
    QPixmap pix("C:/Users/Viral-Dev1/Pictures/UI/ViralLogo.png");/*
    ui->label->setPixmap(pix.scaled(400,400,Qt::KeepAspectRatio));*/
}

OverlayWidget::~OverlayWidget()
{
    delete ui;
}

void OverlayWidget::showTime(){
    QTime zero = QTime::QTime(0,0,0);
    static int hour = Hour;
    static int min = Min;
    static int sec = Sec;
    QTime time = QTime::QTime(hour,min,sec);
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
    QApplication::quit();
}

void OverlayWidget::processes()
{
    //qDebug()<<"PROCESSES RUNNN";
    // Get the list of process identifiers.
    std::string spacePirate = "SpacePirateVR.exe";
    std::string TheLab = "TheLab.exe";
    std::string Holopoint = "Holopoint.exe";
    std::string fruitNinja = "FruitNinjaVR.exe";
    int games = 0;
    QString CurGame;
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
            else if(matchProcessName( aProcesses[i], TheLab )){
                //qDebug()<<"THEEEE LABBB";
                CurGame = "The Lab";
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
    if(games == 0){
        CurGame = "None";
    }
    else if(games > 0){
        games = 0;
    }
    ui->label_2->setText("Currently Playing : "+CurGame);
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

    // Release the handle to the process.
    CloseHandle( hProcess );

    return matchFound;
}
