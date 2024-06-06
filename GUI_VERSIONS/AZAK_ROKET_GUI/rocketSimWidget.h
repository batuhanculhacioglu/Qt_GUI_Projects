#ifndef QGLWIDGET_H
#define QGLWIDGET_H

#include <QGLWidget>
#include <QDebug>
#include <GL/glu.h>
#include <QTimer>
#include "AR_camControl.h"
class rocketSimWidget : public QGLWidget
{
public:
    rocketSimWidget(QWidget *parent = 0);  // Değişkenler için başlangıçta null değerler atanmıştır. (constructor)

    void initializeGL() override;   // Program başlangıcında 1 defa çağrılır.
    void resizeGL(int w, int h) override;   // Program başlangıcında 1 defa çağrılır.
    void paintGL() override;    // Her update işleminden sonra çağrılır.

    void lightConfig(float x, float y, float z);

    void nulltestmethot();

    QTimer *myTimer;
    QTimer *myTimer2;
    QPoint lastPos;
    void mousePressEvent(QMouseEvent *event) override;
    void mouseMoveEvent(QMouseEvent *event) override;
/*
    float xRot;
    float yRot;
    float zRot;
    float xRotCam;
    float yRotCam;
    float zRotCam;
    float x,y,z;
    QPoint lastPos;
    int turnValue;

    void changeAngle();
    void mousePressEvent(QMouseEvent *event) override;
    void mouseMoveEvent(QMouseEvent *event) override;
    void setXRotation(float angle);
    void setYRotation(float angle);
    void setZRotation(float angle);
    void normalizeAngle(float *angle);
*/
    AR_camControl arCamControlInstance;
};
#endif // QGLWIDGET_H
