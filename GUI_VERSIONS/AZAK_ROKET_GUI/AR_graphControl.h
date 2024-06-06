#ifndef AR_GRAPHCONTROL_H
#define AR_GRAPHCONTROL_H

#include "qcustomplot.h"
#include <QTimer>

class AR_graphControl : public QObject
{
public:
    AR_graphControl();
    void setCustomPlotObjectAcc(qcustomplot *ptr); // Mainwindow içerisinde oluşturulan QCustomPlot nesnesinin adresi
    void setCustomPlotObjectGyro(qcustomplot *ptr);

private :
    qcustomplot *customPlotG;
    double time;
    bool autoScroll;

    void updateGraphAcc();
    void updateGraphGyro();
    double getAccelX(); // test amaçlı oluşturulmuştur.
    double getAccelY(); // test amaçlı oluşturulmuştur.
};

#endif // AR_GRAPHCONTROL_H
