#include "AR_graphControl.h"
#include <QTimer>
#include <QDebug>

AR_graphControl::AR_graphControl()
    :customPlotG(nullptr)
{

}

void AR_graphControl::setCustomPlotObjectAcc(QCustomPlot *ptr)
{
    customPlotG = ptr;

    customPlotG->addGraph();
    customPlotG->xAxis->setLabel("Time");
    customPlotG->xAxis->setRange(0,5);
    customPlotG->yAxis->setLabel("Axel");
    customPlotG->yAxis->setRange(-1,1);
    customPlotG->xAxis->setLabelColor(Qt::white);
    customPlotG->yAxis->setLabelColor(Qt::white);
    customPlotG->xAxis->setTickLabelColor(Qt::white);
    customPlotG->yAxis->setTickLabelColor(Qt::white);
    customPlotG->addGraph();
    customPlotG->addGraph();

    QPen pen;
    pen.setWidth(2);
    pen.setColor(QColor(255,0,0));
    customPlotG->graph(0)->setPen(pen);

    pen.setWidth(2);
    pen.setColor(QColor(0,255,0));
    customPlotG->graph(1)->setPen(pen);

    pen.setColor(QColor(0,0,255));
    customPlotG->graph(2)->setPen(pen);

    customPlotG->graph(0)->setName("accelX grafiği");
    customPlotG->graph(1)->setName("accelY grafiği");
    customPlotG->graph(2)->setName("accelZ grafiği");
    customPlotG->legend->setVisible(true);
    customPlotG->legend->setFont(QFont("Times", 9, 9));

    customPlotG->setBackground(QBrush(Qt::black));
    customPlotG->axisRect()->setBackground(Qt::white);
    customPlotG->setInteractions(QCP::iRangeZoom | QCP::iRangeDrag);



    customPlotG->setBackground(QBrush(QColor(46, 52, 64))); // Koyu mavi-siyah tonu

    // Grafik çerçevesinin arka plan rengini koyu yapma
    customPlotG->axisRect()->setBackground(QBrush(QColor(46, 52, 64))); // Koyu mavi-siyah tonu

    // Eksenlerin ve etiketlerin renklerini ayarlama
    customPlotG->xAxis->setBasePen(QPen(Qt::white));
    customPlotG->yAxis->setBasePen(QPen(Qt::white));
    customPlotG->xAxis->setTickPen(QPen(Qt::white));
    customPlotG->yAxis->setTickPen(QPen(Qt::white));
    customPlotG->xAxis->setSubTickPen(QPen(Qt::white));
    customPlotG->yAxis->setSubTickPen(QPen(Qt::white));
    customPlotG->xAxis->setTickLabelColor(Qt::white);
    customPlotG->yAxis->setTickLabelColor(Qt::white);
    customPlotG->xAxis->setLabelColor(Qt::white);
    customPlotG->yAxis->setLabelColor(Qt::white);

    // Grafik çizgilerinin renklerini ayarlama
    customPlotG->xAxis->grid()->setPen(QPen(QColor(79, 91, 107), 0, Qt::DotLine));
    customPlotG->yAxis->grid()->setPen(QPen(QColor(79, 91, 107), 0, Qt::DotLine));
    customPlotG->xAxis->grid()->setSubGridPen(QPen(QColor(99, 115, 133), 0, Qt::DotLine));
    customPlotG->yAxis->grid()->setSubGridPen(QPen(QColor(99, 115, 133), 0, Qt::DotLine));
    customPlotG->xAxis->grid()->setSubGridVisible(true);
    customPlotG->yAxis->grid()->setSubGridVisible(true);
    customPlotG->xAxis->grid()->setZeroLinePen(Qt::NoPen);
    customPlotG->yAxis->grid()->setZeroLinePen(Qt::NoPen);
    customPlotG->xAxis->setUpperEnding(QCPLineEnding::esSpikeArrow);
    customPlotG->yAxis->setUpperEnding(QCPLineEnding::esSpikeArrow);

    QFont font = customPlotG->xAxis->labelFont();
    font.setPointSize(10); // Yazı boyutunu 12 olarak ayarlama (örneğin)
    font.setBold(true); // Kalın yazı tipi kullanma
    customPlotG->xAxis->setLabelFont(font); // X ekseni etiketleri için
    customPlotG->xAxis->setTickLabelFont(font); // X ekseni değer etiketleri için

    font = customPlotG->yAxis->labelFont();
    font.setPointSize(10); // Yazı boyutunu 12 olarak ayarlama (örneğin)
    font.setBold(true); // Kalın yazı tipi kullanma
    customPlotG->yAxis->setLabelFont(font); // Y ekseni etiketleri için
    customPlotG->yAxis->setTickLabelFont(font); // Y ekseni değer etiketleri için


    QVector<double> zeroLineX = {0, qInf()};
    QVector<double> zeroLineY = {0, 0};

    // Çizgiyi oluşturma
    customPlotG->addGraph();
    customPlotG->graph()->setData(zeroLineX, zeroLineY);
    customPlotG->graph()->setPen(QPen(Qt::red)); // Çizgi rengini belirleme (örneğin kırmızı)
    customPlotG->graph(3)->removeFromLegend();

    autoScroll = true;
    QTimer *updateGraphTimer1(nullptr);
    updateGraphTimer1 = new QTimer(this); // QTimer nesnesi oluşturun
    connect(updateGraphTimer1, &QTimer::timeout, this, &AR_graphControl::updateGraphAcc);
    updateGraphTimer1->start(10); // Timer'ı 1000 ms (1 saniye)
}

