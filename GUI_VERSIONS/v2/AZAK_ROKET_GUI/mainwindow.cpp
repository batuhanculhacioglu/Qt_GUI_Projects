#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "ar_serialCommunication.h"
#include "AR_camControl.h"
#include "test.h"

test testInstance;
AR_serialCommunication serialCommunicationInstance;
AR_camControl AR_camControlInstanceMain;

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

    connect(labelTimer, &QTimer::timeout, this, &MainWindow::AR_labelUpdate);
    labelTimer->start(10);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::AR_labelUpdate()
{
        testInstance.returnTest();
    AR_camControlInstanceMain.AR_updateRotPosition();
        ui->accX_2->setText(QString("%1").arg(serialCommunicationInstance.aX));
        ui->accY_2->setText(QString("%1").arg(serialCommunicationInstance.aY));
        ui->accZ_2->setText(QString("%1").arg(serialCommunicationInstance.aZ));
        serialCommunicationInstance.AR_returnSerialCommunicationValues();
        qInfo() << "main : " << testInstance.test_x;
        /*
        ui->gyroX_2->setText(QString("%1").arg(serialCommunicationInstance.gX));
        ui->gyroY_2->setText(QString("%1").arg(serialCommunicationInstance.gY));
        ui->gyroZ_2->setText(QString("%1").arg(serialCommunicationInstance.gZ));
*/
}

void MainWindow::on_connectButton_2_clicked()
{
    serialCommunicationInstance.AR_connectComPort();
}


void MainWindow::on_disconnectButton_2_clicked()
{
    serialCommunicationInstance.AR_disconnectComPort();
}

