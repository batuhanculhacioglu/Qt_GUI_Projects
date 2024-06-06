#include "AR_serialCommunication.h"

AR_serialCommunication AR_serialCommunicationInstance;

AR_serialCommunication::AR_serialCommunication()
    : COMPORT(nullptr)
{
    AR_serialCommunicationInstance.xRot = 0.0f;
    AR_serialCommunicationInstance.yRot = 0.0f;
    AR_serialCommunicationInstance.zRot = 0.0f;
}

void AR_serialCommunication::getComPort(QStringList *ptr)
{
    foreach(auto &port, QSerialPortInfo::availablePorts())
    {
        ptr->append(port.portName());
    }
}

QString AR_serialCommunication::getValues()
{

            return serialData;



}

void AR_serialCommunication::clickedConnect()
{
    if(COMPORT != nullptr)
    {
        COMPORT->close();
        delete COMPORT;
    }
    COMPORT = new QSerialPort();
    COMPORT->setPortName("COM5");
    COMPORT->setBaudRate(QSerialPort::Baud9600);
    COMPORT->setDataBits(QSerialPort::Data8);
    COMPORT->setParity(QSerialPort::NoParity);
    COMPORT->setStopBits(QSerialPort::OneStop);
    if(COMPORT->open(QIODevice::ReadWrite))
    {
        connect(COMPORT, &QSerialPort::readyRead, this, &AR_serialCommunication::readData);
        qInfo() << "Bağlandı";
    }
    else
    {
        // COMPORT açılamadı
        qInfo() << "hayir";
    }
}

void AR_serialCommunication::clickedDisconnect()
{

}

void AR_serialCommunication::readData()
{
    if(!COMPORT->isOpen())
    {

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
    serialData = COMPORT->readAll();
}

void AR_serialCommunication::AR_updateCamControlValues(AR_camControl *ptr)
{
    // serial dan data okuyup Rot değişkenleri doldurulacak
    ptr->xRot = AR_serialCommunicationInstance.xRot;
    ptr->yRot = AR_serialCommunicationInstance.yRot;
    ptr->zRot = AR_serialCommunicationInstance.zRot;
}
