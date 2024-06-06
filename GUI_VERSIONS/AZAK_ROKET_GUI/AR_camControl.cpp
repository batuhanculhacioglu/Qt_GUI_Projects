#include "AR_camControl.h"

AR_camControl::AR_camControl(QWidget *parent):
    QGLWidget(parent)
{
    xRot = 0;
    yRot = 0;
    zRot = 0;
    xRotCam = 0;
    yRotCam = 0;
    zRotCam = 0;
    x = 0;
    y = 0;
    z = 0;
    turnValue = 2;
    myTimer2 = new QTimer(this);
    connect(myTimer2, &QTimer::timeout, this, &AR_camControl::changeAngle);
    myTimer2->start(2);
}

void AR_camControl::setXRotation(float angle) {
    // X ekseni dönüş açısı ayarlanır
    normalizeAngle(&angle); // Açı değeri normalize edilir
    if (angle != xRotCam) {
        xRotCam = angle; // Yeni açı değeri atanır
        update(); // Ekran yenilenir
    }
}

void AR_camControl::setYRotation(float angle) {
    // Y ekseni dönüş açısı ayarlanır
    normalizeAngle(&angle); // Açı değeri normalize edilir
    if (angle != yRotCam) {
        yRotCam = angle; // Yeni açı değeri atanır
        update(); // Ekran yenilenir
    }
}

void AR_camControl::setZRotation(float angle) {
    // Z ekseni dönüş açısı ayarlanır
    normalizeAngle(&angle); // Açı değeri normalize edilir
    if (angle != zRotCam) {
        zRotCam = angle; // Yeni açı değeri atanır
        update(); // Ekran yenilenir
    }
}

void AR_camControl::normalizeAngle(float *angle) {
    // Açı değeri normalize edilir
    while (*angle < 0.0f)
        *angle += 360.0f;
    while (*angle > 360.0f)
        *angle -= 360.0f;
}

void AR_camControl::changeAngle()
{
    static int i=0;
    i++;
    if(i==360)
        i=0;
    if(turnValue == 1)
    {
        xRot = i;
        yRot = 0;
        zRot = 0;
    }

    else if(turnValue == 2)
    {
        xRot = 0;
        yRot = i;
        zRot = 0;
    }
    else if(turnValue == 3)
    {
        xRot = 0;
        yRot = 0;
        zRot = i;
    }
    else
    {

    }
    qInfo() << "changeAngle";
    update();

}
