#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "ar_serialCommunication.h"
#include "AR_camControl.h"
#include "rocketSimWidget.h"

AR_serialCommunication serialCommunicationInstanceM;

rocketSimWidget *customWidget;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    labelTimer = new QTimer(this);


    foreach(auto &port, QSerialPortInfo::availablePorts())
    {
        ui->comboBoxComPort_2->addItem(port.portName());
    }

    serialCommunicationInstanceM.setCombobox(ui->comboBoxComPort_2);


    connect(labelTimer, &QTimer::timeout, this, &MainWindow::AR_labelUpdate);
    labelTimer->start(10);

    customWidget = findChild<rocketSimWidget*>("widget"); // rocketSimWidget classından widget nesnesinin adresini customWidget'e döndürür.
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::AR_labelUpdate()
{
    serialCommunicationInstanceM.AR_returnSerialCommunicationValues();
}

void MainWindow::on_connectButton_2_clicked()
{
    serialCommunicationInstanceM.AR_connectComPort();
}


void MainWindow::on_disconnectButton_2_clicked()
{
    serialCommunicationInstanceM.AR_disconnectComPort();
}


void MainWindow::on_pushButton_2_clicked()
{
    customWidget->AR_camControlInstance.xRotCam = 0.0f;
    customWidget->AR_camControlInstance.yRotCam = 0.0f;
    customWidget->AR_camControlInstance.zRotCam = 0.0f;
}

