#include "mainwindow.h"
#include "ui_mainwindow.h"
GLWidget *customWidget;
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    customWidget = findChild<GLWidget*>("widget");

    ui->horizontalSliderX->setMinimum(-180);
    ui->horizontalSliderX->setMaximum(180);
    ui->horizontalSliderY->setMinimum(-180);
    ui->horizontalSliderY->setMaximum(180);
    ui->horizontalSliderZ->setMinimum(-180);
    ui->horizontalSliderZ->setMaximum(180);

    myTimer = new QTimer(this);
    //connect(myTimer, SIGNAL(timeout()), this, SLOT(updateGL()));
    connect(myTimer, &QTimer::timeout, this, &MainWindow::testFunc);
    myTimer->start(100);

    startFlyTimer = new QTimer(this);
    connect(startFlyTimer, &QTimer::timeout, this, &MainWindow::on_pushButton_3_clicked);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::testFunc()
{

    ui->xRot->setText(QString("%1").arg(customWidget->xRot));
    ui->yRot->setText(QString("%1").arg(customWidget->yRot));
    ui->zRot->setText(QString("%1").arg(customWidget->zRot));

    ui->xRotCam->setText(QString("%1").arg(customWidget->xRotCam));
    ui->yRotCam->setText(QString("%1").arg(customWidget->yRotCam));
    ui->zRotCam->setText(QString("%1").arg(customWidget->zRotCam));

    ui->xAngle->setText(QString("%1").arg(customWidget->x));
    ui->yAngle->setText(QString("%1").arg(customWidget->y));
    ui->zAngle->setText(QString("%1").arg(customWidget->z));

}

void MainWindow::on_pushButton_2_clicked()
{
    startFlyTimer->stop();

    customWidget->xRot = 0;
    customWidget->yRot = 0;
    customWidget->zRot = 0;

    customWidget->xRotCam = 0;
    customWidget->yRotCam = 0;
    customWidget->zRotCam = 0;

    customWidget->turnValue=0;

    ui->horizontalSliderX->setValue(0);
    ui->horizontalSliderY->setValue(0);
    ui->horizontalSliderZ->setValue(0);
}


void MainWindow::on_pushButton_3_clicked()
{
    startFlyTimer->start(1);
    customWidget->turnValue=0;


    customWidget->xRot = 0;
    if(customWidget->yRot < 360)
    {
        customWidget->yRot++;
    }
    else
    {
        customWidget->yRot = 0;
    }
    customWidget->zRot = 15;
    customWidget->xRot = -15;

    ui->horizontalSliderX->setValue(0);
    ui->horizontalSliderY->setValue(0);
    ui->horizontalSliderZ->setValue(0);
}


void MainWindow::on_pushButton_4_clicked()
{
    startFlyTimer->stop();
    customWidget->turnValue=1;

    ui->horizontalSliderX->setValue(0);
    ui->horizontalSliderY->setValue(0);
    ui->horizontalSliderZ->setValue(0);
}


void MainWindow::on_pushButton_5_clicked()
{
    startFlyTimer->stop();
    customWidget->turnValue=2;

    ui->horizontalSliderX->setValue(0);
    ui->horizontalSliderY->setValue(0);
    ui->horizontalSliderZ->setValue(0);
}


void MainWindow::on_pushButton_6_clicked()
{
    startFlyTimer->stop();
    customWidget->turnValue=3;

    ui->horizontalSliderX->setValue(0);
    ui->horizontalSliderY->setValue(0);
    ui->horizontalSliderZ->setValue(0);
}


void MainWindow::on_horizontalSliderX_valueChanged(int value)
{
    startFlyTimer->stop();
    customWidget->xRot = value;
    customWidget->changeCam();
}


void MainWindow::on_horizontalSliderY_valueChanged(int value)
{
    startFlyTimer->stop();
    customWidget->yRot = value;
    customWidget->changeCam();

}


void MainWindow::on_horizontalSliderZ_valueChanged(int value)
{
    startFlyTimer->stop();
    customWidget->zRot = value;
    customWidget->changeCam();

}

