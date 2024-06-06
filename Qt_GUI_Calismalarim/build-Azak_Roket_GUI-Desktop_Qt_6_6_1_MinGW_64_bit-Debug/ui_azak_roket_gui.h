/********************************************************************************
** Form generated from reading UI file 'azak_roket_gui.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AZAK_ROKET_GUI_H
#define UI_AZAK_ROKET_GUI_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Azak_Roket_GUI
{
public:
    QWidget *centralwidget;
    QPushButton *closeButton;
    QGroupBox *groupBoxSensor;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *textGyroX;
    QLabel *textGyroY;
    QLabel *textGyroZ;
    QVBoxLayout *verticalLayout_4;
    QLabel *gyroX;
    QLabel *gyroY;
    QLabel *gyroZ;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_5;
    QLabel *textAngle;
    QLabel *angle;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_4;
    QLabel *textPress;
    QLabel *press;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *textAccX;
    QLabel *textAccY;
    QLabel *textAccZ;
    QVBoxLayout *verticalLayout;
    QLabel *accX;
    QLabel *accY;
    QLabel *accZ;
    QGroupBox *groupBoxGPS;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_5;
    QLabel *textLatitude;
    QLabel *textLongitude;
    QVBoxLayout *verticalLayout_6;
    QLabel *latitude;
    QLabel *longitude;
    QGroupBox *groupBoxParachute;
    QWidget *layoutWidget_4;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout_7;
    QLabel *textDragP;
    QLabel *textMainP;
    QVBoxLayout *verticalLayout_8;
    QLabel *dragP;
    QLabel *mainP;
    QGroupBox *groupBoxPort;
    QWidget *layoutWidget3;
    QVBoxLayout *verticalLayout_9;
    QHBoxLayout *horizontalLayout_7;
    QLabel *textBaudRate;
    QComboBox *comboBoxBaudRate;
    QHBoxLayout *horizontalLayout_8;
    QLabel *textComPort;
    QComboBox *comboBoxComPort;
    QWidget *layoutWidget4;
    QHBoxLayout *horizontalLayout_9;
    QPushButton *connectButton;
    QPushButton *disconnectButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Azak_Roket_GUI)
    {
        if (Azak_Roket_GUI->objectName().isEmpty())
            Azak_Roket_GUI->setObjectName("Azak_Roket_GUI");
        Azak_Roket_GUI->resize(488, 533);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../Masa/AZAK_LOGO.png"), QSize(), QIcon::Normal, QIcon::Off);
        Azak_Roket_GUI->setWindowIcon(icon);
        centralwidget = new QWidget(Azak_Roket_GUI);
        centralwidget->setObjectName("centralwidget");
        closeButton = new QPushButton(centralwidget);
        closeButton->setObjectName("closeButton");
        closeButton->setGeometry(QRect(400, 460, 75, 24));
        groupBoxSensor = new QGroupBox(centralwidget);
        groupBoxSensor->setObjectName("groupBoxSensor");
        groupBoxSensor->setGeometry(QRect(40, 40, 161, 381));
        QFont font;
        font.setBold(true);
        groupBoxSensor->setFont(font);
        layoutWidget = new QWidget(groupBoxSensor);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(20, 150, 131, 101));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        textGyroX = new QLabel(layoutWidget);
        textGyroX->setObjectName("textGyroX");

        verticalLayout_3->addWidget(textGyroX);

        textGyroY = new QLabel(layoutWidget);
        textGyroY->setObjectName("textGyroY");

        verticalLayout_3->addWidget(textGyroY);

        textGyroZ = new QLabel(layoutWidget);
        textGyroZ->setObjectName("textGyroZ");

        verticalLayout_3->addWidget(textGyroZ);


        horizontalLayout_2->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        gyroX = new QLabel(layoutWidget);
        gyroX->setObjectName("gyroX");

        verticalLayout_4->addWidget(gyroX);

        gyroY = new QLabel(layoutWidget);
        gyroY->setObjectName("gyroY");

        verticalLayout_4->addWidget(gyroY);

        gyroZ = new QLabel(layoutWidget);
        gyroZ->setObjectName("gyroZ");

        verticalLayout_4->addWidget(gyroZ);


        horizontalLayout_2->addLayout(verticalLayout_4);

        layoutWidget_3 = new QWidget(groupBoxSensor);
        layoutWidget_3->setObjectName("layoutWidget_3");
        layoutWidget_3->setGeometry(QRect(20, 340, 131, 31));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        textAngle = new QLabel(layoutWidget_3);
        textAngle->setObjectName("textAngle");

        horizontalLayout_5->addWidget(textAngle);

        angle = new QLabel(layoutWidget_3);
        angle->setObjectName("angle");

        horizontalLayout_5->addWidget(angle);

        layoutWidget1 = new QWidget(groupBoxSensor);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(20, 280, 131, 31));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        textPress = new QLabel(layoutWidget1);
        textPress->setObjectName("textPress");

        horizontalLayout_4->addWidget(textPress);

        press = new QLabel(layoutWidget1);
        press->setObjectName("press");

        horizontalLayout_4->addWidget(press);

        layoutWidget2 = new QWidget(groupBoxSensor);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(20, 30, 131, 101));
        horizontalLayout = new QHBoxLayout(layoutWidget2);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        textAccX = new QLabel(layoutWidget2);
        textAccX->setObjectName("textAccX");

        verticalLayout_2->addWidget(textAccX);

        textAccY = new QLabel(layoutWidget2);
        textAccY->setObjectName("textAccY");

        verticalLayout_2->addWidget(textAccY);

        textAccZ = new QLabel(layoutWidget2);
        textAccZ->setObjectName("textAccZ");

        verticalLayout_2->addWidget(textAccZ);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        accX = new QLabel(layoutWidget2);
        accX->setObjectName("accX");

        verticalLayout->addWidget(accX);

        accY = new QLabel(layoutWidget2);
        accY->setObjectName("accY");

        verticalLayout->addWidget(accY);

        accZ = new QLabel(layoutWidget2);
        accZ->setObjectName("accZ");

        verticalLayout->addWidget(accZ);


        horizontalLayout->addLayout(verticalLayout);

        groupBoxGPS = new QGroupBox(centralwidget);
        groupBoxGPS->setObjectName("groupBoxGPS");
        groupBoxGPS->setGeometry(QRect(260, 40, 211, 101));
        groupBoxGPS->setFont(font);
        layoutWidget_2 = new QWidget(groupBoxGPS);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(10, 30, 131, 61));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        textLatitude = new QLabel(layoutWidget_2);
        textLatitude->setObjectName("textLatitude");

        verticalLayout_5->addWidget(textLatitude);

        textLongitude = new QLabel(layoutWidget_2);
        textLongitude->setObjectName("textLongitude");

        verticalLayout_5->addWidget(textLongitude);


        horizontalLayout_3->addLayout(verticalLayout_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        latitude = new QLabel(layoutWidget_2);
        latitude->setObjectName("latitude");

        verticalLayout_6->addWidget(latitude);

        longitude = new QLabel(layoutWidget_2);
        longitude->setObjectName("longitude");

        verticalLayout_6->addWidget(longitude);


        horizontalLayout_3->addLayout(verticalLayout_6);

        groupBoxParachute = new QGroupBox(centralwidget);
        groupBoxParachute->setObjectName("groupBoxParachute");
        groupBoxParachute->setGeometry(QRect(260, 150, 211, 101));
        groupBoxParachute->setFont(font);
        layoutWidget_4 = new QWidget(groupBoxParachute);
        layoutWidget_4->setObjectName("layoutWidget_4");
        layoutWidget_4->setGeometry(QRect(10, 30, 194, 61));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget_4);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName("verticalLayout_7");
        textDragP = new QLabel(layoutWidget_4);
        textDragP->setObjectName("textDragP");

        verticalLayout_7->addWidget(textDragP);

        textMainP = new QLabel(layoutWidget_4);
        textMainP->setObjectName("textMainP");

        verticalLayout_7->addWidget(textMainP);


        horizontalLayout_6->addLayout(verticalLayout_7);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName("verticalLayout_8");
        dragP = new QLabel(layoutWidget_4);
        dragP->setObjectName("dragP");

        verticalLayout_8->addWidget(dragP);

        mainP = new QLabel(layoutWidget_4);
        mainP->setObjectName("mainP");

        verticalLayout_8->addWidget(mainP);


        horizontalLayout_6->addLayout(verticalLayout_8);

        groupBoxPort = new QGroupBox(centralwidget);
        groupBoxPort->setObjectName("groupBoxPort");
        groupBoxPort->setGeometry(QRect(260, 270, 211, 151));
        groupBoxPort->setFont(font);
        layoutWidget3 = new QWidget(groupBoxPort);
        layoutWidget3->setObjectName("layoutWidget3");
        layoutWidget3->setGeometry(QRect(10, 30, 181, 81));
        verticalLayout_9 = new QVBoxLayout(layoutWidget3);
        verticalLayout_9->setObjectName("verticalLayout_9");
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        textBaudRate = new QLabel(layoutWidget3);
        textBaudRate->setObjectName("textBaudRate");

        horizontalLayout_7->addWidget(textBaudRate);

        comboBoxBaudRate = new QComboBox(layoutWidget3);
        comboBoxBaudRate->addItem(QString());
        comboBoxBaudRate->addItem(QString());
        comboBoxBaudRate->addItem(QString());
        comboBoxBaudRate->setObjectName("comboBoxBaudRate");

        horizontalLayout_7->addWidget(comboBoxBaudRate);


        verticalLayout_9->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        textComPort = new QLabel(layoutWidget3);
        textComPort->setObjectName("textComPort");

        horizontalLayout_8->addWidget(textComPort);

        comboBoxComPort = new QComboBox(layoutWidget3);
        comboBoxComPort->setObjectName("comboBoxComPort");

        horizontalLayout_8->addWidget(comboBoxComPort);


        verticalLayout_9->addLayout(horizontalLayout_8);

        layoutWidget4 = new QWidget(groupBoxPort);
        layoutWidget4->setObjectName("layoutWidget4");
        layoutWidget4->setGeometry(QRect(10, 120, 181, 26));
        horizontalLayout_9 = new QHBoxLayout(layoutWidget4);
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        connectButton = new QPushButton(layoutWidget4);
        connectButton->setObjectName("connectButton");

        horizontalLayout_9->addWidget(connectButton);

        disconnectButton = new QPushButton(layoutWidget4);
        disconnectButton->setObjectName("disconnectButton");

        horizontalLayout_9->addWidget(disconnectButton);

        Azak_Roket_GUI->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Azak_Roket_GUI);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 488, 22));
        Azak_Roket_GUI->setMenuBar(menubar);
        statusbar = new QStatusBar(Azak_Roket_GUI);
        statusbar->setObjectName("statusbar");
        Azak_Roket_GUI->setStatusBar(statusbar);

        retranslateUi(Azak_Roket_GUI);

        QMetaObject::connectSlotsByName(Azak_Roket_GUI);
    } // setupUi

    void retranslateUi(QMainWindow *Azak_Roket_GUI)
    {
        Azak_Roket_GUI->setWindowTitle(QCoreApplication::translate("Azak_Roket_GUI", "Azak Roket Tak\304\261m\304\261 Yer \304\260stasyonu", nullptr));
        closeButton->setText(QCoreApplication::translate("Azak_Roket_GUI", "Close", nullptr));
        groupBoxSensor->setTitle(QCoreApplication::translate("Azak_Roket_GUI", "Sens\303\266r Verileri", nullptr));
        textGyroX->setText(QCoreApplication::translate("Azak_Roket_GUI", "Gyro X :", nullptr));
        textGyroY->setText(QCoreApplication::translate("Azak_Roket_GUI", "Gyro Y :", nullptr));
        textGyroZ->setText(QCoreApplication::translate("Azak_Roket_GUI", "Gyro Z :", nullptr));
        gyroX->setText(QCoreApplication::translate("Azak_Roket_GUI", "???", nullptr));
        gyroY->setText(QCoreApplication::translate("Azak_Roket_GUI", "???", nullptr));
        gyroZ->setText(QCoreApplication::translate("Azak_Roket_GUI", "???", nullptr));
        textAngle->setText(QCoreApplication::translate("Azak_Roket_GUI", "A\303\247\304\261", nullptr));
        angle->setText(QCoreApplication::translate("Azak_Roket_GUI", "???", nullptr));
        textPress->setText(QCoreApplication::translate("Azak_Roket_GUI", "Y\303\274kseklik :", nullptr));
        press->setText(QCoreApplication::translate("Azak_Roket_GUI", "???", nullptr));
        textAccX->setText(QCoreApplication::translate("Azak_Roket_GUI", "\304\260vme X :", nullptr));
        textAccY->setText(QCoreApplication::translate("Azak_Roket_GUI", "\304\260vme Y :", nullptr));
        textAccZ->setText(QCoreApplication::translate("Azak_Roket_GUI", "\304\260vme Z :", nullptr));
        accX->setText(QCoreApplication::translate("Azak_Roket_GUI", "???", nullptr));
        accY->setText(QCoreApplication::translate("Azak_Roket_GUI", "???", nullptr));
        accZ->setText(QCoreApplication::translate("Azak_Roket_GUI", "???", nullptr));
        groupBoxGPS->setTitle(QCoreApplication::translate("Azak_Roket_GUI", "GPS Verileri", nullptr));
        textLatitude->setText(QCoreApplication::translate("Azak_Roket_GUI", "Enlem :", nullptr));
        textLongitude->setText(QCoreApplication::translate("Azak_Roket_GUI", "Boylam :", nullptr));
        latitude->setText(QCoreApplication::translate("Azak_Roket_GUI", "???", nullptr));
        longitude->setText(QCoreApplication::translate("Azak_Roket_GUI", "???", nullptr));
        groupBoxParachute->setTitle(QCoreApplication::translate("Azak_Roket_GUI", "Para\305\237\303\274t Durum", nullptr));
        textDragP->setText(QCoreApplication::translate("Azak_Roket_GUI", "S\303\274r\303\274klenme Para\305\237\303\274t\303\274 Durum :", nullptr));
        textMainP->setText(QCoreApplication::translate("Azak_Roket_GUI", "Ana Para\305\237\303\274t Durum : ", nullptr));
        dragP->setText(QCoreApplication::translate("Azak_Roket_GUI", "???", nullptr));
        mainP->setText(QCoreApplication::translate("Azak_Roket_GUI", "???", nullptr));
        groupBoxPort->setTitle(QCoreApplication::translate("Azak_Roket_GUI", "Port Ba\304\237lant\304\261", nullptr));
        textBaudRate->setText(QCoreApplication::translate("Azak_Roket_GUI", "BaudRate : ", nullptr));
        comboBoxBaudRate->setItemText(0, QCoreApplication::translate("Azak_Roket_GUI", "9600", nullptr));
        comboBoxBaudRate->setItemText(1, QCoreApplication::translate("Azak_Roket_GUI", "57600", nullptr));
        comboBoxBaudRate->setItemText(2, QCoreApplication::translate("Azak_Roket_GUI", "115200", nullptr));

        textComPort->setText(QCoreApplication::translate("Azak_Roket_GUI", "COMPort : ", nullptr));
        connectButton->setText(QCoreApplication::translate("Azak_Roket_GUI", "Ba\304\237lan", nullptr));
        disconnectButton->setText(QCoreApplication::translate("Azak_Roket_GUI", "Ba\304\237lant\304\261y\304\261 Kes", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Azak_Roket_GUI: public Ui_Azak_Roket_GUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AZAK_ROKET_GUI_H
