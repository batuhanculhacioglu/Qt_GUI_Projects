#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "ar_serialCommunication.h"

#include "test.h"

test testInstance;
AR_serialCommunication serialCommunicationInstance;

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

    serialCommunicationInstance.setCombobox(ui->comboBoxComPort_2);


    connect(labelTimer, &QTimer::timeout, this, &MainWindow::AR_labelUpdate);
    labelTimer->start(10);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::AR_labelUpdate()
{
    serialCommunicationInstance.AR_returnSerialCommunicationValues();

}

void MainWindow::on_connectButton_2_clicked()
{
    serialCommunicationInstance.AR_connectComPort();
}


void MainWindow::on_disconnectButton_2_clicked()
{
    serialCommunicationInstance.AR_disconnectComPort();
}

