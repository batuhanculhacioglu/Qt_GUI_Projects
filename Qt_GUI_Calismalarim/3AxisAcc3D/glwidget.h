#ifndef GLWIDGET_H
#define GLWIDGET_H

#include <QGLWidget>
#include <GL/glu.h>
#include <QTimer>
#include <QMouseEvent>
#include <QLabel>
#include <QDebug>
#include <qvector3d.h>
#include <cmath>


class GLWidget : public QGLWidget
{
public:
    GLWidget(QWidget *parent = 0);

    double time;
    QTimer *myTimer;
    float xRot;
    float yRot;
    float zRot;
    float xRotCam;
    float yRotCam;
    float zRotCam;
    float x,y,z;
    QPoint lastPos;
    float testValue;
    int turnValue;

    void initializeGL() override;
    void resizeGL(int w, int h) override;
    void paintGL() override;

    void mousePressEvent(QMouseEvent *event) override;
    void mouseMoveEvent(QMouseEvent *event) override;

    void draw3AxisLine();
    void drawCube();
    void drawSmoothCone(float radius, float height, int numSegments, float centralY);
    void drawCylinder(float radius, float height, int numSegments);
    void drawSmoothCylinder(float radius, float height, int numSegments);
    void drawFlap(float h, int numberFlap);
    void drawMotor(float radius, float height, int numSegments);
    void drawFire();

    void setXRotation(float angle);
    void setYRotation(float angle);
    void setZRotation(float angle);
    void normalizeAngle(float *angle);

    void changeAngle();

    void changeCam();
};


#endif // GLWIDGET_H
