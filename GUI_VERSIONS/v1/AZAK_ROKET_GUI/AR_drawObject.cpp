#include "AR_drawObject.h"


void AR_draw3AxisLine(float L)
{

    glPushMatrix();

    glBegin(GL_LINES);

    //Axis X
    glColor3f(1.0f, 0.0f, 0.0f); //Kırmızı
    glVertex3f(-L, 0.0f, 0.0f);
    glVertex3f(L, 0.0f, 0.0f);

    //Axis Y
    glColor3f(0.0f, 1.0f, 0.0f); //Yeşil
    glVertex3f(0.0f, -L, 0.0f);
    glVertex3f(0.0f, L, 0.0f);

    //Axis Z
    glColor3f(0.0f, 0.0f, 1.0f); //Mavi
    glVertex3f(0.0f, 0.0f, -L);
    glVertex3f(0.0f, 0.0f, L);

    glEnd();

    glPopMatrix();
}

void AR_draw3AxisLine(float xL, float yL, float zL)
{
    glPushMatrix();

    glBegin(GL_LINES);

    //Axis X
    glColor3f(1.0f, 0.0f, 0.0f); //Kırmızı
    glVertex3f(-xL, 0.0f, 0.0f);
    glVertex3f(xL, 0.0f, 0.0f);

    //Axis Y
    glColor3f(0.0f, 1.0f, 0.0f); //Yeşil
    glVertex3f(0.0f, -yL, 0.0f);
    glVertex3f(0.0f, yL, 0.0f);

    //Axis Z
    glColor3f(0.0f, 0.0f, 1.0f); //Mavi
    glVertex3f(0.0f, 0.0f, -zL);
    glVertex3f(0.0f, 0.0f, zL);

    glEnd();

    glPopMatrix();
}

void AR_draw3AxisLine(float xN, float xP, float yN, float yP, float zN, float zP)
{
    glPushMatrix();

    glBegin(GL_LINES);

    //Axis X
    glColor3f(1.0f, 0.0f, 0.0f); //Kırmızı
    glVertex3f(xN, 0.0f, 0.0f);
    glVertex3f(xP, 0.0f, 0.0f);

    //Axis Y
    glColor3f(0.0f, 1.0f, 0.0f); //Yeşil
    glVertex3f(0.0f, yN, 0.0f);
    glVertex3f(0.0f, yP, 0.0f);

    //Axis Z
    glColor3f(0.0f, 0.0f, 1.0f); //Mavi
    glVertex3f(0.0f, 0.0f, zN);
    glVertex3f(0.0f, 0.0f, zP);

    glEnd();

    glPopMatrix();
}

void AR_drawRectangle(float xyzL)
{
    glPushMatrix();

    glBegin(GL_QUADS);
    // Ön yüzey (z = 1)
    glColor3f(1.0f, 0.0f, 0.0f); // Kırmızı renk
    glVertex3f(-xyzL, -xyzL, xyzL);
    glVertex3f(xyzL, -xyzL, xyzL);
    glVertex3f(xyzL, xyzL, xyzL);
    glVertex3f(-xyzL, xyzL, xyzL);

    // Üst yüzey (y = 1)
    glColor3f(0.0f, xyzL, 0.0f); // Yeşil renk
    glVertex3f(xyzL, xyzL, -xyzL);
    glVertex3f(-xyzL, xyzL, -xyzL);
    glVertex3f(-xyzL, xyzL, xyzL);
    glVertex3f(xyzL, xyzL, xyzL);

    // Arka yüzey (z = -1)
    glColor3f(0.0f, 0.0f, 1.0f); // Mavi renk
    glVertex3f(xyzL, -xyzL, -xyzL);
    glVertex3f(-xyzL, -xyzL, -xyzL);
    glVertex3f(-xyzL, xyzL, -xyzL);
    glVertex3f(xyzL, xyzL, -xyzL);

    // Alt yüzey (y = -1)
    glColor3f(1.0f, 1.0f, 0.0f); // Sarı renk
    glVertex3f(-xyzL, -xyzL, -xyzL);
    glVertex3f(xyzL, -xyzL, -xyzL);
    glVertex3f(xyzL, -xyzL, xyzL);
    glVertex3f(-xyzL, -xyzL, xyzL);

    // Sol yüzey (x = -1)
    glColor3f(1.0f, 0.0f, 1.0f); // Pembe renk
    glVertex3f(-xyzL, -xyzL, -xyzL);
    glVertex3f(-xyzL, -xyzL, xyzL);
    glVertex3f(-xyzL, xyzL, xyzL);
    glVertex3f(-xyzL, xyzL, -xyzL);

    // Sağ yüzey (x = 1)
    glColor3f(0.0f, 1.0f, 1.0f); // Camgöbeği renk
    glVertex3f(xyzL, -xyzL, xyzL);
    glVertex3f(xyzL, -xyzL, -xyzL);
    glVertex3f(xyzL, xyzL, -xyzL);
    glVertex3f(xyzL, xyzL, xyzL);

    glEnd(); // Çizim bitirilir

    glPopMatrix();
}

