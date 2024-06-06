#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include <QMessageBox>
#include <QString>
#include <QtSerialPort>
#include <QtCharts>
#include <QChartView>
#include <QLineSeries>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    Ui::MainWindow *ui;
    QTimer *labelTimer;

    void AR_labelUpdate(); // timer ile 10 ms de bir çağrılarak labellar güncellenir.
private slots:
    void on_connectButton_2_clicked();
    void on_disconnectButton_2_clicked();
    void on_pushButton_2_clicked(); // rocketSimWidget içerisinde yer alan rotCam değerlerini sıfırlar.
};
#endif // MAINWINDOW_H