void AR_graphControl::setCustomPlotObjectGyro(QCustomPlot *ptr)
{
    customPlotG = ptr;

    customPlotG->addGraph();
    customPlotG->xAxis->setLabel("Time");
    customPlotG->xAxis->setRange(0,5);
    customPlotG->yAxis->setLabel("Axel");
    customPlotG->yAxis->setRange(-1,1);
    customPlotG->xAxis->setLabelColor(Qt::white);
    customPlotG->yAxis->setLabelColor(Qt::white);
    customPlotG->xAxis->setTickLabelColor(Qt::white);
    customPlotG->yAxis->setTickLabelColor(Qt::white);
    customPlotG->addGraph();
    customPlotG->addGraph();

    QPen pen;
    pen.setWidth(2);
    pen.setColor(QColor(255,0,0));
    customPlotG->graph(0)->setPen(pen);

    pen.setWidth(2);
    pen.setColor(QColor(0,255,0));
    customPlotG->graph(1)->setPen(pen);

    pen.setColor(QColor(0,0,255));
    customPlotG->graph(2)->setPen(pen);

    customPlotG->graph(0)->setName("accelX grafiği");
    customPlotG->graph(1)->setName("accelY grafiği");
    customPlotG->graph(2)->setName("accelZ grafiği");
    customPlotG->legend->setVisible(true);
    customPlotG->legend->setFont(QFont("Times", 9, 9));

    customPlotG->setBackground(QBrush(Qt::black));
    customPlotG->axisRect()->setBackground(Qt::white);
    customPlotG->setInteractions(QCP::iRangeZoom | QCP::iRangeDrag);



    customPlotG->setBackground(QBrush(QColor(46, 52, 64))); // Koyu mavi-siyah tonu

    // Grafik çerçevesinin arka plan rengini koyu yapma
    customPlotG->axisRect()->setBackground(QBrush(QColor(46, 52, 64))); // Koyu mavi-siyah tonu

    // Eksenlerin ve etiketlerin renklerini ayarlama
    customPlotG->xAxis->setBasePen(QPen(Qt::white));
    customPlotG->yAxis->setBasePen(QPen(Qt::white));
    customPlotG->xAxis->setTickPen(QPen(Qt::white));
    customPlotG->yAxis->setTickPen(QPen(Qt::white));
    customPlotG->xAxis->setSubTickPen(QPen(Qt::white));
    customPlotG->yAxis->setSubTickPen(QPen(Qt::white));
    customPlotG->xAxis->setTickLabelColor(Qt::white);
    customPlotG->yAxis->setTickLabelColor(Qt::white);
    customPlotG->xAxis->setLabelColor(Qt::white);
    customPlotG->yAxis->setLabelColor(Qt::white);

    // Grafik çizgilerinin renklerini ayarlama
    customPlotG->xAxis->grid()->setPen(QPen(QColor(79, 91, 107), 0, Qt::DotLine));
    customPlotG->yAxis->grid()->setPen(QPen(QColor(79, 91, 107), 0, Qt::DotLine));
    customPlotG->xAxis->grid()->setSubGridPen(QPen(QColor(99, 115, 133), 0, Qt::DotLine));
    customPlotG->yAxis->grid()->setSubGridPen(QPen(QColor(99, 115, 133), 0, Qt::DotLine));
    customPlotG->xAxis->grid()->setSubGridVisible(true);
    customPlotG->yAxis->grid()->setSubGridVisible(true);
    customPlotG->xAxis->grid()->setZeroLinePen(Qt::NoPen);
    customPlotG->yAxis->grid()->setZeroLinePen(Qt::NoPen);
    customPlotG->xAxis->setUpperEnding(QCPLineEnding::esSpikeArrow);
    customPlotG->yAxis->setUpperEnding(QCPLineEnding::esSpikeArrow);

    QFont font = customPlotG->xAxis->labelFont();
    font.setPointSize(10); // Yazı boyutunu 12 olarak ayarlama (örneğin)
    font.setBold(true); // Kalın yazı tipi kullanma
    customPlotG->xAxis->setLabelFont(font); // X ekseni etiketleri için
    customPlotG->xAxis->setTickLabelFont(font); // X ekseni değer etiketleri için

    font = customPlotG->yAxis->labelFont();
    font.setPointSize(10); // Yazı boyutunu 12 olarak ayarlama (örneğin)
    font.setBold(true); // Kalın yazı tipi kullanma
    customPlotG->yAxis->setLabelFont(font); // Y ekseni etiketleri için
    customPlotG->yAxis->setTickLabelFont(font); // Y ekseni değer etiketleri için


    QVector<double> zeroLineX = {0, qInf()};
    QVector<double> zeroLineY = {0, 0};

    // Çizgiyi oluşturma
    customPlotG->addGraph();
    customPlotG->graph()->setData(zeroLineX, zeroLineY);
    customPlotG->graph()->setPen(QPen(Qt::red)); // Çizgi rengini belirleme (örneğin kırmızı)
    customPlotG->graph(3)->removeFromLegend();

    autoScroll = true;

    QTimer *updateGraphTimer2(nullptr);
    updateGraphTimer2 = new QTimer(this); // QTimer nesnesi oluşturun
    connect(updateGraphTimer2, &QTimer::timeout, this, &AR_graphControl::updateGraphGyro);
    updateGraphTimer2->start(10); // Timer'ı 1000 ms (1 saniye)
}

