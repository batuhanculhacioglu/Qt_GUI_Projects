#ifndef AR_SERIALCOMMUNICATION_H
#define AR_SERIALCOMMUNICATION_H

#include <QMessageBox>
#include <QString>
#include <QtSerialPort>
#include <QtCharts>
#include <QChartView>
#include <QLineSeries>

class AR_serialCommunication : public QObject
{
    Q_OBJECT
public:
    AR_serialCommunication();
    void AR_connectComPort();
    void AR_disconnectComPort();
    void AR_readData();
    float AR_returnSerialCommunicationValues();
    float aX, aY, aZ,
        gX, gY, gZ;

private:
    QSerialPort *COMPORT;
};

#endif // AR_SERIALCOMMUNICATION_H
