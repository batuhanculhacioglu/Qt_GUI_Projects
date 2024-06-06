#include "AR_camControl.h"
#include <QDebug>
#include "ar_serialCommunication.h"

AR_serialCommunication serialCommunicationInstanceCam;

AR_camControl::AR_camControl()
{
    x = 0;
    y = 0;
    z = 0;

    xRot = 0;
    yRot = 0;
    zRot = 0;

    xRotCam = 0;
    yRotCam = 0;
    zRotCam = 0;
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
    xRotCam = ptr->xRotCam;
    yRotCam = ptr->yRotCam;
    zRotCam = ptr->zRotCam;

    glRotatef(xRotCam, 1.0f, 0.0, 0.0f);
    glRotatef(zRotCam, 0.0f, 0.0f, -1.0f);
    glRotatef(yRotCam, 0.0f, 1.0f, 0.0f);
}

void AR_camControl::AR_updateRotPosition()
{
    serialCommunicationInstanceCam.AR_returnSerialCommunicationValues();
    AR_normalizeAngle(&(serialCommunicationInstanceCam.aX));
    AR_normalizeAngle(&(serialCommunicationInstanceCam.aY));
    AR_normalizeAngle(&(serialCommunicationInstanceCam.aZ));

    xRot = serialCommunicationInstanceCam.aX;
    yRot = serialCommunicationInstanceCam.aY;
    zRot = serialCommunicationInstanceCam.aZ;

    glRotatef(xRot, 1.0f, 0.0, 0.0f);
    glRotatef(zRot, 0.0f, 0.0f, -1.0f);
    glRotatef(yRot, 0.0f, 1.0f, 0.0f);
}

void AR_camControl::AR_getCamPosition(AR_camControl *ptr)
{
    ptr->xRot = xRot;
    ptr->yRot = yRot;
    ptr->zRot = zRot;

    ptr->xRotCam = xRotCam;
    ptr->yRotCam = yRotCam;
    ptr->zRotCam = zRotCam;
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
