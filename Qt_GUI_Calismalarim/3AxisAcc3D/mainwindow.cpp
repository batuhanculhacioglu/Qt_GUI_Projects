#include "mainwindow.h"
#include "ui_mainwindow.h"
GLWidget *customWidget;
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->progressBar->setTextVisible(false);
    ui->progressBar_2->setTextVisible(false);

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
    myTimer->start(1);

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
    static bool myb[4]{true};
    if(ui->progressBar->value() >= 3000 && myb[0] ==true)
    {
        ui->line_1->setStyleSheet("color: rgb(255, 0, 0);");

        myb[0] = false;
    }
    else if(ui->progressBar->value() >= 6000 && myb[1] ==true)
    {
        ui->line_2->setStyleSheet("color: rgb(255, 0, 0);");

        myb[1] = false;
    }
    else if(ui->progressBar->value() >= 9000 && myb[2] ==true)
    {
        ui->line_3->setStyleSheet("color: rgb(255, 0, 0);");

        myb[2] = false;
    }
    else if(ui->progressBar->value() >= 12000 && myb[3] ==true)
    {
        ui->line_4->setStyleSheet("color: rgb(255, 0, 0);");

        myb[3] = false;
    }
    else if(ui->progressBar->value()<=2500 && myb[3] ==false)
    {
        ui->line_1->setStyleSheet("color: rgb(0, 0, 0);");
        ui->line_2->setStyleSheet("color: rgb(0, 0, 0);");
        ui->line_3->setStyleSheet("color: rgb(0, 0, 0);");
        ui->line_4->setStyleSheet("color: rgb(0, 0, 0);");
        myb[0] = true;
        myb[1] = true;
        myb[2] = true;
        myb[3] = true;

    }
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
    static int i = 0;


    customWidget->xRot = 0;
    if(customWidget->yRot < 360)
    {
        customWidget->yRot++;
        i++;
        if(i>13320)
            i=0;
        ui->progressBar->setValue(i);
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

