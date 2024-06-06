#include "rocketSimWidget.h"
#include "AR_drawObject.h"


rocketSimWidget::rocketSimWidget(QWidget *parent):
    QGLWidget(parent)
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
}

void rocketSimWidget::initializeGL()
{
    lightConfig(100.0f,100.0f,100.0f);

    QImage image("star.png"); // Load your image here
    QImage texture = image.convertToFormat(QImage::Format_RGBA8888); // Convert to suitable format

    glGenTextures(1, &texID);
    glBindTexture(GL_TEXTURE_2D, texID);
    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, texture.width(), texture.height(), 0, GL_RGBA, GL_UNSIGNED_BYTE, texture.constBits());
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);

    glShadeModel(GL_FLAT);


    updateGLTimer = new QTimer(this);
    connect(updateGLTimer, SIGNAL(timeout()), this, SLOT(updateGL()));
    updateGLTimer->start(10);


    /*
    AR_testChangeAngleTimer = new QTimer(this);
    connect(AR_testChangeAngleTimer, &QTimer::timeout, &AR_camControlInstance, &AR_camControl::AR_testChangeAngle);
    AR_testChangeAngleTimer->start(2);
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

    glEnable(GL_TEXTURE_2D);
    glBindTexture(GL_TEXTURE_2D, texID);

    glBegin(GL_QUADS);
    glTexCoord2f(-100, -100); glVertex3f(-100, -100, -30);
    glTexCoord2f(100, -100); glVertex3f(100, -100, -30);
    glTexCoord2f(100, 100); glVertex3f(100, 100, -30);
    glTexCoord2f(-100, 100); glVertex3f(-100, 100, -30);
    glEnd();

    glDisable(GL_TEXTURE_2D);

    glPushMatrix(); // BODY1
    {
        AR_camControlInstance.AR_updateCamPosition(&AR_camControlInstance);
        AR_camControlInstance.AR_updateRotPosition();

        AR_drawSmoothCylinder(1.0f, 22.0f, 100, "dark red"); // Roket Gövdesi
        AR_drawFlap(1.0f, 3.0f, 3, "dark grey");
        AR_drawFire();

            glPushMatrix(); // BODY2.1
            {
                glTranslatef(0.0f, 22.0f, 0.0f);
                AR_drawSmoothCone(1.0f, 3.0f, 100, "grey");
            }
            glPopMatrix();

            glPushMatrix(); // BODY2.2
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
    glClearColor(0.2, 0.2, 0.2, 1.0);

    glEnable(GL_DEPTH_TEST); // Derinlik testi etkinleştirilir

    glEnable(GL_LIGHTING); // Işıklandırmayı etkinleştir
    glEnable(GL_LIGHT0); // Birincil ışık kaynağını etkinleştir
    glShadeModel(GL_SMOOTH); // Cisimlerde smooth bi görünüm oluşturur.
    glEnable(GL_COLOR_MATERIAL); // Cisim renklerini korur
    glLightModeli(GL_LIGHT_MODEL_TWO_SIDE, GL_TRUE); // Cisimlerin iki yüzeyli olmasını sağlar

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

void rocketSimWidget::nulltestmethod()
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
        AR_camControlInstance.AR_setXRotation((AR_camControlInstance.xRotCam + 0.5f * dy)); // X ekseni dönüş açısı ayarlanır
        update();
        AR_camControlInstance.AR_setYRotation((AR_camControlInstance.yRotCam + 0.5f * dx)); // Y ekseni dönüş açısı ayarlanır
        update();
    } else if (event->buttons() & Qt::RightButton) {
        // Sağ fare tuşu basılıysa
        AR_camControlInstance.AR_setXRotation(AR_camControlInstance.xRotCam + 0.5f * dy); // X ekseni dönüş açısı ayarlanır
        update();
        AR_camControlInstance.AR_setZRotation(AR_camControlInstance.zRotCam + 0.5f * dx); // Z ekseni dönüş açısı ayarlanır
        update();
    }
    lastPos = event->pos(); // Son fare pozisyonu güncellenir
}
