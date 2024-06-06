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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "rocketsimwidget.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QProgressBar *progressBar;
    QFrame *line_4;
    QLabel *label_12;
    QFrame *line_1;
    rocketSimWidget *widget;
    QLabel *label_3;
    QFrame *line_2;
    QFrame *line_3;
    QLabel *label_6;
    QProgressBar *progressBar_2;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *layoutLabelRot;
    QLabel *labelxRot;
    QLabel *labelyRot;
    QLabel *labelzRot;
    QVBoxLayout *layoutRot;
    QLabel *xRot;
    QLabel *yRot;
    QLabel *zRot;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *layoutLabelRotCam;
    QLabel *labelxRotCam;
    QLabel *labelyRotCam;
    QLabel *labelzRotCam;
    QVBoxLayout *layoutRotCam;
    QLabel *xRotCam;
    QLabel *yRotCam;
    QLabel *zRotCam;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *layoutLabelAngle;
    QLabel *labelx;
    QLabel *labely;
    QLabel *labelz;
    QVBoxLayout *layoutAngle;
    QLabel *xAngle;
    QLabel *yAngle;
    QLabel *zAngle;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_9;
    QPushButton *pushButton;
    QWidget *widget_2;
    QGroupBox *groupBoxParachute;
    QWidget *layoutWidget_10;
    QHBoxLayout *horizontalLayout_14;
    QVBoxLayout *verticalLayout_10;
    QLabel *textDragP_2;
    QLabel *textMainP_2;
    QVBoxLayout *verticalLayout_11;
    QLabel *dragP_2;
    QLabel *mainP_2;
    QGroupBox *groupBoxSensor;
    QWidget *layoutWidget_11;
    QHBoxLayout *horizontalLayout_15;
    QVBoxLayout *verticalLayout_12;
    QLabel *textGyroX_2;
    QLabel *textGyroY_2;
    QLabel *textGyroZ_2;
    QVBoxLayout *verticalLayout_13;
    QLabel *gyroX_2;
    QLabel *gyroY_2;
    QLabel *gyroZ_2;
    QWidget *layoutWidget_12;
    QHBoxLayout *horizontalLayout_16;
    QLabel *textAngle_2;
    QLabel *angle_2;
    QWidget *layoutWidget_13;
    QHBoxLayout *horizontalLayout_17;
    QLabel *textPress_2;
    QLabel *press_2;
    QWidget *layoutWidget_14;
    QHBoxLayout *horizontalLayout_18;
    QVBoxLayout *verticalLayout_14;
    QLabel *textAccX_2;
    QLabel *textAccY_2;
    QLabel *textAccZ_2;
    QVBoxLayout *verticalLayout_15;
    QLabel *accX_2;
    QLabel *accY_2;
    QLabel *accZ_2;
    QGroupBox *groupBoxPort;
    QWidget *layoutWidget_15;
    QVBoxLayout *verticalLayout_16;
    QHBoxLayout *horizontalLayout_19;
    QLabel *textBaudRate_2;
    QComboBox *comboBoxBaudRate_2;
    QHBoxLayout *horizontalLayout_20;
    QLabel *textComPort_2;
    QComboBox *comboBoxComPort_2;
    QWidget *layoutWidget_16;
    QHBoxLayout *horizontalLayout_21;
    QPushButton *connectButton_2;
    QPushButton *disconnectButton_2;
    QGroupBox *groupBoxGPS;
    QWidget *layoutWidget_17;
    QHBoxLayout *horizontalLayout_22;
    QVBoxLayout *verticalLayout_17;
    QLabel *textLatitude_2;
    QLabel *textLongitude_2;
    QVBoxLayout *verticalLayout_18;
    QLabel *latitude_2;
    QLabel *longitude_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1900, 701);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        progressBar = new QProgressBar(centralwidget);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setGeometry(QRect(600, 16, 24, 561));
        QFont font;
        font.setPointSize(9);
        progressBar->setFont(font);
        progressBar->setLayoutDirection(Qt::LeftToRight);
        progressBar->setAutoFillBackground(false);
        progressBar->setStyleSheet(QString::fromUtf8("QProgressBar {\n"
"    border: none; /* Kenarl\304\261\304\237\304\261 kald\304\261r\304\261r */\n"
"    background-color: transparent; /* Arkaplan rengini transparan yapar */\n"
"}\n"
"\n"
"QProgressBar::chunk {\n"
"    background-color: red; /* \304\260lerleme \303\247izgilerinin ba\305\237lang\304\261\303\247 rengi (siyah) */\n"
"    width: 10px; /* Her bir ilerleme noktas\304\261n\304\261n geni\305\237li\304\237i */\n"
"    margin: 5px; /* Noktalar aras\304\261ndaki bo\305\237luk */\n"
"	height: 4px;\n"
"}"));
        progressBar->setMaximum(13320);
        progressBar->setValue(0);
        progressBar->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        progressBar->setTextVisible(true);
        progressBar->setOrientation(Qt::Vertical);
        progressBar->setInvertedAppearance(false);
        progressBar->setTextDirection(QProgressBar::TopToBottom);
        line_4 = new QFrame(centralwidget);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setGeometry(QRect(625, 78, 70, 3));
        line_4->setFrameShadow(QFrame::Plain);
        line_4->setLineWidth(10);
        line_4->setMidLineWidth(2);
        line_4->setFrameShape(QFrame::HLine);
        label_12 = new QLabel(centralwidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(650, 64, 49, 16));
        line_1 = new QFrame(centralwidget);
        line_1->setObjectName(QString::fromUtf8("line_1"));
        line_1->setGeometry(QRect(625, 456, 70, 3));
        line_1->setFrameShadow(QFrame::Plain);
        line_1->setLineWidth(10);
        line_1->setMidLineWidth(2);
        line_1->setFrameShape(QFrame::HLine);
        widget = new rocketSimWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 16, 574, 564));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(650, 442, 49, 16));
        line_2 = new QFrame(centralwidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(625, 330, 70, 3));
        line_2->setFrameShadow(QFrame::Plain);
        line_2->setLineWidth(10);
        line_2->setMidLineWidth(2);
        line_2->setFrameShape(QFrame::HLine);
        line_3 = new QFrame(centralwidget);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(625, 204, 70, 3));
        line_3->setFrameShadow(QFrame::Plain);
        line_3->setLineWidth(10);
        line_3->setMidLineWidth(2);
        line_3->setFrameShape(QFrame::HLine);
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(650, 316, 49, 16));
        progressBar_2 = new QProgressBar(centralwidget);
        progressBar_2->setObjectName(QString::fromUtf8("progressBar_2"));
        progressBar_2->setGeometry(QRect(600, 16, 24, 561));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(progressBar_2->sizePolicy().hasHeightForWidth());
        progressBar_2->setSizePolicy(sizePolicy1);
        progressBar_2->setStyleSheet(QString::fromUtf8("QProgressBar {\n"
"    border: none; /* Kenarl\304\261\304\237\304\261 kald\304\261r\304\261r */\n"
"    background-color: transparent; /* Arkaplan rengini transparan yapar */\n"
"}\n"
"\n"
"QProgressBar::chunk {\n"
"    background-color: black; /* \304\260lerleme \303\247izgilerinin ba\305\237lang\304\261\303\247 rengi (siyah) */\n"
"    width: 10px; /* Her bir ilerleme noktas\304\261n\304\261n geni\305\237li\304\237i */\n"
"    margin: 5px; /* Noktalar aras\304\261ndaki bo\305\237luk */\n"
"	height: 4px;\n"
"}"));
        progressBar_2->setMaximum(13120);
        progressBar_2->setValue(13120);
        progressBar_2->setOrientation(Qt::Vertical);
        progressBar_2->setTextDirection(QProgressBar::TopToBottom);
        layoutWidget_2 = new QWidget(centralwidget);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(20, 586, 571, 66));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_5 = new QSpacerItem(68, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_5);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        layoutLabelRot = new QVBoxLayout();
        layoutLabelRot->setObjectName(QString::fromUtf8("layoutLabelRot"));
        labelxRot = new QLabel(layoutWidget_2);
        labelxRot->setObjectName(QString::fromUtf8("labelxRot"));

        layoutLabelRot->addWidget(labelxRot);

        labelyRot = new QLabel(layoutWidget_2);
        labelyRot->setObjectName(QString::fromUtf8("labelyRot"));

        layoutLabelRot->addWidget(labelyRot);

        labelzRot = new QLabel(layoutWidget_2);
        labelzRot->setObjectName(QString::fromUtf8("labelzRot"));

        layoutLabelRot->addWidget(labelzRot);


        horizontalLayout_3->addLayout(layoutLabelRot);

        layoutRot = new QVBoxLayout();
        layoutRot->setObjectName(QString::fromUtf8("layoutRot"));
        xRot = new QLabel(layoutWidget_2);
        xRot->setObjectName(QString::fromUtf8("xRot"));

        layoutRot->addWidget(xRot);

        yRot = new QLabel(layoutWidget_2);
        yRot->setObjectName(QString::fromUtf8("yRot"));

        layoutRot->addWidget(yRot);

        zRot = new QLabel(layoutWidget_2);
        zRot->setObjectName(QString::fromUtf8("zRot"));

        layoutRot->addWidget(zRot);


        horizontalLayout_3->addLayout(layoutRot);


        horizontalLayout_7->addLayout(horizontalLayout_3);

        horizontalSpacer_3 = new QSpacerItem(68, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        layoutLabelRotCam = new QVBoxLayout();
        layoutLabelRotCam->setObjectName(QString::fromUtf8("layoutLabelRotCam"));
        labelxRotCam = new QLabel(layoutWidget_2);
        labelxRotCam->setObjectName(QString::fromUtf8("labelxRotCam"));

        layoutLabelRotCam->addWidget(labelxRotCam);

        labelyRotCam = new QLabel(layoutWidget_2);
        labelyRotCam->setObjectName(QString::fromUtf8("labelyRotCam"));

        layoutLabelRotCam->addWidget(labelyRotCam);

        labelzRotCam = new QLabel(layoutWidget_2);
        labelzRotCam->setObjectName(QString::fromUtf8("labelzRotCam"));

        layoutLabelRotCam->addWidget(labelzRotCam);


        horizontalLayout->addLayout(layoutLabelRotCam);

        layoutRotCam = new QVBoxLayout();
        layoutRotCam->setObjectName(QString::fromUtf8("layoutRotCam"));
        xRotCam = new QLabel(layoutWidget_2);
        xRotCam->setObjectName(QString::fromUtf8("xRotCam"));

        layoutRotCam->addWidget(xRotCam);

        yRotCam = new QLabel(layoutWidget_2);
        yRotCam->setObjectName(QString::fromUtf8("yRotCam"));

        layoutRotCam->addWidget(yRotCam);

        zRotCam = new QLabel(layoutWidget_2);
        zRotCam->setObjectName(QString::fromUtf8("zRotCam"));

        layoutRotCam->addWidget(zRotCam);


        horizontalLayout->addLayout(layoutRotCam);


        horizontalLayout_7->addLayout(horizontalLayout);

        horizontalSpacer_2 = new QSpacerItem(68, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        layoutLabelAngle = new QVBoxLayout();
        layoutLabelAngle->setObjectName(QString::fromUtf8("layoutLabelAngle"));
        labelx = new QLabel(layoutWidget_2);
        labelx->setObjectName(QString::fromUtf8("labelx"));

        layoutLabelAngle->addWidget(labelx);

        labely = new QLabel(layoutWidget_2);
        labely->setObjectName(QString::fromUtf8("labely"));

        layoutLabelAngle->addWidget(labely);

        labelz = new QLabel(layoutWidget_2);
        labelz->setObjectName(QString::fromUtf8("labelz"));

        layoutLabelAngle->addWidget(labelz);


        horizontalLayout_2->addLayout(layoutLabelAngle);

        layoutAngle = new QVBoxLayout();
        layoutAngle->setObjectName(QString::fromUtf8("layoutAngle"));
        xAngle = new QLabel(layoutWidget_2);
        xAngle->setObjectName(QString::fromUtf8("xAngle"));

        layoutAngle->addWidget(xAngle);

        yAngle = new QLabel(layoutWidget_2);
        yAngle->setObjectName(QString::fromUtf8("yAngle"));

        layoutAngle->addWidget(yAngle);

        zAngle = new QLabel(layoutWidget_2);
        zAngle->setObjectName(QString::fromUtf8("zAngle"));

        layoutAngle->addWidget(zAngle);


        horizontalLayout_2->addLayout(layoutAngle);


        horizontalLayout_7->addLayout(horizontalLayout_2);

        horizontalSpacer_4 = new QSpacerItem(68, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_4);

        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(650, 190, 49, 16));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(720, 620, 82, 24));
        widget_2 = new QWidget(centralwidget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(830, 50, 521, 441));
        groupBoxParachute = new QGroupBox(widget_2);
        groupBoxParachute->setObjectName(QString::fromUtf8("groupBoxParachute"));
        groupBoxParachute->setGeometry(QRect(280, 150, 211, 101));
        QFont font1;
        font1.setBold(true);
        groupBoxParachute->setFont(font1);
        layoutWidget_10 = new QWidget(groupBoxParachute);
        layoutWidget_10->setObjectName(QString::fromUtf8("layoutWidget_10"));
        layoutWidget_10->setGeometry(QRect(10, 30, 194, 61));
        horizontalLayout_14 = new QHBoxLayout(layoutWidget_10);
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        horizontalLayout_14->setContentsMargins(0, 0, 0, 0);
        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        textDragP_2 = new QLabel(layoutWidget_10);
        textDragP_2->setObjectName(QString::fromUtf8("textDragP_2"));

        verticalLayout_10->addWidget(textDragP_2);

        textMainP_2 = new QLabel(layoutWidget_10);
        textMainP_2->setObjectName(QString::fromUtf8("textMainP_2"));

        verticalLayout_10->addWidget(textMainP_2);


        horizontalLayout_14->addLayout(verticalLayout_10);

        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        dragP_2 = new QLabel(layoutWidget_10);
        dragP_2->setObjectName(QString::fromUtf8("dragP_2"));

        verticalLayout_11->addWidget(dragP_2);

        mainP_2 = new QLabel(layoutWidget_10);
        mainP_2->setObjectName(QString::fromUtf8("mainP_2"));

        verticalLayout_11->addWidget(mainP_2);


        horizontalLayout_14->addLayout(verticalLayout_11);

        groupBoxSensor = new QGroupBox(widget_2);
        groupBoxSensor->setObjectName(QString::fromUtf8("groupBoxSensor"));
        groupBoxSensor->setGeometry(QRect(10, 10, 161, 381));
        groupBoxSensor->setFont(font1);
        layoutWidget_11 = new QWidget(groupBoxSensor);
        layoutWidget_11->setObjectName(QString::fromUtf8("layoutWidget_11"));
        layoutWidget_11->setGeometry(QRect(20, 150, 131, 101));
        horizontalLayout_15 = new QHBoxLayout(layoutWidget_11);
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        horizontalLayout_15->setContentsMargins(0, 0, 0, 0);
        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        textGyroX_2 = new QLabel(layoutWidget_11);
        textGyroX_2->setObjectName(QString::fromUtf8("textGyroX_2"));

        verticalLayout_12->addWidget(textGyroX_2);

        textGyroY_2 = new QLabel(layoutWidget_11);
        textGyroY_2->setObjectName(QString::fromUtf8("textGyroY_2"));

        verticalLayout_12->addWidget(textGyroY_2);

        textGyroZ_2 = new QLabel(layoutWidget_11);
        textGyroZ_2->setObjectName(QString::fromUtf8("textGyroZ_2"));

        verticalLayout_12->addWidget(textGyroZ_2);


        horizontalLayout_15->addLayout(verticalLayout_12);

        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        gyroX_2 = new QLabel(layoutWidget_11);
        gyroX_2->setObjectName(QString::fromUtf8("gyroX_2"));

        verticalLayout_13->addWidget(gyroX_2);

        gyroY_2 = new QLabel(layoutWidget_11);
        gyroY_2->setObjectName(QString::fromUtf8("gyroY_2"));

        verticalLayout_13->addWidget(gyroY_2);

        gyroZ_2 = new QLabel(layoutWidget_11);
        gyroZ_2->setObjectName(QString::fromUtf8("gyroZ_2"));

        verticalLayout_13->addWidget(gyroZ_2);


        horizontalLayout_15->addLayout(verticalLayout_13);

        layoutWidget_12 = new QWidget(groupBoxSensor);
        layoutWidget_12->setObjectName(QString::fromUtf8("layoutWidget_12"));
        layoutWidget_12->setGeometry(QRect(20, 340, 131, 31));
        horizontalLayout_16 = new QHBoxLayout(layoutWidget_12);
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        horizontalLayout_16->setContentsMargins(0, 0, 0, 0);
        textAngle_2 = new QLabel(layoutWidget_12);
        textAngle_2->setObjectName(QString::fromUtf8("textAngle_2"));

        horizontalLayout_16->addWidget(textAngle_2);

        angle_2 = new QLabel(layoutWidget_12);
        angle_2->setObjectName(QString::fromUtf8("angle_2"));

        horizontalLayout_16->addWidget(angle_2);

        layoutWidget_13 = new QWidget(groupBoxSensor);
        layoutWidget_13->setObjectName(QString::fromUtf8("layoutWidget_13"));
        layoutWidget_13->setGeometry(QRect(20, 280, 131, 31));
        horizontalLayout_17 = new QHBoxLayout(layoutWidget_13);
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        horizontalLayout_17->setContentsMargins(0, 0, 0, 0);
        textPress_2 = new QLabel(layoutWidget_13);
        textPress_2->setObjectName(QString::fromUtf8("textPress_2"));

        horizontalLayout_17->addWidget(textPress_2);

        press_2 = new QLabel(layoutWidget_13);
        press_2->setObjectName(QString::fromUtf8("press_2"));

        horizontalLayout_17->addWidget(press_2);

        layoutWidget_14 = new QWidget(groupBoxSensor);
        layoutWidget_14->setObjectName(QString::fromUtf8("layoutWidget_14"));
        layoutWidget_14->setGeometry(QRect(20, 30, 131, 101));
        horizontalLayout_18 = new QHBoxLayout(layoutWidget_14);
        horizontalLayout_18->setObjectName(QString::fromUtf8("horizontalLayout_18"));
        horizontalLayout_18->setContentsMargins(0, 0, 0, 0);
        verticalLayout_14 = new QVBoxLayout();
        verticalLayout_14->setObjectName(QString::fromUtf8("verticalLayout_14"));
        textAccX_2 = new QLabel(layoutWidget_14);
        textAccX_2->setObjectName(QString::fromUtf8("textAccX_2"));

        verticalLayout_14->addWidget(textAccX_2);

        textAccY_2 = new QLabel(layoutWidget_14);
        textAccY_2->setObjectName(QString::fromUtf8("textAccY_2"));

        verticalLayout_14->addWidget(textAccY_2);

        textAccZ_2 = new QLabel(layoutWidget_14);
        textAccZ_2->setObjectName(QString::fromUtf8("textAccZ_2"));

        verticalLayout_14->addWidget(textAccZ_2);


        horizontalLayout_18->addLayout(verticalLayout_14);

        verticalLayout_15 = new QVBoxLayout();
        verticalLayout_15->setObjectName(QString::fromUtf8("verticalLayout_15"));
        accX_2 = new QLabel(layoutWidget_14);
        accX_2->setObjectName(QString::fromUtf8("accX_2"));

        verticalLayout_15->addWidget(accX_2);

        accY_2 = new QLabel(layoutWidget_14);
        accY_2->setObjectName(QString::fromUtf8("accY_2"));

        verticalLayout_15->addWidget(accY_2);

        accZ_2 = new QLabel(layoutWidget_14);
        accZ_2->setObjectName(QString::fromUtf8("accZ_2"));

        verticalLayout_15->addWidget(accZ_2);


        horizontalLayout_18->addLayout(verticalLayout_15);

        groupBoxPort = new QGroupBox(widget_2);
        groupBoxPort->setObjectName(QString::fromUtf8("groupBoxPort"));
        groupBoxPort->setGeometry(QRect(280, 270, 211, 151));
        groupBoxPort->setFont(font1);
        layoutWidget_15 = new QWidget(groupBoxPort);
        layoutWidget_15->setObjectName(QString::fromUtf8("layoutWidget_15"));
        layoutWidget_15->setGeometry(QRect(10, 30, 181, 81));
        verticalLayout_16 = new QVBoxLayout(layoutWidget_15);
        verticalLayout_16->setObjectName(QString::fromUtf8("verticalLayout_16"));
        verticalLayout_16->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setObjectName(QString::fromUtf8("horizontalLayout_19"));
        textBaudRate_2 = new QLabel(layoutWidget_15);
        textBaudRate_2->setObjectName(QString::fromUtf8("textBaudRate_2"));

        horizontalLayout_19->addWidget(textBaudRate_2);

        comboBoxBaudRate_2 = new QComboBox(layoutWidget_15);
        comboBoxBaudRate_2->addItem(QString());
        comboBoxBaudRate_2->addItem(QString());
        comboBoxBaudRate_2->addItem(QString());
        comboBoxBaudRate_2->setObjectName(QString::fromUtf8("comboBoxBaudRate_2"));

        horizontalLayout_19->addWidget(comboBoxBaudRate_2);


        verticalLayout_16->addLayout(horizontalLayout_19);

        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setObjectName(QString::fromUtf8("horizontalLayout_20"));
        textComPort_2 = new QLabel(layoutWidget_15);
        textComPort_2->setObjectName(QString::fromUtf8("textComPort_2"));

        horizontalLayout_20->addWidget(textComPort_2);

        comboBoxComPort_2 = new QComboBox(layoutWidget_15);
        comboBoxComPort_2->setObjectName(QString::fromUtf8("comboBoxComPort_2"));

        horizontalLayout_20->addWidget(comboBoxComPort_2);


        verticalLayout_16->addLayout(horizontalLayout_20);

        layoutWidget_16 = new QWidget(groupBoxPort);
        layoutWidget_16->setObjectName(QString::fromUtf8("layoutWidget_16"));
        layoutWidget_16->setGeometry(QRect(10, 120, 181, 26));
        horizontalLayout_21 = new QHBoxLayout(layoutWidget_16);
        horizontalLayout_21->setObjectName(QString::fromUtf8("horizontalLayout_21"));
        horizontalLayout_21->setContentsMargins(0, 0, 0, 0);
        connectButton_2 = new QPushButton(layoutWidget_16);
        connectButton_2->setObjectName(QString::fromUtf8("connectButton_2"));

        horizontalLayout_21->addWidget(connectButton_2);

        disconnectButton_2 = new QPushButton(layoutWidget_16);
        disconnectButton_2->setObjectName(QString::fromUtf8("disconnectButton_2"));

        horizontalLayout_21->addWidget(disconnectButton_2);

        groupBoxGPS = new QGroupBox(widget_2);
        groupBoxGPS->setObjectName(QString::fromUtf8("groupBoxGPS"));
        groupBoxGPS->setGeometry(QRect(280, 40, 211, 101));
        groupBoxGPS->setFont(font1);
        layoutWidget_17 = new QWidget(groupBoxGPS);
        layoutWidget_17->setObjectName(QString::fromUtf8("layoutWidget_17"));
        layoutWidget_17->setGeometry(QRect(10, 30, 131, 61));
        horizontalLayout_22 = new QHBoxLayout(layoutWidget_17);
        horizontalLayout_22->setObjectName(QString::fromUtf8("horizontalLayout_22"));
        horizontalLayout_22->setContentsMargins(0, 0, 0, 0);
        verticalLayout_17 = new QVBoxLayout();
        verticalLayout_17->setObjectName(QString::fromUtf8("verticalLayout_17"));
        textLatitude_2 = new QLabel(layoutWidget_17);
        textLatitude_2->setObjectName(QString::fromUtf8("textLatitude_2"));

        verticalLayout_17->addWidget(textLatitude_2);

        textLongitude_2 = new QLabel(layoutWidget_17);
        textLongitude_2->setObjectName(QString::fromUtf8("textLongitude_2"));

        verticalLayout_17->addWidget(textLongitude_2);


        horizontalLayout_22->addLayout(verticalLayout_17);

        verticalLayout_18 = new QVBoxLayout();
        verticalLayout_18->setObjectName(QString::fromUtf8("verticalLayout_18"));
        latitude_2 = new QLabel(layoutWidget_17);
        latitude_2->setObjectName(QString::fromUtf8("latitude_2"));

        verticalLayout_18->addWidget(latitude_2);

        longitude_2 = new QLabel(layoutWidget_17);
        longitude_2->setObjectName(QString::fromUtf8("longitude_2"));

        verticalLayout_18->addWidget(longitude_2);


        horizontalLayout_22->addLayout(verticalLayout_18);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1900, 22));
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
        progressBar->setFormat(QCoreApplication::translate("MainWindow", "%p%", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "12000ft", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "3000ft", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "6000ft", nullptr));
        progressBar_2->setFormat(QCoreApplication::translate("MainWindow", "%p%", nullptr));
        labelxRot->setText(QCoreApplication::translate("MainWindow", "xRot : ", nullptr));
        labelyRot->setText(QCoreApplication::translate("MainWindow", "yRot :", nullptr));
        labelzRot->setText(QCoreApplication::translate("MainWindow", "zRot :", nullptr));
        xRot->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        yRot->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        zRot->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        labelxRotCam->setText(QCoreApplication::translate("MainWindow", "xRotCam : ", nullptr));
        labelyRotCam->setText(QCoreApplication::translate("MainWindow", "yRotCam : ", nullptr));
        labelzRotCam->setText(QCoreApplication::translate("MainWindow", "zRotCam : ", nullptr));
        xRotCam->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        yRotCam->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        zRotCam->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        labelx->setText(QCoreApplication::translate("MainWindow", "x : ", nullptr));
        labely->setText(QCoreApplication::translate("MainWindow", "y : ", nullptr));
        labelz->setText(QCoreApplication::translate("MainWindow", "z : ", nullptr));
        xAngle->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        yAngle->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        zAngle->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "9000ft", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "&Quit", nullptr));
        groupBoxParachute->setTitle(QCoreApplication::translate("MainWindow", "Para\305\237\303\274t Durum", nullptr));
        textDragP_2->setText(QCoreApplication::translate("MainWindow", "S\303\274r\303\274klenme Para\305\237\303\274t\303\274 Durum :", nullptr));
        textMainP_2->setText(QCoreApplication::translate("MainWindow", "Ana Para\305\237\303\274t Durum : ", nullptr));
        dragP_2->setText(QCoreApplication::translate("MainWindow", "???", nullptr));
        mainP_2->setText(QCoreApplication::translate("MainWindow", "???", nullptr));
        groupBoxSensor->setTitle(QCoreApplication::translate("MainWindow", "Sens\303\266r Verileri", nullptr));
        textGyroX_2->setText(QCoreApplication::translate("MainWindow", "Gyro X :", nullptr));
        textGyroY_2->setText(QCoreApplication::translate("MainWindow", "Gyro Y :", nullptr));
        textGyroZ_2->setText(QCoreApplication::translate("MainWindow", "Gyro Z :", nullptr));
        gyroX_2->setText(QCoreApplication::translate("MainWindow", "???", nullptr));
        gyroY_2->setText(QCoreApplication::translate("MainWindow", "???", nullptr));
        gyroZ_2->setText(QCoreApplication::translate("MainWindow", "???", nullptr));
        textAngle_2->setText(QCoreApplication::translate("MainWindow", "A\303\247\304\261", nullptr));
        angle_2->setText(QCoreApplication::translate("MainWindow", "???", nullptr));
        textPress_2->setText(QCoreApplication::translate("MainWindow", "Y\303\274kseklik :", nullptr));
        press_2->setText(QCoreApplication::translate("MainWindow", "???", nullptr));
        textAccX_2->setText(QCoreApplication::translate("MainWindow", "\304\260vme X :", nullptr));
        textAccY_2->setText(QCoreApplication::translate("MainWindow", "\304\260vme Y :", nullptr));
        textAccZ_2->setText(QCoreApplication::translate("MainWindow", "\304\260vme Z :", nullptr));
        accX_2->setText(QCoreApplication::translate("MainWindow", "???", nullptr));
        accY_2->setText(QCoreApplication::translate("MainWindow", "???", nullptr));
        accZ_2->setText(QCoreApplication::translate("MainWindow", "???", nullptr));
        groupBoxPort->setTitle(QCoreApplication::translate("MainWindow", "Port Ba\304\237lant\304\261", nullptr));
        textBaudRate_2->setText(QCoreApplication::translate("MainWindow", "BaudRate : ", nullptr));
        comboBoxBaudRate_2->setItemText(0, QCoreApplication::translate("MainWindow", "9600", nullptr));
        comboBoxBaudRate_2->setItemText(1, QCoreApplication::translate("MainWindow", "57600", nullptr));
        comboBoxBaudRate_2->setItemText(2, QCoreApplication::translate("MainWindow", "115200", nullptr));

        textComPort_2->setText(QCoreApplication::translate("MainWindow", "COMPort : ", nullptr));
        connectButton_2->setText(QCoreApplication::translate("MainWindow", "Ba\304\237lan", nullptr));
        disconnectButton_2->setText(QCoreApplication::translate("MainWindow", "Ba\304\237lant\304\261y\304\261 Kes", nullptr));
        groupBoxGPS->setTitle(QCoreApplication::translate("MainWindow", "GPS Verileri", nullptr));
        textLatitude_2->setText(QCoreApplication::translate("MainWindow", "Enlem :", nullptr));
        textLongitude_2->setText(QCoreApplication::translate("MainWindow", "Boylam :", nullptr));
        latitude_2->setText(QCoreApplication::translate("MainWindow", "???", nullptr));
        longitude_2->setText(QCoreApplication::translate("MainWindow", "???", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
