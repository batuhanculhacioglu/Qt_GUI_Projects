/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_pushButtonClose
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *pushButtonClose)
    {
        if (pushButtonClose->objectName().isEmpty())
            pushButtonClose->setObjectName("pushButtonClose");
        pushButtonClose->resize(800, 600);
        centralwidget = new QWidget(pushButtonClose);
        centralwidget->setObjectName("centralwidget");
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(170, 260, 101, 31));
        pushButtonClose->setCentralWidget(centralwidget);
        menubar = new QMenuBar(pushButtonClose);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        pushButtonClose->setMenuBar(menubar);
        statusbar = new QStatusBar(pushButtonClose);
        statusbar->setObjectName("statusbar");
        pushButtonClose->setStatusBar(statusbar);

        retranslateUi(pushButtonClose);
        QObject::connect(pushButton, &QPushButton::clicked, pushButtonClose, qOverload<>(&QMainWindow::close));

        QMetaObject::connectSlotsByName(pushButtonClose);
    } // setupUi

    void retranslateUi(QMainWindow *pushButtonClose)
    {
        pushButtonClose->setWindowTitle(QCoreApplication::translate("pushButtonClose", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("pushButtonClose", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class pushButtonClose: public Ui_pushButtonClose {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
