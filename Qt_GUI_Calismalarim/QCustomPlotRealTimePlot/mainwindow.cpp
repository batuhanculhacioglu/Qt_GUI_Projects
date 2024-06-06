#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->customPlot->addGraph();
    ui->customPlot->xAxis->setLabel("Time");
    ui->customPlot->xAxis->setRange(0,5);
    ui->customPlot->yAxis->setLabel("Axel");
    ui->customPlot->yAxis->setRange(-1,1);
    ui->customPlot->xAxis->setLabelColor(Qt::white);
    ui->customPlot->yAxis->setLabelColor(Qt::white);
    ui->customPlot->xAxis->setTickLabelColor(Qt::white);
    ui->customPlot->yAxis->setTickLabelColor(Qt::white);
    ui->customPlot->addGraph();
    ui->customPlot->addGraph();

    QPen pen;
    pen.setWidth(2);
    pen.setColor(QColor(255,0,0));
    ui->customPlot->graph(0)->setPen(pen);

    pen.setWidth(2);
    pen.setColor(QColor(0,255,0));
    ui->customPlot->graph(1)->setPen(pen);

    pen.setColor(QColor(0,0,255));
    ui->customPlot->graph(2)->setPen(pen);

    ui->customPlot->graph(0)->setName("accelX grafiği");
    ui->customPlot->graph(1)->setName("accelY grafiği");
    ui->customPlot->graph(2)->setName("accelZ grafiği");
    ui->customPlot->legend->setVisible(true);
    ui->customPlot->legend->setFont(QFont("Times", 9, 9));

    ui->customPlot->setBackground(QBrush(Qt::black));
    ui->customPlot->axisRect()->setBackground(Qt::white);
    ui->customPlot->setInteractions(QCP::iRangeZoom | QCP::iRangeDrag);



    ui->customPlot->setBackground(QBrush(QColor(46, 52, 64))); // Koyu mavi-siyah tonu

    // Grafik çerçevesinin arka plan rengini koyu yapma
    ui->customPlot->axisRect()->setBackground(QBrush(QColor(46, 52, 64))); // Koyu mavi-siyah tonu

    // Eksenlerin ve etiketlerin renklerini ayarlama
    ui->customPlot->xAxis->setBasePen(QPen(Qt::white));
    ui->customPlot->yAxis->setBasePen(QPen(Qt::white));
    ui->customPlot->xAxis->setTickPen(QPen(Qt::white));
    ui->customPlot->yAxis->setTickPen(QPen(Qt::white));
    ui->customPlot->xAxis->setSubTickPen(QPen(Qt::white));
    ui->customPlot->yAxis->setSubTickPen(QPen(Qt::white));
    ui->customPlot->xAxis->setTickLabelColor(Qt::white);
    ui->customPlot->yAxis->setTickLabelColor(Qt::white);
    ui->customPlot->xAxis->setLabelColor(Qt::white);
    ui->customPlot->yAxis->setLabelColor(Qt::white);

    // Grafik çizgilerinin renklerini ayarlama
    ui->customPlot->xAxis->grid()->setPen(QPen(QColor(79, 91, 107), 0, Qt::DotLine));
    ui->customPlot->yAxis->grid()->setPen(QPen(QColor(79, 91, 107), 0, Qt::DotLine));
    ui->customPlot->xAxis->grid()->setSubGridPen(QPen(QColor(99, 115, 133), 0, Qt::DotLine));
    ui->customPlot->yAxis->grid()->setSubGridPen(QPen(QColor(99, 115, 133), 0, Qt::DotLine));
    ui->customPlot->xAxis->grid()->setSubGridVisible(true);
    ui->customPlot->yAxis->grid()->setSubGridVisible(true);
    ui->customPlot->xAxis->grid()->setZeroLinePen(Qt::NoPen);
    ui->customPlot->yAxis->grid()->setZeroLinePen(Qt::NoPen);
    ui->customPlot->xAxis->setUpperEnding(QCPLineEnding::esSpikeArrow);
    ui->customPlot->yAxis->setUpperEnding(QCPLineEnding::esSpikeArrow);

    QFont font = ui->customPlot->xAxis->labelFont();
    font.setPointSize(10); // Yazı boyutunu 12 olarak ayarlama (örneğin)
    font.setBold(true); // Kalın yazı tipi kullanma
    ui->customPlot->xAxis->setLabelFont(font); // X ekseni etiketleri için
    ui->customPlot->xAxis->setTickLabelFont(font); // X ekseni değer etiketleri için

    font = ui->customPlot->yAxis->labelFont();
    font.setPointSize(10); // Yazı boyutunu 12 olarak ayarlama (örneğin)
    font.setBold(true); // Kalın yazı tipi kullanma
    ui->customPlot->yAxis->setLabelFont(font); // Y ekseni etiketleri için
    ui->customPlot->yAxis->setTickLabelFont(font); // Y ekseni değer etiketleri için


    QVector<double> zeroLineX = {0, qInf()};
    QVector<double> zeroLineY = {0, 0};

    // Çizgiyi oluşturma
    ui->customPlot->addGraph();
    ui->customPlot->graph()->setData(zeroLineX, zeroLineY);
    ui->customPlot->graph()->setPen(QPen(Qt::red)); // Çizgi rengini belirleme (örneğin kırmızı)
    ui->customPlot->graph(3)->removeFromLegend();


    time = 0;

    myTimer = new QTimer(this);
    connect(myTimer, &QTimer::timeout, this, &MainWindow::updateDiagram);

    autoScroll = true;
}

