#include "azak_roket_gui.h"
#include "ui_azak_roket_gui.h"

Azak_Roket_GUI::Azak_Roket_GUI(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Azak_Roket_GUI)
    , COMPORT(nullptr)
{
    ui->setupUi(this);

    /* Bağlı olan bütün port bilgileri çekliyor
    for(const QSerialPortInfo &portinfor: QSerialPortInfo::availablePorts())
    {
        qDebug() << "Port Name : " << portinfor.portName();
        qDebug() << "Port Location : " << portinfor.systemLocation();
    }



    COMPORT = new QSerialPort();
    COMPORT->setPortName("COM1");
    COMPORT->setBaudRate(QSerialPort::BaudRate::Baud9600);
    COMPORT->setParity(QSerialPort::Parity::NoParity);
    COMPORT->setDataBits(QSerialPort::DataBits::Data8);
    COMPORT->setStopBits(QSerialPort::StopBits::OneStop);
    COMPORT->setFlowControl(QSerialPort::FlowControl::NoFlowControl);
    COMPORT->open(QIODevice::ReadWrite);

    if(COMPORT->isOpen())
    {
        qDebug() << "Serial Port is Connected.";
    }
    else
    {
        qDebug() << "Serial Port is Not Connected.";
    }
    */

    foreach(auto &port, QSerialPortInfo::availablePorts())
    {
          ui->comboBoxComPort->addItem(port.portName());
    }

}

Azak_Roket_GUI::~Azak_Roket_GUI()
{
    delete ui;
    /*
    if(COMPORT != nullptr)
    {
        COMPORT->close();
        delete COMPORT;
    }
*/
}

void Azak_Roket_GUI::on_comboBoxComPort_activated(int index)
{

}


void Azak_Roket_GUI::on_comboBoxComPort_currentIndexChanged(int index)
{

}


void Azak_Roket_GUI::on_connectButton_clicked()
{
    if(COMPORT != nullptr)
    {
        COMPORT->close();
        delete COMPORT;
    }
    COMPORT = new QSerialPort(this);
    COMPORT->setPortName(ui->comboBoxComPort->currentText());
    COMPORT->setBaudRate(QSerialPort::Baud9600);
    COMPORT->setDataBits(QSerialPort::Data8);
    COMPORT->setParity(QSerialPort::NoParity);
    COMPORT->setStopBits(QSerialPort::OneStop);
    if(COMPORT->open(QIODevice::ReadWrite))
    {
        QMessageBox::information(this, "Result", "Port opened successfully");
        connect(COMPORT, &QSerialPort::readyRead, this, &Azak_Roket_GUI::readData);
    }
    else
    {
        QMessageBox::critical(this, "Port Error", "Unable to open specified port.");
    }
}

