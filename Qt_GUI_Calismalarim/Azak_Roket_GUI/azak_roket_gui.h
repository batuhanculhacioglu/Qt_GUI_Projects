#ifndef AZAK_ROKET_GUI_H
#define AZAK_ROKET_GUI_H

#include <QMainWindow>
#include <QDebug>
#include <QMessageBox>
#include <QString>
#include <QtSerialPort>
#include <QtCharts>
#include <QChartView>
#include <QLineSeries>

QT_BEGIN_NAMESPACE
namespace Ui {
class Azak_Roket_GUI;
}
QT_END_NAMESPACE

class Azak_Roket_GUI : public QMainWindow
{
    Q_OBJECT

public:
    Azak_Roket_GUI(QWidget *parent = nullptr);
    ~Azak_Roket_GUI();

private slots:

    void on_comboBoxComPort_activated(int index);

    void on_comboBoxComPort_currentIndexChanged(int index);

    void on_connectButton_clicked();

    void readData();

    void on_disconnectButton_clicked();

    void on_closeButton_clicked();

private:
    Ui::Azak_Roket_GUI *ui;
    QSerialPort *COMPORT;
};
#endif // AZAK_ROKET_GUI_H
