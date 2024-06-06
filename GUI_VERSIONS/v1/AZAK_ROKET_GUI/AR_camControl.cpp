#include "AR_camControl.h"
#include <QDebug>

AR_camControl AR_camControlInstance;
AR_camControl::AR_camControl()
{
    AR_camControlInstance.x = 0;
    AR_camControlInstance.y = 0;
    AR_camControlInstance.z = 0;

    AR_camControlInstance.xRot = 0;
    AR_camControlInstance.yRot = 0;
    AR_camControlInstance.zRot = 0;

    AR_camControlInstance.xRotCam = 0;
    AR_camControlInstance.yRotCam = 0;
    AR_camControlInstance.zRotCam = 0;
    turnValue = 2;
}

void AR_camControl::AR_setXRotation(float angle) {
    // X ekseni dönüş açısı ayarlanır
    AR_normalizeAngle(&angle); // Açı değeri normalize edilir
    if (angle != xRotCam) {
        xRotCam = angle; // Yeni açı değeri atanır
    }
}

void AR_camControl::AR_setYRotation(float angle) {
    // Y ekseni dönüş açısı ayarlanır
    AR_normalizeAngle(&angle); // Açı değeri normalize edilir
    if (angle != yRotCam) {
        yRotCam = angle; // Yeni açı değeri atanır
    }
}

void AR_camControl::AR_setZRotation(float angle) {
    // Z ekseni dönüş açısı ayarlanır
    AR_normalizeAngle(&angle); // Açı değeri normalize edilir
    if (angle != zRotCam) {
        zRotCam = angle; // Yeni açı değeri atanır
    }
}

void AR_camControl::AR_normalizeAngle(float *angle) {
    // Açı değeri normalize edilir
    while (*angle < 0.0f)
        *angle += 360.0f;
    while (*angle > 360.0f)
        *angle -= 360.0f;
}

void AR_camControl::AR_updateCamPosition(AR_camControl *ptr)
{
    AR_camControlInstance.xRotCam = ptr->xRotCam;
    AR_camControlInstance.yRotCam = ptr->yRotCam;
    AR_camControlInstance.zRotCam = ptr->zRotCam;

    x = AR_camControlInstance.xRotCam;
    y = AR_camControlInstance.yRotCam;
    z = AR_camControlInstance.zRotCam;

    glRotatef(x, 1.0f, 0.0, 0.0f);
    glRotatef(z, 0.0f, 0.0f, -1.0f);
    glRotatef(y, 0.0f, 1.0f, 0.0f);

}

void AR_camControl::AR_updateRotPosition(AR_camControl *ptr)
{
    AR_normalizeAngle(&(ptr->xRot));
    AR_normalizeAngle(&(ptr->yRot));
    AR_normalizeAngle(&(ptr->zRot));

    AR_camControlInstance.xRot = ptr->xRot;
    AR_camControlInstance.yRot = ptr->yRot;
    AR_camControlInstance.zRot = ptr->zRot;

    x = AR_camControlInstance.xRot;
    y = AR_camControlInstance.yRot;
    z = AR_camControlInstance.zRot;
}

void AR_camControl::AR_updateRotPosition()
{
    AR_normalizeAngle(&(AR_camControlInstance.xRot));
    AR_normalizeAngle(&(AR_camControlInstance.yRot));
    AR_normalizeAngle(&(AR_camControlInstance.zRot));

    x = AR_camControlInstance.xRot;
    y = AR_camControlInstance.yRot;
    z = AR_camControlInstance.zRot;

    glRotatef(x, 1.0f, 0.0, 0.0f);
    glRotatef(z, 0.0f, 0.0f, -1.0f);
    glRotatef(y, 0.0f, 1.0f, 0.0f);
}

void AR_camControl::AR_getCamPosition(AR_camControl *ptr)
{
    ptr->xRot = AR_camControlInstance.xRot;
    ptr->yRot = AR_camControlInstance.yRot;
    ptr->zRot = AR_camControlInstance.zRot;

    ptr->xRotCam = AR_camControlInstance.xRotCam;
    ptr->yRotCam = AR_camControlInstance.yRotCam;
    ptr->zRotCam = AR_camControlInstance.zRotCam;
}
/*
void AR_camControl::AR_testChangeAngle()
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
}
*/
