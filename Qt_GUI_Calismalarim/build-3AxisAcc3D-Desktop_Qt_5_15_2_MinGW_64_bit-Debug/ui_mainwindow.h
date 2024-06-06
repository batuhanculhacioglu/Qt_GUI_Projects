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
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "glwidget.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    GLWidget *widget;
    QProgressBar *progressBar;
    QWidget *layoutWidget;
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
    QWidget *layoutWidget1;
    QVBoxLayout *layoutQuit;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QSlider *horizontalSliderX;
    QSlider *horizontalSliderY;
    QSlider *horizontalSliderZ;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton;
    QProgressBar *progressBar_2;
    QLabel *label_3;
    QFrame *line_1;
    QLabel *label_6;
    QFrame *line_2;
    QFrame *line_3;
    QLabel *label_9;
    QFrame *line_4;
    QLabel *label_12;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setWindowModality(Qt::ApplicationModal);
        MainWindow->resize(1009, 737);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        widget = new GLWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 10, 574, 564));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        progressBar = new QProgressBar(centralwidget);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setGeometry(QRect(590, 10, 24, 561));
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
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 580, 574, 66));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_5 = new QSpacerItem(68, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_5);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        layoutLabelRot = new QVBoxLayout();
        layoutLabelRot->setObjectName(QString::fromUtf8("layoutLabelRot"));
        labelxRot = new QLabel(layoutWidget);
        labelxRot->setObjectName(QString::fromUtf8("labelxRot"));

        layoutLabelRot->addWidget(labelxRot);

        labelyRot = new QLabel(layoutWidget);
        labelyRot->setObjectName(QString::fromUtf8("labelyRot"));

        layoutLabelRot->addWidget(labelyRot);

        labelzRot = new QLabel(layoutWidget);
        labelzRot->setObjectName(QString::fromUtf8("labelzRot"));

        layoutLabelRot->addWidget(labelzRot);


        horizontalLayout_3->addLayout(layoutLabelRot);

        layoutRot = new QVBoxLayout();
        layoutRot->setObjectName(QString::fromUtf8("layoutRot"));
        xRot = new QLabel(layoutWidget);
        xRot->setObjectName(QString::fromUtf8("xRot"));

        layoutRot->addWidget(xRot);

        yRot = new QLabel(layoutWidget);
        yRot->setObjectName(QString::fromUtf8("yRot"));

        layoutRot->addWidget(yRot);

        zRot = new QLabel(layoutWidget);
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
        labelxRotCam = new QLabel(layoutWidget);
        labelxRotCam->setObjectName(QString::fromUtf8("labelxRotCam"));

        layoutLabelRotCam->addWidget(labelxRotCam);

        labelyRotCam = new QLabel(layoutWidget);
        labelyRotCam->setObjectName(QString::fromUtf8("labelyRotCam"));

        layoutLabelRotCam->addWidget(labelyRotCam);

        labelzRotCam = new QLabel(layoutWidget);
        labelzRotCam->setObjectName(QString::fromUtf8("labelzRotCam"));

        layoutLabelRotCam->addWidget(labelzRotCam);


        horizontalLayout->addLayout(layoutLabelRotCam);

        layoutRotCam = new QVBoxLayout();
        layoutRotCam->setObjectName(QString::fromUtf8("layoutRotCam"));
        xRotCam = new QLabel(layoutWidget);
        xRotCam->setObjectName(QString::fromUtf8("xRotCam"));

        layoutRotCam->addWidget(xRotCam);

        yRotCam = new QLabel(layoutWidget);
        yRotCam->setObjectName(QString::fromUtf8("yRotCam"));

        layoutRotCam->addWidget(yRotCam);

        zRotCam = new QLabel(layoutWidget);
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
        labelx = new QLabel(layoutWidget);
        labelx->setObjectName(QString::fromUtf8("labelx"));

        layoutLabelAngle->addWidget(labelx);

        labely = new QLabel(layoutWidget);
        labely->setObjectName(QString::fromUtf8("labely"));

        layoutLabelAngle->addWidget(labely);

        labelz = new QLabel(layoutWidget);
        labelz->setObjectName(QString::fromUtf8("labelz"));

        layoutLabelAngle->addWidget(labelz);


        horizontalLayout_2->addLayout(layoutLabelAngle);

        layoutAngle = new QVBoxLayout();
        layoutAngle->setObjectName(QString::fromUtf8("layoutAngle"));
        xAngle = new QLabel(layoutWidget);
        xAngle->setObjectName(QString::fromUtf8("xAngle"));

        layoutAngle->addWidget(xAngle);

        yAngle = new QLabel(layoutWidget);
        yAngle->setObjectName(QString::fromUtf8("yAngle"));

        layoutAngle->addWidget(yAngle);

        zAngle = new QLabel(layoutWidget);
        zAngle->setObjectName(QString::fromUtf8("zAngle"));

        layoutAngle->addWidget(zAngle);


        horizontalLayout_2->addLayout(layoutAngle);


        horizontalLayout_7->addLayout(horizontalLayout_2);

        horizontalSpacer_4 = new QSpacerItem(68, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_4);

        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(690, 10, 84, 636));
        layoutQuit = new QVBoxLayout(layoutWidget1);
        layoutQuit->setObjectName(QString::fromUtf8("layoutQuit"));
        layoutQuit->setContentsMargins(0, 0, 0, 0);
        pushButton_2 = new QPushButton(layoutWidget1);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        layoutQuit->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(layoutWidget1);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        layoutQuit->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(layoutWidget1);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        layoutQuit->addWidget(pushButton_4);

        pushButton_5 = new QPushButton(layoutWidget1);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        layoutQuit->addWidget(pushButton_5);

        pushButton_6 = new QPushButton(layoutWidget1);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));

        layoutQuit->addWidget(pushButton_6);

        horizontalSliderX = new QSlider(layoutWidget1);
        horizontalSliderX->setObjectName(QString::fromUtf8("horizontalSliderX"));
        horizontalSliderX->setOrientation(Qt::Horizontal);

        layoutQuit->addWidget(horizontalSliderX);

        horizontalSliderY = new QSlider(layoutWidget1);
        horizontalSliderY->setObjectName(QString::fromUtf8("horizontalSliderY"));
        horizontalSliderY->setOrientation(Qt::Horizontal);

        layoutQuit->addWidget(horizontalSliderY);

        horizontalSliderZ = new QSlider(layoutWidget1);
        horizontalSliderZ->setObjectName(QString::fromUtf8("horizontalSliderZ"));
        horizontalSliderZ->setOrientation(Qt::Horizontal);

        layoutQuit->addWidget(horizontalSliderZ);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        layoutQuit->addItem(verticalSpacer);

        pushButton = new QPushButton(layoutWidget1);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        layoutQuit->addWidget(pushButton);

        progressBar_2 = new QProgressBar(centralwidget);
        progressBar_2->setObjectName(QString::fromUtf8("progressBar_2"));
        progressBar_2->setGeometry(QRect(590, 10, 24, 561));
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
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(640, 436, 49, 16));
        line_1 = new QFrame(centralwidget);
        line_1->setObjectName(QString::fromUtf8("line_1"));
        line_1->setGeometry(QRect(615, 450, 70, 3));
        line_1->setFrameShadow(QFrame::Plain);
        line_1->setLineWidth(10);
        line_1->setMidLineWidth(2);
        line_1->setFrameShape(QFrame::HLine);
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(640, 310, 49, 16));
        line_2 = new QFrame(centralwidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(615, 324, 70, 3));
        line_2->setFrameShadow(QFrame::Plain);
        line_2->setLineWidth(10);
        line_2->setMidLineWidth(2);
        line_2->setFrameShape(QFrame::HLine);
        line_3 = new QFrame(centralwidget);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(615, 198, 70, 3));
        line_3->setFrameShadow(QFrame::Plain);
        line_3->setLineWidth(10);
        line_3->setMidLineWidth(2);
        line_3->setFrameShape(QFrame::HLine);
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(640, 184, 49, 16));
        line_4 = new QFrame(centralwidget);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setGeometry(QRect(615, 72, 70, 3));
        line_4->setFrameShadow(QFrame::Plain);
        line_4->setLineWidth(10);
        line_4->setMidLineWidth(2);
        line_4->setFrameShape(QFrame::HLine);
        label_12 = new QLabel(centralwidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(640, 58, 49, 16));
        MainWindow->setCentralWidget(centralwidget);
        line_2->raise();
        line_1->raise();
        line_3->raise();
        line_4->raise();
        progressBar_2->raise();
        progressBar->raise();
        widget->raise();
        layoutWidget->raise();
        layoutWidget->raise();
        label_9->raise();
        label_12->raise();
        label_3->raise();
        label_6->raise();

        retranslateUi(MainWindow);
        QObject::connect(pushButton, SIGNAL(clicked()), MainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "3AxisAcc3D", nullptr));
        progressBar->setFormat(QCoreApplication::translate("MainWindow", "%p%", nullptr));
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
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Reset Position", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Start Fly", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "Turn X", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "Turn Y", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "Turn Z", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "&Quit", nullptr));
        progressBar_2->setFormat(QCoreApplication::translate("MainWindow", "%p%", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "3000ft", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "6000ft", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "9000ft", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "12000ft", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
