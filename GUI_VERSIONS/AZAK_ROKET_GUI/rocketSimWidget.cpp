#include "rocketSimWidget.h"
#include "AR_drawObject.h"


std::vector<std::vector<float>> starPositions;

rocketSimWidget::rocketSimWidget(QWidget *parent):
    QGLWidget(parent)
{
    /*
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
*/

}

void rocketSimWidget::initializeGL()
{
    glClearColor(0.2, 0.2, 0.2, 1.0);

    glEnable(GL_DEPTH_TEST); // Derinlik testi etkinleştirilir

    glEnable(GL_LIGHTING); // Işıklandırmayı etkinleştir
    glEnable(GL_LIGHT0); // Birincil ışık kaynağını etkinleştir
    glShadeModel(GL_SMOOTH); // Cisimlerde smooth bi görünüm oluşturur.
    glEnable(GL_COLOR_MATERIAL); // Cisim renklerini korur
    glLightModeli(GL_LIGHT_MODEL_TWO_SIDE, GL_TRUE); // Cisimlerin iki yüzeyli olmasını sağlar

    lightConfig(100.0f,100.0f,100.0f);


    myTimer = new QTimer(this);
    connect(myTimer, SIGNAL(timeout()), this, SLOT(updateGL()));
    myTimer->start(10);


    /*
    myTimer2 = new QTimer(this);
    connect(myTimer2, &QTimer::timeout, this, &rocketSimWidget::changeAngle);
    myTimer2->start(2);
    */

}

void rocketSimWidget::resizeGL(int w, int h)
{
    glViewport(0, 0, w, h); // Görüntü alanı ayarlanır
    glMatrixMode(GL_PROJECTION); // Projeksiyon matrisi kullanılacağı belirtilir
    glLoadIdentity(); // Projeksiyon matrisi sıfırlanır
    gluPerspective(45.0, GLfloat(w) / h, 0.1, 200.0); // Perspektif projeksiyon ayarlanır, 200 birim uzaklıkta ki nesneler görünür.
    glMatrixMode(GL_MODELVIEW); // Model görüntüleme matrisi kullanılacağı belirtilir
}

void rocketSimWidget::paintGL()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); // Ekran temizlenir

    glLoadIdentity();
    gluLookAt(0,0,70, 0,0,0, 0,1,0);

    glPushMatrix();
    {
        qInfo() << "y" << arCamControlInstance.y;
        arCamControlInstance.x = (float)arCamControlInstance.xRot;
        arCamControlInstance.y = (float)arCamControlInstance.yRot;
        arCamControlInstance.z = (float)arCamControlInstance.zRot;
        arCamControlInstance.normalizeAngle(&arCamControlInstance.x);
        arCamControlInstance.normalizeAngle(&arCamControlInstance.y);
        arCamControlInstance.normalizeAngle(&arCamControlInstance.z);

        glRotatef(arCamControlInstance.x + arCamControlInstance.xRotCam, 1.0f, 0.0, 0.0f);
        glRotatef(arCamControlInstance.z + arCamControlInstance.zRotCam, 0.0f, 0.0f, -1.0f);
        glRotatef(arCamControlInstance.y + arCamControlInstance.yRotCam, 0.0f, 1.0f, 0.0f);
        /*
        x = (float)xRot;
        y = (float)yRot;
        z = (float)zRot;
        normalizeAngle(&x);
        normalizeAngle(&y);
        normalizeAngle(&z);

        glRotatef(x + xRotCam, 1.0f, 0.0, 0.0f);
        glRotatef(z + zRotCam, 0.0f, 0.0f, -1.0f);
        glRotatef(y + yRotCam, 0.0f, 1.0f, 0.0f);
*/

        AR_drawSmoothCylinder(1.0f, 22.0f, 100, "dark red"); // Gövde
        AR_drawFlap(1.0f, 3.0f, 3, "dark green");
        AR_drawFire();

            glPushMatrix();
            {
                glTranslatef(0.0f, 22.0f, 0.0f);
                AR_drawSmoothCone(1.0f, 3.0f, 100, "dark green");
            }
            glPopMatrix();

            glPushMatrix();
            {
            glTranslatef(0.0f, -0.5f, 0.0f);
            AR_drawSmoothCylinder(0.7f, 0.5f, 100, "dark grey"); // Motor
            }
            glPopMatrix();
    }
    glPopMatrix();
}

