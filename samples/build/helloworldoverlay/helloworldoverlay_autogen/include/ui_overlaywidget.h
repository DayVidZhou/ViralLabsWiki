/********************************************************************************
** Form generated from reading UI file 'overlaywidget.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OVERLAYWIDGET_H
#define UI_OVERLAYWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OverlayWidget
{
public:
    QPushButton *pushButton;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label;
    QLabel *label_4;

    void setupUi(QWidget *OverlayWidget)
    {
        if (OverlayWidget->objectName().isEmpty())
            OverlayWidget->setObjectName(QStringLiteral("OverlayWidget"));
        OverlayWidget->resize(601, 461);
        OverlayWidget->setMinimumSize(QSize(0, 0));
        QFont font;
        font.setFamily(QStringLiteral("MS Sans Serif"));
        font.setPointSize(8);
        OverlayWidget->setFont(font);
        OverlayWidget->setStyleSheet(QStringLiteral(""));
        pushButton = new QPushButton(OverlayWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(220, 330, 165, 45));
        pushButton->setMinimumSize(QSize(0, 0));
        pushButton->setMaximumSize(QSize(200, 200));
        QFont font1;
        font1.setPointSize(12);
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QLatin1String("QPushButton#pushButton{\n"
"border-image:url(C:/openvr-master/samples/helloworldoverlay/pausemenuimages/quitnormal.png);\n"
"}\n"
"QPushButton#pushButton:pressed{\n"
"border-image: url(C:/openvr-master/samples/helloworldoverlay/pausemenuimages/QuitOnclick.png)\n"
"}\n"
"QPushButton#pushButton:hover:!pressed{\n"
"border-image: url(C:/openvr-master/samples/helloworldoverlay/pausemenuimages/QuitHover.png)\n"
"}"));
        pushButton->setCheckable(false);
        pushButton->setChecked(false);
        pushButton->setAutoRepeatDelay(300);
        pushButton->setAutoRepeatInterval(100);
        pushButton->setAutoDefault(false);
        pushButton->setFlat(false);
        label_2 = new QLabel(OverlayWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 130, 541, 41));
        QFont font2;
        font2.setFamily(QStringLiteral("Sk-Modernist"));
        font2.setPointSize(20);
        label_2->setFont(font2);
        label_2->setContextMenuPolicy(Qt::ActionsContextMenu);
        label_2->setToolTipDuration(0);
        label_2->setStyleSheet(QLatin1String("#label_2{\n"
"color:rgb(28, 111, 119);\n"
"}"));
        label_2->setFrameShadow(QFrame::Plain);
        label_2->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        label_2->setMargin(5);
        label_2->setIndent(0);
        label_3 = new QLabel(OverlayWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(220, 170, 152, 152));
        QFont font3;
        font3.setFamily(QStringLiteral("Roboto"));
        font3.setPointSize(16);
        label_3->setFont(font3);
        label_3->setFocusPolicy(Qt::WheelFocus);
        label_3->setToolTipDuration(-1);
        label_3->setStyleSheet(QLatin1String("QLabel#label_3{\n"
"border-image:url(C:/openvr-master/samples/helloworldoverlay/pausemenuimages/TimerDesign.png);\n"
"color:white;\n"
"padding-left: 20px;\n"
"}"));
        label_3->setTextFormat(Qt::AutoText);
        label_3->setAlignment(Qt::AlignCenter);
        label = new QLabel(OverlayWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(60, 40, 479, 109));
        label->setMaximumSize(QSize(16777172, 16777203));
        QFont font4;
        font4.setFamily(QStringLiteral("Ethnocentric Rg"));
        font4.setPointSize(40);
        label->setFont(font4);
        label->setStyleSheet(QLatin1String("#label{\n"
"color:white;\n"
"}"));
        label->setFrameShape(QFrame::NoFrame);
        label->setFrameShadow(QFrame::Plain);
        label->setScaledContents(false);
        label->setAlignment(Qt::AlignCenter);
        label_4 = new QLabel(OverlayWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(0, 0, 601, 461));
        label_4->setMaximumSize(QSize(16777215, 16777215));
        label_4->setStyleSheet(QLatin1String("QLabel#label_4{\n"
"border-image:url(C:/openvr-master/samples/helloworldoverlay/pausemenuimages/BG.png);\n"
"}"));
        label_4->raise();
        label_3->raise();
        label_2->raise();
        label->raise();
        pushButton->raise();

        retranslateUi(OverlayWidget);

        QMetaObject::connectSlotsByName(OverlayWidget);
    } // setupUi

    void retranslateUi(QWidget *OverlayWidget)
    {
        OverlayWidget->setWindowTitle(QApplication::translate("OverlayWidget", "Hello World Overlay", 0));
        pushButton->setText(QString());
        label_2->setText(QApplication::translate("OverlayWidget", "Currently Playing :", 0));
        label_3->setText(QApplication::translate("OverlayWidget", "0:34:44", 0));
        label->setText(QApplication::translate("OverlayWidget", "VIRAL", 0));
        label_4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class OverlayWidget: public Ui_OverlayWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OVERLAYWIDGET_H