void AR_drawRectangle(float xyzL, QColor clr)
{
    glPushMatrix();

    glBegin(GL_QUADS);
    // Ön yüzey (z = 1)
    glColor3f(clr.redF(), clr.greenF(), clr.blueF());
    glVertex3d(-xyzL, -xyzL, xyzL);
    glVertex3d(xyzL, -xyzL, xyzL);
    glVertex3d(xyzL, xyzL, xyzL);
    glVertex3d(-xyzL, xyzL, xyzL);

    // Üst yüzey (y = 1)
    glColor3f(clr.redF(), clr.greenF(), clr.blueF());
    glVertex3d(xyzL, xyzL, -xyzL);
    glVertex3d(-xyzL, xyzL, -xyzL);
    glVertex3d(-xyzL, xyzL, xyzL);
    glVertex3d(xyzL, xyzL, xyzL);

    // Arka yüzey (z = -1)
    glColor3f(clr.redF(), clr.greenF(), clr.blueF());
    glVertex3d(xyzL, -xyzL, -xyzL);
    glVertex3d(-xyzL, -xyzL, -xyzL);
    glVertex3d(-xyzL, xyzL, -xyzL);
    glVertex3d(xyzL, xyzL, -xyzL);

    // Alt yüzey (y = -1)
    glColor3f(clr.redF(), clr.greenF(), clr.blueF());
    glVertex3d(-xyzL, -xyzL, -xyzL);
    glVertex3d(xyzL, -xyzL, -xyzL);
    glVertex3d(xyzL, -xyzL, xyzL);
    glVertex3d(-xyzL, -xyzL, xyzL);

    // Sol yüzey (x = -1)
    glColor3f(clr.redF(), clr.greenF(), clr.blueF());
    glVertex3d(-xyzL, -xyzL, -xyzL);
    glVertex3d(-xyzL, -xyzL, xyzL);
    glVertex3d(-xyzL, xyzL, xyzL);
    glVertex3d(-xyzL, xyzL, -xyzL);

    // Sağ yüzey (x = 1)
    glColor3f(clr.redF(), clr.greenF(), clr.blueF());
    glVertex3d(xyzL, -xyzL, xyzL);
    glVertex3d(xyzL, -xyzL, -xyzL);
    glVertex3d(xyzL, xyzL, -xyzL);
    glVertex3d(xyzL, xyzL, xyzL);

    glEnd();

    glPopMatrix();
}



