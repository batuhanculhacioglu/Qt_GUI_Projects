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
    AR_serialCommunication AR_returnSerialCommunicationValues();
    void setCombobox(QComboBox *comboBox);
    float aX, aY, aZ,
        gX, gY, gZ;

private:
    QSerialPort *COMPORT;
    QComboBox *my_comboBox;
};

#endif // AR_SERIALCOMMUNICATION_H