MainWindow::~MainWindow()
{
    delete ui;
}

double MainWindow::getAccelX()
{
    /*
    static double accelX = 0.98;
    static bool deger = false;
    if(deger==false)
    {
        accelX -= 0.01;
        if(accelX<=-0.97)
            deger=true;
    }
    else if(deger==true)
    {
        accelX += 0.01;
        if(accelX>=0.97)
            deger=false;
    }
    return accelX;
    */

    double accelX = QRandomGenerator::global()->generateDouble();
    int pn=0;
    while(pn==0)
    {
        pn = QRandomGenerator::global()->bounded(-1,2);
    }
    return accelX*pn;
}

double MainWindow::getAccelY()
{
    double accelY = QRandomGenerator::global()->generateDouble();
    int pn=0;
    while(pn==0)
    {
        pn = QRandomGenerator::global()->bounded(-1,2);
    }
    return accelY*pn;
}

void MainWindow::updateDiagram()
{
    time += 0.01;
    static int i = 0;
    double accelX = getAccelX();
    double accelY = getAccelY();
    double accelZ = getAccelY();
    i++;
    if(i==10)
    {
        ui->customPlot->graph(0)->addData(time,accelX);
        ui->customPlot->graph(1)->addData(time,accelY);
        ui->customPlot->graph(2)->addData(time,accelZ);
        i=0;
    }


    if(time>3.5 && autoScroll==true)
    {
        ui->customPlot->xAxis->setRange(time - 3.5, time + 1.5);
    }

    QVector<double> zeroLineX = {0, ui->customPlot->xAxis->range().upper };
    QVector<double> zeroLineY = {0, 0};
    ui->customPlot->graph()->setData(zeroLineX, zeroLineY);

    ui->customPlot->replot();
}

void MainWindow::on_startButton_clicked()
{
    myTimer->start(10);
}


void MainWindow::on_stopButton_clicked()
{
    myTimer->stop();
}


void MainWindow::on_showAccelXGraph_stateChanged(int arg1)
{
    if(arg1 == Qt::Checked)
    {
        ui->customPlot->graph(0)->setVisible(true);
    }
    else
    {
        ui->customPlot->graph(0)->setVisible(false);
    }
}


void MainWindow::on_showAccelYGraph_stateChanged(int arg1)
{
    if(arg1 == Qt::Checked)
    {
        ui->customPlot->graph(1)->setVisible(true);
    }
    else
    {
        ui->customPlot->graph(1)->setVisible(false);
    }
}


void MainWindow::on_showAccelZGraph_stateChanged(int arg1)
{
    if(arg1 == Qt::Checked)
    {
        ui->customPlot->graph(2)->setVisible(true);
    }
    else
    {
        ui->customPlot->graph(2)->setVisible(false);
    }
}


void MainWindow::on_clearAccelGraph_clicked()
{
    ui->customPlot->graph(0)->data()->clear();
    ui->customPlot->graph(1)->data()->clear();
    ui->customPlot->graph(2)->data()->clear();
    ui->customPlot->replot();
}


void MainWindow::on_autoScroll_stateChanged(int arg1)
{
    if(arg1 == Qt::Checked)
    {
        autoScroll = true;
    }
    else
    {
        autoScroll = false;
    }
}

