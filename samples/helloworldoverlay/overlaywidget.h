#ifndef OVERLAYWIDGET_H
#define OVERLAYWIDGET_H
#include <windows.h>
#include <QTextStream>
#include <QWidget>
#include <QDebug>
namespace Ui {
extern std::string CurGame;
extern HANDLE ghandle;
extern DWORD PID;
extern int Hour;
extern int Min;
extern int Sec;
class OverlayWidget;
}

class OverlayWidget : public QWidget
{
    Q_OBJECT

public:
    explicit OverlayWidget(QWidget *parent = 0);
    ~OverlayWidget();

private slots:
    void showTime();
    void processes();
    bool matchProcessName( DWORD processID, std::string processName);
    void on_pushButton_clicked();

private:
    Ui::OverlayWidget *ui;
};

#endif // OVERLAYWIDGET_H
