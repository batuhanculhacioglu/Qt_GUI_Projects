#include "mainwindow.h"
#include "ui_mainwindow.h"

    auto series = new QLineSeries;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

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

/*
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

*/
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




}

MainWindow::~MainWindow()
{
    delete ui;
}
