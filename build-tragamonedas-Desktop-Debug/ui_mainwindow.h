/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actioneasy;
    QAction *actionmedium;
    QAction *actionhard;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QGridLayout *gridLayout;
    QLCDNumber *lcdNumber_5;
    QLCDNumber *lcdNumber_2;
    QLCDNumber *lcdNumber_6;
    QLCDNumber *lcdNumber;
    QLCDNumber *lcdNumber_3;
    QLCDNumber *lcdNumber_4;
    QLCDNumber *lcdNumber_7;
    QLCDNumber *lcdNumber_8;
    QLCDNumber *lcdNumber_9;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame_3;
    QHBoxLayout *horizontalLayout;
    QFrame *frame_4;
    QLabel *label;
    QLabel *label_2;
    QSpinBox *spinBox;
    QLabel *score;
    QPushButton *pushButton_2;
    QFrame *frame_5;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QMenu *menulevel;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(962, 621);
        actioneasy = new QAction(MainWindow);
        actioneasy->setObjectName("actioneasy");
        actionmedium = new QAction(MainWindow);
        actionmedium->setObjectName("actionmedium");
        actionhard = new QAction(MainWindow);
        actionhard->setObjectName("actionhard");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame);
        gridLayout->setObjectName("gridLayout");
        lcdNumber_5 = new QLCDNumber(frame);
        lcdNumber_5->setObjectName("lcdNumber_5");

        gridLayout->addWidget(lcdNumber_5, 1, 1, 1, 1);

        lcdNumber_2 = new QLCDNumber(frame);
        lcdNumber_2->setObjectName("lcdNumber_2");

        gridLayout->addWidget(lcdNumber_2, 1, 0, 1, 1);

        lcdNumber_6 = new QLCDNumber(frame);
        lcdNumber_6->setObjectName("lcdNumber_6");

        gridLayout->addWidget(lcdNumber_6, 2, 1, 1, 1);

        lcdNumber = new QLCDNumber(frame);
        lcdNumber->setObjectName("lcdNumber");

        gridLayout->addWidget(lcdNumber, 0, 0, 1, 1);

        lcdNumber_3 = new QLCDNumber(frame);
        lcdNumber_3->setObjectName("lcdNumber_3");

        gridLayout->addWidget(lcdNumber_3, 2, 0, 1, 1);

        lcdNumber_4 = new QLCDNumber(frame);
        lcdNumber_4->setObjectName("lcdNumber_4");

        gridLayout->addWidget(lcdNumber_4, 0, 1, 1, 1);

        lcdNumber_7 = new QLCDNumber(frame);
        lcdNumber_7->setObjectName("lcdNumber_7");

        gridLayout->addWidget(lcdNumber_7, 0, 2, 1, 1);

        lcdNumber_8 = new QLCDNumber(frame);
        lcdNumber_8->setObjectName("lcdNumber_8");

        gridLayout->addWidget(lcdNumber_8, 1, 2, 1, 1);

        lcdNumber_9 = new QLCDNumber(frame);
        lcdNumber_9->setObjectName("lcdNumber_9");

        gridLayout->addWidget(lcdNumber_9, 2, 2, 1, 1);


        verticalLayout->addWidget(frame);

        frame_2 = new QFrame(centralwidget);
        frame_2->setObjectName("frame_2");
        frame_2->setBaseSize(QSize(0, 10));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        frame_3 = new QFrame(frame_2);
        frame_3->setObjectName("frame_3");
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame_3);
        horizontalLayout->setObjectName("horizontalLayout");
        frame_4 = new QFrame(frame_3);
        frame_4->setObjectName("frame_4");
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame_4);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 20, 80, 21));
        label_2 = new QLabel(frame_4);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 90, 80, 21));
        spinBox = new QSpinBox(frame_4);
        spinBox->setObjectName("spinBox");
        spinBox->setGeometry(QRect(80, 80, 191, 29));
        score = new QLabel(frame_4);
        score->setObjectName("score");
        score->setGeometry(QRect(80, 10, 351, 41));
        QFont font;
        font.setPointSize(20);
        score->setFont(font);
        pushButton_2 = new QPushButton(frame_4);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(170, 140, 106, 30));

        horizontalLayout->addWidget(frame_4);

        frame_5 = new QFrame(frame_3);
        frame_5->setObjectName("frame_5");
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);

        horizontalLayout->addWidget(frame_5);


        verticalLayout_2->addWidget(frame_3);

        pushButton = new QPushButton(frame_2);
        pushButton->setObjectName("pushButton");

        verticalLayout_2->addWidget(pushButton);


        verticalLayout->addWidget(frame_2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 962, 26));
        menulevel = new QMenu(menubar);
        menulevel->setObjectName("menulevel");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menulevel->menuAction());
        menulevel->addAction(actioneasy);
        menulevel->addAction(actionmedium);
        menulevel->addAction(actionhard);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Tragamonedas", nullptr));
        actioneasy->setText(QCoreApplication::translate("MainWindow", "easy", nullptr));
        actionmedium->setText(QCoreApplication::translate("MainWindow", "medium", nullptr));
        actionhard->setText(QCoreApplication::translate("MainWindow", "hard", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "score: ", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "coins: ", nullptr));
        score->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Bet", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "play", nullptr));
        menulevel->setTitle(QCoreApplication::translate("MainWindow", "level", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
