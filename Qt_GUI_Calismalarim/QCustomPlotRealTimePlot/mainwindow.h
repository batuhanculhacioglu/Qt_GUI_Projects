#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include <QTimer>
#include "qcustomplot.h"
#include <QRandomGenerator>

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
    bool autoScroll;

private slots:
    void updateDiagram();
    void on_startButton_clicked();
    void on_stopButton_clicked();
    void on_showAccelXGraph_stateChanged(int arg1);
    void on_showAccelYGraph_stateChanged(int arg1);
    void on_showAccelZGraph_stateChanged(int arg1);
    void on_clearAccelGraph_clicked();
    void on_autoScroll_stateChanged(int arg1);
};
#endif // MAINWINDOW_H
