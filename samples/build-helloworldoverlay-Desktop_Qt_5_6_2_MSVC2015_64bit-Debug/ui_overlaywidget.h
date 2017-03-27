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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OverlayWidget
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QPushButton *pushButton;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_4;
    QWidget *verticalLayoutWidget_4;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_3;

    void setupUi(QWidget *OverlayWidget)
    {
        if (OverlayWidget->objectName().isEmpty())
            OverlayWidget->setObjectName(QStringLiteral("OverlayWidget"));
        OverlayWidget->resize(531, 541);
        QFont font;
        font.setFamily(QStringLiteral("MS Sans Serif"));
        OverlayWidget->setFont(font);
        verticalLayoutWidget = new QWidget(OverlayWidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(40, 0, 451, 301));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setMaximumSize(QSize(16777172, 16777203));
        QFont font1;
        font1.setPointSize(17);
        label->setFont(font1);
        label->setScaledContents(false);
        label->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        verticalLayout->addWidget(label);

        pushButton = new QPushButton(OverlayWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(190, 480, 151, 61));
        pushButton->setMaximumSize(QSize(16777215, 16777215));
        QFont font2;
        font2.setPointSize(15);
        pushButton->setFont(font2);
        pushButton->setAutoRepeatDelay(294);
        verticalLayoutWidget_2 = new QWidget(OverlayWidget);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(80, 300, 351, 71));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(verticalLayoutWidget_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font3;
        font3.setPointSize(16);
        label_2->setFont(font3);
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_2);

        verticalLayoutWidget_3 = new QWidget(OverlayWidget);
        verticalLayoutWidget_3->setObjectName(QStringLiteral("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(110, 370, 291, 51));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(verticalLayoutWidget_3);
        label_4->setObjectName(QStringLiteral("label_4"));
        QFont font4;
        font4.setPointSize(20);
        label_4->setFont(font4);
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_4);

        verticalLayoutWidget_4 = new QWidget(OverlayWidget);
        verticalLayoutWidget_4->setObjectName(QStringLiteral("verticalLayoutWidget_4"));
        verticalLayoutWidget_4->setGeometry(QRect(110, 420, 291, 61));
        verticalLayout_4 = new QVBoxLayout(verticalLayoutWidget_4);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(verticalLayoutWidget_4);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font4);
        label_3->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        verticalLayout_4->addWidget(label_3);

        verticalLayoutWidget->raise();
        pushButton->raise();
        verticalLayoutWidget_2->raise();
        verticalLayoutWidget_3->raise();
        label->raise();
        verticalLayoutWidget_4->raise();
        label_3->raise();
        label_3->raise();

        retranslateUi(OverlayWidget);

        QMetaObject::connectSlotsByName(OverlayWidget);
    } // setupUi

    void retranslateUi(QWidget *OverlayWidget)
    {
        OverlayWidget->setWindowTitle(QApplication::translate("OverlayWidget", "Hello World Overlay", 0));
        label->setText(QString());
        pushButton->setText(QApplication::translate("OverlayWidget", "Quit Overlay", 0));
        label_2->setText(QApplication::translate("OverlayWidget", "Hope you are enjoying your game", 0));
        label_4->setText(QApplication::translate("OverlayWidget", "Timer", 0));
        label_3->setText(QApplication::translate("OverlayWidget", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class OverlayWidget: public Ui_OverlayWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OVERLAYWIDGET_H
