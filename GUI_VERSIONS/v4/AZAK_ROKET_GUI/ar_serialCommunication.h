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
    friend class MainWindow;

public:
    AR_serialCommunication();
    AR_serialCommunication AR_returnSerialCommunicationValues(); // işlenen verileri döndürür. bknz : mainwindow.cpp , AR_camControl.cpp
    float aX, aY, aZ, // ivme x, y, z
        gX, gY, gZ; // gyro x, y, z

private:
    QSerialPort *COMPORT;
    QComboBox *my_comboBox;
    void setCombobox(QComboBox *comboBox); // arayüz üzerinden eklenen combobox nesnesinin adresi my_comboBox'a yazılır.
    void AR_connectComPort(); // arayüz comport connect butonu, bknz : mainwindow.cpp
    void AR_disconnectComPort(); // arayüz comport disconnect butonu, bknz : mainwindow.cpp
    void AR_readData(); // comport üzerinden data geldiğinde çağrılır ve veriler işlenir.
};

#endif // AR_SERIALCOMMUNICATION_H