void AR_drawRectangle(float xL, float yL, float zL)
{
    glPushMatrix();

    glBegin(GL_QUADS);
    // Ön yüzey (z = 1)
    glColor3f(1.0f, 0.0f, 0.0f); // Kırmızı renk
    glVertex3f(-xL, -yL, zL);
    glVertex3f(xL, -yL, zL);
    glVertex3f(xL, yL, zL);
    glVertex3f(-xL, yL, zL);

    // Üst yüzey (y = 1)
    glColor3f(0.0f, 1.0f, 0.0f); // Yeşil renk
    glVertex3f(xL, yL, -zL);
    glVertex3f(-xL, yL, -zL);
    glVertex3f(-xL, yL, zL);
    glVertex3f(xL, yL, zL);

    // Arka yüzey (z = -1)
    glColor3f(0.0f, 0.0f, 1.0f); // Mavi renk
    glVertex3f(xL, -yL, -zL);
    glVertex3f(-xL, -yL, -zL);
    glVertex3f(-xL, yL, -zL);
    glVertex3f(xL, yL, -zL);

    // Alt yüzey (y = -1)
    glColor3f(1.0f, 1.0f, 0.0f); // Sarı renk
    glVertex3f(-xL, -yL, -zL);
    glVertex3f(xL, -yL, -zL);
    glVertex3f(xL, -yL, zL);
    glVertex3f(-xL, -yL, zL);

    // Sol yüzey (x = -1)
    glColor3f(1.0f, 0.0f, 1.0f); // Pembe renk
    glVertex3f(-xL, -yL, -zL);
    glVertex3f(-xL, -yL, zL);
    glVertex3f(-xL, yL, zL);
    glVertex3f(-xL, yL, -zL);

    // Sağ yüzey (x = 1)
    glColor3f(0.0f, 1.0f, 1.0f); // Camgöbeği renk
    glVertex3f(xL, -yL, zL);
    glVertex3f(xL, -yL, -zL);
    glVertex3f(xL, yL, -zL);
    glVertex3f(xL, yL, zL);

    glEnd();

    glPopMatrix();
}

void AR_drawRectangle(float xL, float yL, float zL, QColor clr)
{
    glPushMatrix();
    glColor3f(clr.redF(), clr.greenF(), clr.blueF());

    glBegin(GL_QUADS);
    // Ön yüzey (z = 1)

    glVertex3f(-xL, -yL, zL);
    glVertex3f(xL, -yL, zL);
    glVertex3f(xL, yL, zL);
    glVertex3f(-xL, yL, zL);

    // Üst yüzey (y = 1)
    glVertex3f(xL, yL, -zL);
    glVertex3f(-xL, yL, -zL);
    glVertex3f(-xL, yL, zL);
    glVertex3f(xL, yL, zL);

    // Arka yüzey (z = -1)
    glVertex3f(xL, -yL, -zL);
    glVertex3f(-xL, -yL, -zL);
    glVertex3f(-xL, yL, -zL);
    glVertex3f(xL, yL, -zL);

    // Alt yüzey (y = -1)
    glVertex3f(-xL, -yL, -zL);
    glVertex3f(xL, -yL, -zL);
    glVertex3f(xL, -yL, zL);
    glVertex3f(-xL, -yL, zL);

    // Sol yüzey (x = -1)
    glVertex3f(-xL, -yL, -zL);
    glVertex3f(-xL, -yL, zL);
    glVertex3f(-xL, yL, zL);
    glVertex3f(-xL, yL, -zL);

    // Sağ yüzey (x = 1)
    glVertex3f(xL, -yL, zL);
    glVertex3f(xL, -yL, -zL);
    glVertex3f(xL, yL, -zL);
    glVertex3f(xL, yL, zL);

    glEnd();

    glPopMatrix();
}

