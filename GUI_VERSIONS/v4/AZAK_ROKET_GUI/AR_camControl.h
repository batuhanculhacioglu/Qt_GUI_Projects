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
    int turnValue; // AR_testChangeAngle() methodu için dönüş yönünün belirlenmesi

   // void AR_testChangeAngle(); // Test amaçlı oluşturulmuş sanal açı değerleri
    void AR_setXRotation(float angle);
    void AR_setYRotation(float angle);
    void AR_setZRotation(float angle);
    void AR_normalizeAngle(float *angle);
    void AR_updateCamPosition(AR_camControl *ptr); // ptr nesnesinin değerlerini AR_camControl classının RotCam yerel değişkenlerine yazar.
    void AR_updateRotPosition(); // ar_serialCommunication nesnesi method içerisinde çağrılarak AR_camControl classı Rot yerel değişkenlerine yazar.
    void AR_updateRotCamRotValues(AR_camControl *ptr);
    void AR_getCamPosition(AR_camControl *ptr); // ptr nesnesine AR_camControl Rot ve RotCam yerel değişkenlerinin değerlerini yazar.

};


#endif // AR_CAMCONTROL_H
