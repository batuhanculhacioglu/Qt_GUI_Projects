#include "mainwindow.h"
#include "ui_mainwindow.h"
QLineSeries *series = new QLineSeries();
    QChart *chart = new QChart();
auto axisY = new QValueAxis;
auto axisX = new QValueAxis;
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    /*
    auto chart = new QChart;
    chart->legend()->hide();
    chart->setTitle("Line Chart Example");

    auto axisX = new QValueAxis;
    axisX->setTickCount(10);
    chart->addAxis(axisX, Qt::AlignBottom);

    auto series = new QLineSeries;

    series->append(1,2);
    series->append(2,4);
    series->append(3,8);
    series->append(4,16);
    series->append(5,32);
    series->append(6,32);
    series->append(7,32);
    series->setColor(QColorConstants::Red);

    chart->addSeries(series);

    auto axisY = new QValueAxis;
    axisY->setLinePenColor(series->pen().color());
    axisY->setTickCount(10);

    chart->addAxis(axisY, Qt::AlignLeft);
    series->attachAxis(axisX);
    series->attachAxis(axisY);



    chart->setTheme(QChart::ChartThemeDark);
    chart->setVisible(true);

    auto chart = new QChart;
    chart->legend()->hide();
    chart->setTitle("Multiple Vertical Axes in Chart");

    auto axisX = new QValueAxis;
    axisX->setTickCount(21);
    axisX->setMin(0);


    auto axisY = new QValueAxis;
    axisY->setTickCount(11);
    axisY->setMin(0);


    chart->addAxis(axisY, Qt::AlignLeft);
    chart->addAxis(axisX, Qt::AlignBottom);


    int i=1, j=1;
    for(;i<20;i++)
    {
        j=i*2;
        series->append(i,j);
    }


    chart->addSeries(series);

    series->attachAxis(axisX);
    series->attachAxis(axisY);
    chart->setTheme(QChart::ChartThemeDark);
    QChartView *chartView = new QChartView(chart);
    chartView->setFixedHeight(800);
    chartView->setFixedWidth(800);
    chartView->setRenderHint(QPainter::Antialiasing);
    chartView->setVisible(true);
    setCentralWidget(chartView);
*/


    series->append(0, 6);
    series->append(2, 4);
    series->append(3, 8);
    series->append(7, 4);
    series->append(10, 5);

    // Create a chart and add the series


    axisY->setLinePenColor(series->pen().color());
    axisY->setTickCount(10);

    axisX->setTickCount(10);
    chart->addAxis(axisY, Qt::AlignLeft);
    chart->addAxis(axisX, Qt::AlignBottom);
    chart->legend()->hide();
    chart->addSeries(series);
    chart->createDefaultAxes();
    chart->setTheme(QChart::ChartThemeDark);

    // Set the chart on the QChartView
    QChartView *chartView = new QChartView(chart);
    chartView->setParent(ui->horizontalFrame);
    chartView->setRenderHint(QPainter::Antialiasing);
    chartView->setFixedHeight(450);
    chartView->setFixedWidth(550);
    chartView->setVisible(true);


    time = 0;

    myTimer = new QTimer(this);
    connect(myTimer, &QTimer::timeout, this, &MainWindow::updateDiagram);

    myTimer->start(100);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::updateDiagram()
{
    time += 0.1;

    double accelX = getAccelX();
    double accelY = getAccelY();
    double accelZ = getAccelY();

    series->append(time,accelX);

    if(time>60)
    {
        axisX->setMin(time-60);
        axisX->setMax(time+10);
    }


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