void AR_drawSmoothCylinder(float r, float h, int nS, QColor clr)
{
    glPushMatrix();
    glRotatef(90,-1,0,0);
    GLUquadric *quadric = gluNewQuadric();
    gluQuadricNormals(quadric, GLU_SMOOTH);
    gluQuadricTexture(quadric, GL_TRUE);

    glColor3f(clr.redF(), clr.greenF(), clr.blueF());

    gluQuadricOrientation(quadric, GLU_OUTSIDE); // Silindiri dışa doğru çiz
    gluCylinder(quadric, r, r, h, nS, 1); // Silindiri çiz

    gluPartialDisk(quadric, 0.0, r, nS, 1, 0.0, 360.0); // Silindirin tabanına daire çiz
    glTranslatef(0.0f, 0.0f, h); // Silindiri yüksekliği kadar yukarı taşı
    gluPartialDisk(quadric, 0.0, r, nS, 1, 0.0, 360.0); // Silindirin üst yüzeyine daire çiz

    gluDeleteQuadric(quadric);
    glPopMatrix(); // Önceki matris durumunu geri yükle
}


void AR_drawSmoothCone(float r, float h, int nS, QColor clr)
{
        glPushMatrix();

        glRotatef(90,-1,0,0);

        GLUquadric *quadric = gluNewQuadric();
        glLightModeli(GL_LIGHT_MODEL_TWO_SIDE, GL_TRUE);
        gluQuadricNormals(quadric, GLU_SMOOTH);
        gluQuadricTexture(quadric, GL_TRUE);
        gluQuadricOrientation(quadric, GLU_OUTSIDE);

        glColor3f(clr.redF(), clr.greenF(), clr.blueF()); // Beyaz renk

        gluCylinder(quadric, r, 0.0f, h, nS, 1); // Koninin yan yüzeylerini çiz
        gluDisk(quadric, 0.0, r, nS, 1);
        gluDeleteQuadric(quadric);

        glPopMatrix();
}

void AR_drawFlap(float r, float h, int nF, QColor clr)
{
    float degree = 360.0 / nF;
    glPushMatrix();
    for(int i = 0; i < nF; i++)
    {
        glPushMatrix(); // Mevcut matris durumunu kaydet

        glColor3f(clr.redF(), clr.greenF(), clr.blueF()); // Beyaz renk

        // İç yüzeyleri de görünür yap
        glLightModeli(GL_LIGHT_MODEL_TWO_SIDE, GL_TRUE);

        glRotatef(i*degree,0,1,0);
        glBegin(GL_TRIANGLES);

        glVertex3f(r,0,0);
        glVertex3f(r+h/2,0,0);
        glVertex3f(r,h,0);
        glEnd();

        glPopMatrix(); // Önceki matris durumunu geri yükle
    }
    glPopMatrix();
}

void AR_drawFire()
{
    glColor3f(1.0, 0.0, 0.0);

    // Ateşi çizmek için yamuk bir dörtgen kullanıyoruz
    glDisable(GL_LIGHTING);

    // Parçacıkları çizmek için rastgele konumlarda noktalar kullanıyoruz
    glPointSize(3.0);
    glBegin(GL_POINTS);
    // 100 adet parçacık çiz
    for (int i = 0; i < 100; i++) {
        float x = 0;
        float z = 0;
        float y = ((float)rand() / RAND_MAX) * 3.0 - 3.0;
        // Rastgele x, y ve z koordinatları
        if(y<=-1.0 && y>=-2.0)
        {
            x = ((float)rand() / RAND_MAX) * 2.5 - 1.25;
            z = ((float)rand() / RAND_MAX) * 2.5 - 1.25;
        }
        else if(y<-2.0)
        {
            glColor3f(1.0, ((float)rand() / RAND_MAX) * 0.9, 0.0);
            x = ((float)rand() / RAND_MAX) * 2.5 - 1.25;
            z = ((float)rand() / RAND_MAX) * 2.5 - 1.25;
            glVertex3f(x, y, z);
        }
        else
        {
            x = ((float)rand() / RAND_MAX) * 2.0 - 1.0;
            z = ((float)rand() / RAND_MAX) * 2.0 - 1.0;
        }

        // Parçacığın rengi (kırmızıya yakın bir ton)
        glColor3f(1.0, ((float)rand() / RAND_MAX) * 0.5, 0.0);
        // Parçacığı çiz
        glVertex3f(x, y, z);
    }
    glEnd();
    glEnable(GL_LIGHTING);
}