void Azak_Roket_GUI::readData()
{
    if(!COMPORT->isOpen())
    {
        QMessageBox::critical(this, "Port Error", "Unable to open specified port.");
        return;
    }
    /*
    auto serialData = COMPORT->readAll();
    char accX = serialData[0];
    char accY = serialData[1];
    char accZ = serialData[2];
    ui->accX->setText(QString("%1").arg(accX));
    ui->accY->setText(QString("%1").arg(accY));
    ui->accZ->setText(QString("%1").arg(accZ));
    */



/*
    double accX = 0, accY = 0, accZ = 0;
    QString serialData = COMPORT->readAll();
    qInfo() << "******";
    qInfo() << serialData.count(",");
    QStringList serialDataSplit = serialData.split(",");

    if(serialData.count(",") == 11)
    {
        QString parsedData;
        parsedData = serialDataSplit[0];
        accX = parsedData.toDouble();
        parsedData = serialDataSplit[1];
        accY = parsedData.toDouble();
        parsedData = serialDataSplit[2];
        accZ = parsedData.toDouble();
        parsedData = serialDataSplit[3];
        double gyroX = parsedData.toDouble();
        parsedData = serialDataSplit[4];
        double gyroY = parsedData.toDouble();
        parsedData = serialDataSplit[5];
        double gyroZ = parsedData.toDouble();
        parsedData = serialDataSplit[6];
        double latitude = parsedData.toDouble();
        parsedData = serialDataSplit[7];
        double longitude = parsedData.toDouble();
        parsedData = serialDataSplit[8];
        double press = parsedData.toDouble();
        parsedData = serialDataSplit[9];
        double angle = parsedData.toDouble();
        parsedData = serialDataSplit[10];
        int dragP = parsedData.toInt();
        parsedData = serialDataSplit[11];
        int mainP = parsedData.toInt();
        ui->accX->setText(QString("%1").arg(accX));
        ui->accY->setText(QString("%1").arg(accY));
        ui->accZ->setText(QString("%1").arg(accZ));
        ui->gyroX->setText(QString("%1").arg(gyroX));
        ui->gyroY->setText(QString("%1").arg(gyroY));
        ui->gyroZ->setText(QString("%1").arg(gyroZ));
        ui->latitude->setText(QString("%1").arg(latitude));
        ui->longitude->setText(QString("%1").arg(longitude));
        ui->press->setText(QString("%1").arg(press));
        ui->angle->setText(QString("%1").arg(angle));
        ui->dragP->setText(QString("%1").arg(dragP));
        ui->mainP->setText(QString("%1").arg(mainP));
    }
*/



    double accX = 0, accY = 0, accZ = 0;
    char x = '\0';

    QString serialData = COMPORT->readAll();
    qInfo() << "******";
    qInfo() << serialData.count(",");
    QStringList serialDataSplit = serialData.split(",");

        if(serialData.count(",") == 12)
        {
            QString parsedData;
            parsedData = serialDataSplit[0];
            if(parsedData == 'A')
            {
                parsedData = serialDataSplit[1];
                accX = parsedData.toDouble();
                parsedData = serialDataSplit[2];
                accY = parsedData.toDouble();
                parsedData = serialDataSplit[3];
                accZ = parsedData.toDouble();
                parsedData = serialDataSplit[4];
                double gyroX = parsedData.toDouble();
                parsedData = serialDataSplit[5];
                double gyroY = parsedData.toDouble();
                parsedData = serialDataSplit[6];
                double gyroZ = parsedData.toDouble();
                parsedData = serialDataSplit[7];
                double latitude = parsedData.toDouble();
                parsedData = serialDataSplit[8];
                double longitude = parsedData.toDouble();
                parsedData = serialDataSplit[9];
                double press = parsedData.toDouble();
                parsedData = serialDataSplit[10];
                double angle = parsedData.toDouble();
                parsedData = serialDataSplit[11];
                int dragP = parsedData.toInt();
                parsedData = serialDataSplit[12];
                int mainP = parsedData.toInt();
                ui->accX->setText(QString("%1").arg(accX));
                ui->accY->setText(QString("%1").arg(accY));
                ui->accZ->setText(QString("%1").arg(accZ));
                ui->gyroX->setText(QString("%1").arg(gyroX));
                ui->gyroY->setText(QString("%1").arg(gyroY));
                ui->gyroZ->setText(QString("%1").arg(gyroZ));
                ui->latitude->setText(QString("%1").arg(latitude));
                ui->longitude->setText(QString("%1").arg(longitude));
                ui->press->setText(QString("%1").arg(press));
                ui->angle->setText(QString("%1").arg(angle));
                ui->dragP->setText(QString("%1").arg(dragP));
                ui->mainP->setText(QString("%1").arg(mainP));
            }


        }



}

void Azak_Roket_GUI::on_disconnectButton_clicked()
{
    COMPORT->disconnect();
    QMessageBox::information(this,"COMPort Disconnected", "Port closed successfully");
}


void Azak_Roket_GUI::on_closeButton_clicked()
{
    QMessageBox::StandardButton reply = QMessageBox::question(this,"Message","Uygulamayı kapatmak istediğinize emin misiniz?",QMessageBox::Yes | QMessageBox::No);
    if(reply == QMessageBox::Yes)
    {
        QApplication::quit();
    }
}