void AR_graphControl::updateGraphAcc()
{
    time += 0.01;
    static int i = 0;
    double accelX = getAccelX();
    double accelY = getAccelY();
    double accelZ = getAccelY();
    i++;
    if(i==10)
    {
        customPlotG->graph(0)->addData(time,accelX);
        customPlotG->graph(1)->addData(time,accelY);
        customPlotG->graph(2)->addData(time,accelZ);
        i=0;
    }


    if(time>3.5 && autoScroll==true)
    {
        customPlotG->xAxis->setRange(time - 3.5, time + 1.5);
    }

    QVector<double> zeroLineX = {0, customPlotG->xAxis->range().upper };
    QVector<double> zeroLineY = {0, 0};
    customPlotG->graph()->setData(zeroLineX, zeroLineY);

    customPlotG->replot();

}

void AR_graphControl::updateGraphGyro()
{
    time += 0.01;
    static int i = 0;
    double accelX = 10;
    double accelY = 20;
    double accelZ = 30;
    i++;
    if(i==10)
    {
        customPlotG->graph(0)->addData(time,accelX);
        customPlotG->graph(1)->addData(time,accelY);
        customPlotG->graph(2)->addData(time,accelZ);
        i=0;
    }


    if(time>3.5 && autoScroll==true)
    {
        customPlotG->xAxis->setRange(time - 3.5, time + 1.5);
    }

    QVector<double> zeroLineX = {0, customPlotG->xAxis->range().upper };
    QVector<double> zeroLineY = {0, 0};
    customPlotG->graph()->setData(zeroLineX, zeroLineY);

    customPlotG->replot();
}

double AR_graphControl::getAccelX()
{

    double accelX = QRandomGenerator::global()->generateDouble();
    int pn=0;
    while(pn==0)
    {
        pn = QRandomGenerator::global()->bounded(-1,2);
    }
    return accelX*pn;
}

double AR_graphControl::getAccelY()
{
    double accelY = QRandomGenerator::global()->generateDouble();
    int pn=0;
    while(pn==0)
    {
        pn = QRandomGenerator::global()->bounded(-1,2);
    }
    return accelY*pn;
}
