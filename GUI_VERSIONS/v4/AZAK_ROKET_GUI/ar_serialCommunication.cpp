#include "ar_serialCommunication.h"

float accX, accY, accZ;

AR_serialCommunication::AR_serialCommunication()
    :COMPORT(nullptr),
    my_comboBox(nullptr)
{
    aX = 0;
    aY = 0;
    aZ = 0;
    gX = 0;
    gY = 0;
    gZ = 0;
}

void AR_serialCommunication::AR_connectComPort()
{
    if(COMPORT != nullptr)
    {
        COMPORT->close();
        delete COMPORT;
    }
    COMPORT = new QSerialPort();
    COMPORT->setPortName(my_comboBox->currentText());
    COMPORT->setBaudRate(QSerialPort::Baud9600);
    COMPORT->setDataBits(QSerialPort::Data8);
    COMPORT->setParity(QSerialPort::NoParity);
    COMPORT->setStopBits(QSerialPort::OneStop);
    if(COMPORT->open(QIODevice::ReadWrite))
    {
        qInfo() << "bağlandi.";
        connect(COMPORT, &QSerialPort::readyRead, this, &AR_serialCommunication::AR_readData);
    }
    else
    {
        qInfo() << "bağlanmadi.";
    }

}

void AR_serialCommunication::AR_disconnectComPort()
{
    COMPORT->disconnect();
    qInfo() << "bağlanti kesildi.";

}

void AR_serialCommunication::AR_readData()
{
    if(!COMPORT->isOpen())
    {
        qInfo() << "connection fault.";
        return;
    }

    static QString serialData; // Alınan veriyi tutacak değişken
    serialData += COMPORT->readAll(); // Gelen veriyi ekleyin
    qInfo() << serialData;

    // Paketin sonunu kontrol edin (örneğin, '\n' karakteri ile bitiyor)
    if (serialData.endsWith('*')) {
        // Paketi işleyin
        QStringList serialDataSplit = serialData.split(",");

        if(serialData.count(",") >= 2)
        {
            serialData.clear();
            QString parsedData;
            parsedData = serialDataSplit[0];
            accX = parsedData.toDouble();
            parsedData = serialDataSplit[1];
            accY = parsedData.toDouble();
            parsedData = serialDataSplit[2];
            accZ = parsedData.toDouble();
            /*
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
*/
        }
        else
        {
            serialData.clear();
        }
    }

}

AR_serialCommunication AR_serialCommunication::AR_returnSerialCommunicationValues()
{
    aX = accX;
    aY = accY;
    aZ = accZ;
    return AR_serialCommunication();
}

void AR_serialCommunication::setCombobox(QComboBox *comboBox)
{
    my_comboBox = comboBox;
}
