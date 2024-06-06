#ifndef AR_CAMCONTROL_H
#define AR_CAMCONTROL_H
#include <QGLWidget>

class AR_camControl
{
public:
    AR_camControl();

    float xRot; // Acc Verisi İle xRotation
    float yRot;
    float zRot;
    float xRotCam; // Mouse kontrolü ile xRotation
    float yRotCam;
    float zRotCam;
    float x,y,z; // xRot + xRotCam verilerinin birleştirilmesi
    int turnValue; // testChangeAngle() methodu için dönüş yönünün belirlenmesi

   // void AR_testChangeAngle(); // Test amaçlı oluşturulmuş sanal açı değerleri
    void AR_setXRotation(float angle);
    void AR_setYRotation(float angle);
    void AR_setZRotation(float angle);
    void AR_normalizeAngle(float *angle);
    void AR_updateCamPosition(AR_camControl *ptr);
    void AR_updateRotPosition();
    void AR_getCamPosition(AR_camControl *ptr);
};


#endif // AR_CAMCONTROL_H
