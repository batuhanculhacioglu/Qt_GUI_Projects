#ifndef AR_CAMCONTROL_H
#define AR_CAMCONTROL_H
#include <QGLWidget>
#include <QMouseEvent>
#include <QTimer>
#include <QDebug>

class AR_camControl : public QGLWidget
{
    friend class rocketSimWidget;

public:
    AR_camControl(QWidget *parent = 0);


    float xRot;
    float yRot;
    float zRot;
    float xRotCam;
    float yRotCam;
    float zRotCam;
    float x,y,z;
    int turnValue;

    void changeAngle();
    void setXRotation(float angle);
    void setYRotation(float angle);
    void setZRotation(float angle);
    void normalizeAngle(float *angle);

    QTimer *myTimer;
    QTimer *myTimer2;
};

#endif // AR_CAMCONTROL_H
