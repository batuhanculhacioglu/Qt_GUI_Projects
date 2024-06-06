#ifndef QGLWIDGET_H
#define QGLWIDGET_H

#include <QGLWidget>
#include <QDebug>
#include <GL/glu.h>
#include <QTimer>
#include <QMouseEvent>
#include "AR_camControl.h"

class rocketSimWidget : public QGLWidget
{
public:
    rocketSimWidget(QWidget *parent = 0);  // Değişkenler için başlangıçta null değerler atanmıştır. (constructor)

    AR_camControl AR_camControlInstance;
    GLuint texID;

    void initializeGL() override;   // Program başlangıcında 1 defa çağrılır.
    void resizeGL(int w, int h) override;   // Program başlangıcında 1 defa çağrılır.
    void paintGL() override;    // Her update işleminden sonra çağrılır.

    void lightConfig(float x, float y, float z);

    void nulltestmethod();

    QTimer *updateGLTimer;
    QTimer *AR_testChangeAngleTimer;
    QPoint lastPos;
    void mousePressEvent(QMouseEvent *event) override;
    void mouseMoveEvent(QMouseEvent *event) override;



};
#endif // QGLWIDGET_H
