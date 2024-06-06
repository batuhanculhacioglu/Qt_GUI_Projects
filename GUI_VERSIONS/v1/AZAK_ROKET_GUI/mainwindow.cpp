#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , COMPORT(nullptr)
{
    ui->setupUi(this);
    labelTimer = new QTimer(this);

    AR_camControlInstance.x = 0;
    AR_camControlInstance.y = 0;
    AR_camControlInstance.z = 0;

    AR_camControlInstance.xRot = 0;
    AR_camControlInstance.yRot = 0;
    AR_camControlInstance.zRot = 0;

    AR_camControlInstance.xRotCam = 0;
    AR_camControlInstance.yRotCam = 0;
    AR_camControlInstance.zRotCam = 0;

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
        AR_camControlInstance.AR_getCamPosition(&AR_camControlInstance);
        ui->accX_2->setText(QString("%1").arg(AR_camControlInstance.xRot));
        ui->accY_2->setText(QString("%1").arg(AR_camControlInstance.yRot));
        ui->accZ_2->setText(QString("%1").arg(AR_camControlInstance.zRot));

        ui->xRot->setText(QString("%1").arg(AR_camControlInstance.xRot));
        ui->yRot->setText(QString("%1").arg(AR_camControlInstance.yRot));
        ui->zRot->setText(QString("%1").arg(AR_camControlInstance.zRot));

        ui->xRotCam->setText(QString("%1").arg(AR_camControlInstance.xRotCam));
        ui->yRotCam->setText(QString("%1").arg(AR_camControlInstance.yRotCam));
        ui->zRotCam->setText(QString("%1").arg(AR_camControlInstance.zRotCam));


}

void MainWindow::on_connectButton_2_clicked()
{
    if(COMPORT != nullptr)
    {
        COMPORT->close();
        delete COMPORT;
    }
    COMPORT = new QSerialPort(this);
    COMPORT->setPortName(ui->comboBoxComPort_2->currentText());
    COMPORT->setBaudRate(QSerialPort::Baud9600);
    COMPORT->setDataBits(QSerialPort::Data8);
    COMPORT->setParity(QSerialPort::NoParity);
    COMPORT->setStopBits(QSerialPort::OneStop);

    if(COMPORT->open(QIODevice::ReadWrite))
    {
        qInfo() << "bağlandi.";
        connect(COMPORT, &QSerialPort::readyRead, this, &MainWindow::readData);
    }
    else
    {

    }
}


void MainWindow::on_disconnectButton_2_clicked()
{
    COMPORT->disconnect();
    qInfo() << "bağlanti kesildi.";
}

void MainWindow::readData()
{
    if(!COMPORT->isOpen())
    {
        qInfo() << "connection fault.";
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

    static QString serialData; // Alınan veriyi tutacak değişken
    serialData += COMPORT->readAll(); // Gelen veriyi ekleyin
    static double accX = 0, accY = 0, accZ = 0;

    // Paketin sonunu kontrol edin (örneğin, '\n' karakteri ile bitiyor)
    if (serialData.endsWith('\n')) {
        // Paketi işleyin

        qInfo() << serialData.count(",");
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
        ui->accX_2->setText(QString("%1").arg(accX));
        ui->accY_2->setText(QString("%1").arg(accY));
        ui->accZ_2->setText(QString("%1").arg(accZ));
        /*
        ui->gyroX_2->setText(QString("%1").arg(gyroX));
        ui->gyroY_2->setText(QString("%1").arg(gyroY));
        ui->gyroZ_2->setText(QString("%1").arg(gyroZ));
        ui->latitude_2->setText(QString("%1").arg(latitude));
        ui->longitude_2->setText(QString("%1").arg(longitude));
        ui->press_2->setText(QString("%1").arg(press));
        ui->angle_2->setText(QString("%1").arg(angle));
        ui->dragP_2->setText(QString("%1").arg(dragP));
        ui->mainP_2->setText(QString("%1").arg(mainP));
*/
        }
    }
    AR_camControlInstance.xRot = accX;
    AR_camControlInstance.yRot = accY;
    AR_camControlInstance.zRot = accZ;
    AR_camControlInstance.AR_updateRotPosition(&AR_camControlInstance);
    qInfo() << accX << accY << accZ;
}