void rocketSimWidget::lightConfig(float x, float y, float z)
{
    GLfloat light_position[] = {x, y, z, 1.0f}; // Işık kaynağının konumu
    GLfloat light_ambient[] = {0.2f, 0.2f, 0.2f, 1.0f}; // Işık kaynağının ambiyans rengi
    GLfloat light_diffuse[] = {1.0f, 1.0f, 1.0f, 1.0f}; // Işık kaynağının difüzyon rengi
    GLfloat light_specular[] = {1.0f, 1.0f, 1.0f, 1.0f}; // Işık kaynağının yansıma rengi

    glLightfv(GL_LIGHT0, GL_POSITION, light_position); // Işık konumunu ayarla
    glLightfv(GL_LIGHT0, GL_AMBIENT, light_ambient); // Işık ambiyansını ayarla
    glLightfv(GL_LIGHT0, GL_DIFFUSE, light_diffuse); // Işık difüzyonunu ayarla
    glLightfv(GL_LIGHT0, GL_SPECULAR, light_specular); // Işık yansımasını ayarla

    // Malzeme özelliklerini ayarla
    GLfloat material_ambient[] = {0.2f, 0.2f, 0.2f, 1.0f}; // Malzeme ambiyans rengi
    GLfloat material_diffuse[] = {0.8f, 0.8f, 0.8f, 1.0f}; // Malzeme difüzyon rengi
    GLfloat material_specular[] = {1.0f, 1.0f, 1.0f, 1.0f}; // Malzeme yansıma rengi
    GLfloat material_shininess[] = {100.0f}; // Malzeme parlaklığı

    glMaterialfv(GL_FRONT, GL_AMBIENT, material_ambient); // Malzeme ambiyansını ayarla
    glMaterialfv(GL_FRONT, GL_DIFFUSE, material_diffuse); // Malzeme difüzyonunu ayarla
    glMaterialfv(GL_FRONT, GL_SPECULAR, material_specular); // Malzeme yansımasını ayarla
    glMaterialfv(GL_FRONT, GL_SHININESS, material_shininess);
}

void rocketSimWidget::nulltestmethot()
{

}

void rocketSimWidget::mousePressEvent(QMouseEvent *event) {
    // Fare tuşuna basıldığında çağrılır
    lastPos = event->pos(); // Fare pozisyonu kaydedilir
}

void rocketSimWidget::mouseMoveEvent(QMouseEvent *event) {
    // Fare hareket ettirildiğinde çağrılır
    float dx = event->x() - lastPos.x(); // X ekseni hareket miktarı hesaplanır
    float dy = event->y() - lastPos.y(); // Y ekseni hareket miktarı hesaplanır

    if (event->buttons() & Qt::LeftButton) {
        // Sol fare tuşu basılıysa
        arCamControlInstance.setXRotation((arCamControlInstance.xRotCam + 0.5f * dy)); // X ekseni dönüş açısı ayarlanır
        arCamControlInstance.setYRotation((arCamControlInstance.yRotCam + 0.5f * dx)); // Y ekseni dönüş açısı ayarlanır
    } else if (event->buttons() & Qt::RightButton) {
        // Sağ fare tuşu basılıysa
        arCamControlInstance.setXRotation(arCamControlInstance.xRotCam + 0.5f * dy); // X ekseni dönüş açısı ayarlanır
        arCamControlInstance.setZRotation(arCamControlInstance.zRotCam + 0.5f * dx); // Z ekseni dönüş açısı ayarlanır
    }
    lastPos = event->pos(); // Son fare pozisyonu güncellenir
}
/*
void rocketSimWidget::setXRotation(float angle) {
    // X ekseni dönüş açısı ayarlanır
    normalizeAngle(&angle); // Açı değeri normalize edilir
    if (angle != xRotCam) {
        xRotCam = angle; // Yeni açı değeri atanır
        update(); // Ekran yenilenir
    }
}

void rocketSimWidget::setYRotation(float angle) {
    // Y ekseni dönüş açısı ayarlanır
    normalizeAngle(&angle); // Açı değeri normalize edilir
    if (angle != yRotCam) {
        yRotCam = angle; // Yeni açı değeri atanır
        update(); // Ekran yenilenir
    }
}

void rocketSimWidget::setZRotation(float angle) {
    // Z ekseni dönüş açısı ayarlanır
    normalizeAngle(&angle); // Açı değeri normalize edilir
    if (angle != zRotCam) {
        zRotCam = angle; // Yeni açı değeri atanır
        update(); // Ekran yenilenir
    }
}

void rocketSimWidget::normalizeAngle(float *angle) {
    // Açı değeri normalize edilir
    while (*angle < 0.0f)
        *angle += 360.0f;
    while (*angle > 360.0f)
        *angle -= 360.0f;
}

void rocketSimWidget::changeAngle()
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

    update();

}
*/
