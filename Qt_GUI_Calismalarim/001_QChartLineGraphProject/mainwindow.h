#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtCharts>
#include <QChartView>
#include <QLineSeries>
#include <QStringList>
#include <QTimer>

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
    double getAccelX();
    double getAccelY();

private:
    Ui::MainWindow *ui;
    double time;
    QTimer *myTimer;

private slots:
    void updateDiagram();
};
#endif // MAINWINDOW_H
