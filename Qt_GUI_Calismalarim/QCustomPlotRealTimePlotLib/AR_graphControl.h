#ifndef AR_GRAPHCONTROL_H
#define AR_GRAPHCONTROL_H

#include "qcustomplot.h"
#include <QTimer>

class AR_graphControl : public QObject
{
public:
    AR_graphControl();
    void setCustomPlotObjectAcc(QCustomPlot *ptr);
    void setCustomPlotObjectGyro(QCustomPlot *ptr);

private :
    QCustomPlot *customPlotG;
    double time;
    bool autoScroll;

    void updateGraphAcc();
    void updateGraphGyro();
    double getAccelX();
    double getAccelY();
};

#endif // AR_GRAPHCONTROL_H
