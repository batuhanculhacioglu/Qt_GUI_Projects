#ifndef AR_DRAWOBJECT_H
#define AR_DRAWOBJECT_H

#include <QGLWidget>
#include <GL/glu.h>

/* Girilen L(Lenght) değeri uzunluğunda pozitif ve negatif x,y,z eksenleri oluşturulur. */
void AR_draw3AxisLine(float L);

/* Girilen xL(X Lenght), yL, zL değerleri uzunluğunda pozitif ve negatif x,y,z eksenleri oluşturulur. */
void AR_draw3AxisLine(float xL, float yL, float zL);

/* Girilen xN(X Negative), xP(X Positive), yN, yP, zN, zP değerleri aralığında x,y,z eksenleri oluşturulur. */
void AR_draw3AxisLine(float xN, float xP, float yN, float yP, float zN, float zP);

/* Girilen xyzL(Lenght) değeri büyüklüğünde bir küp oluşturur. */
void AR_drawRectangle(float xyzL);

/* Girilen xyzL(Lenght) değeri büyüklüğünde ve clr(renk string olarak yazılabilir.) renginde bir küp oluşturur. */
void AR_drawRectangle(float xyzL, QColor clr);

/* Girilen xL(Lenght), yL, zL değerleri büyüklüğünde bir dikdörtgen oluşturur. */
void AR_drawRectangle(float xL, float yL, float zL);

/* Girilen xL(Lenght), yL, zL değerleri büyüklüğünde ve clr(renk string olarak yazılabilir.) renginde bir küp oluşturur.*/
void AR_drawRectangle(float xL, float yL, float zL, QColor clr);

/* Girilen r(yarıçap), h(yükseklik), nS(yumuşak doku miktarı), clr(renk  string olarak yazılabilir.) özelliklerinde
bir silindir oluşturur. */
void AR_drawSmoothCylinder(float r, float h, int nS, QColor clr);

/* Girilen r(yarıçap), h(yükseklik), nS(yumuşak doku miktarı), clr(renk  string olarak yazılabilir.) özelliklerinde
bir koni oluşturur. */
void AR_drawSmoothCone(float r, float h, int nS, QColor clr);

/* Girilen r(yarıçap), h(yükseklik), nF(kanat sayısı), clr(renk  string olarak yazılabilir.) özelliklerinde
bir çember etrafında döndürülmüş kanat veya kanatlar oluşturur. */
void AR_drawFlap(float r, float h, int nF, QColor clr);

void AR_drawFire();

#endif // AR_DRAWOBJECT_H
