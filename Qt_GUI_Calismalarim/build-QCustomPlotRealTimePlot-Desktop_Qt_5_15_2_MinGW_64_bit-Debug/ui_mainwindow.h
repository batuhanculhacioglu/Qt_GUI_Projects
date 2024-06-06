/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QCustomPlot *customPlot;
    QPushButton *stopButton;
    QPushButton *startButton;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QCheckBox *showAccelXGraph;
    QCheckBox *showAccelYGraph;
    QCheckBox *showAccelZGraph;
    QCheckBox *autoScroll;
    QPushButton *clearAccelGraph;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        customPlot = new QCustomPlot(centralwidget);
        customPlot->setObjectName(QString::fromUtf8("customPlot"));
        customPlot->setGeometry(QRect(50, 30, 611, 461));
        stopButton = new QPushButton(centralwidget);
        stopButton->setObjectName(QString::fromUtf8("stopButton"));
        stopButton->setGeometry(QRect(610, 510, 75, 24));
        startButton = new QPushButton(centralwidget);
        startButton->setObjectName(QString::fromUtf8("startButton"));
        startButton->setGeometry(QRect(520, 510, 75, 24));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(680, 30, 111, 134));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        showAccelXGraph = new QCheckBox(layoutWidget);
        showAccelXGraph->setObjectName(QString::fromUtf8("showAccelXGraph"));
        showAccelXGraph->setChecked(true);

        verticalLayout->addWidget(showAccelXGraph);

        showAccelYGraph = new QCheckBox(layoutWidget);
        showAccelYGraph->setObjectName(QString::fromUtf8("showAccelYGraph"));
        showAccelYGraph->setChecked(true);

        verticalLayout->addWidget(showAccelYGraph);

        showAccelZGraph = new QCheckBox(layoutWidget);
        showAccelZGraph->setObjectName(QString::fromUtf8("showAccelZGraph"));
        showAccelZGraph->setChecked(true);

        verticalLayout->addWidget(showAccelZGraph);

        autoScroll = new QCheckBox(layoutWidget);
        autoScroll->setObjectName(QString::fromUtf8("autoScroll"));
        autoScroll->setChecked(true);

        verticalLayout->addWidget(autoScroll);

        clearAccelGraph = new QPushButton(layoutWidget);
        clearAccelGraph->setObjectName(QString::fromUtf8("clearAccelGraph"));

        verticalLayout->addWidget(clearAccelGraph);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        stopButton->setText(QCoreApplication::translate("MainWindow", "Stop", nullptr));
        startButton->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
        showAccelXGraph->setText(QCoreApplication::translate("MainWindow", "Accel X G\303\266ster", nullptr));
        showAccelYGraph->setText(QCoreApplication::translate("MainWindow", "Accel Y G\303\266ster", nullptr));
        showAccelZGraph->setText(QCoreApplication::translate("MainWindow", "Accel Z G\303\266ster", nullptr));
        autoScroll->setText(QCoreApplication::translate("MainWindow", "Otomatik Kayd\304\261r", nullptr));
        clearAccelGraph->setText(QCoreApplication::translate("MainWindow", "Grafi\304\237i Temizle", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
