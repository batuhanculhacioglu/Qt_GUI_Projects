#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "AR_graphControl.h"

AR_graphControl graphControlInstanceM1;
AR_graphControl graphControlInstanceM2;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    graphControlInstanceM1.setCustomPlotObjectAcc(ui->widget);
    graphControlInstanceM2.setCustomPlotObjectGyro(ui->widget_2);
}

MainWindow::~MainWindow()
{
    delete ui;
}
