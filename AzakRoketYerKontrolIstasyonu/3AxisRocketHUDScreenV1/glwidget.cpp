#include "glwidget.h"

GLWidget::GLWidget(QWidget *parent):
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
    turnValue = 0;

}

void GLWidget::initializeGL()
{
    glClearColor(0.2, 0.2, 0.2, 1.0);

    glEnable(GL_DEPTH_TEST); // Derinlik testi etkinleştirilir

    glEnable(GL_LIGHTING); // Işıklandırmayı etkinleştir
    glEnable(GL_LIGHT0); // Birincil ışık kaynağını etkinleştir

    // Işık özelliklerini ayarla
    GLfloat light_position[] = {100.0f, 100.0f, 100.0f, 0.0f}; // Işık kaynağının konumu
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

    time = 0;
    myTimer = new QTimer(this);
    //connect(myTimer, SIGNAL(timeout()), this, SLOT(updateGL()));
    connect(myTimer, &QTimer::timeout, this, &GLWidget::changeAngle);
    myTimer->start(10);


}
void GLWidget::paintGL()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); // Ekran temizlenir
    glLoadIdentity();
    gluLookAt(0,0,70, 0,0,0, 0,1,0);
    draw3AxisLine();
    //drawCube();
    x = (float)xRot;
    y = (float)yRot;
    z = (float)zRot;
    normalizeAngle(&x);
    normalizeAngle(&y);
    normalizeAngle(&z);

    glRotatef(xRotCam, 1.0, 0.0, 0.0);
    glRotatef(zRotCam, 0.0, 0.0, -1.0);
    glRotatef(yRotCam, 0.0, 1.0, 0.0);

    glRotatef(x, 1.0, 0.0, 0.0);
    glRotatef(z, 0.0, 0.0, -1.0);
    glRotatef(y, 0.0, 1.0, 0.0);


    drawSmoothCone(1.0f, 2.0f, 100, 22.0f);
    drawSmoothCylinder(1.0f,22,100);
    drawFlap(3,3);


}
void GLWidget::resizeGL(int w, int h)
{
    glViewport(0, 0, w, h); // Görüntü alanı ayarlanır
    glMatrixMode(GL_PROJECTION); // Projeksiyon matrisi kullanılacağı belirtilir
    glLoadIdentity(); // Projeksiyon matrisi sıfırlanır
    gluPerspective(45.0, GLfloat(w) / h, 0.1, 100.0); // Perspektif projeksiyon ayarlanır
    glMatrixMode(GL_MODELVIEW); // Model görüntüleme matrisi kullanılacağı belirtilir
    glLoadIdentity(); // Model görüntüleme matrisi sıfırlanır
}

void GLWidget::draw3AxisLine()
{
    glPushMatrix();

    glBegin(GL_LINES);

    //Axis X
    glColor3f(1.0, 0.0, 0.0); //Kırmızı
    glVertex3d(-200.0, 0.0, 0.0);
    glVertex3d(200.0, 0.0, 0.0);

    //Axis Y
    glColor3f(0.0, 1.0, 0.0); //Yeşil
    glVertex3d(0.0, -200.0, 0.0);
    glVertex3d(0.0, 200.0, 0.0);

    //Axis Z
    glColor3f(0.0, 0.0, 1.0); //Mavi
    glVertex3d(0.0, 0.0, -200.0);
    glVertex3d(0.0, 0.0, 200.0);

    glEnd();

    glPopMatrix();
}

void GLWidget::drawCube()
{
    //glTranslatef(1, 1, 1); // Cismi girilen değer kadar öteler.

    glPushMatrix();

    glRotatef(x, 1.0, 0.0, 0.0);
    glRotatef(y, 0.0, 1.0, 0.0);
    glRotatef(z, 0.0, 0.0, -1.0);
    for(int i=0 ; i< 5; i++)
    glRotatef(z, 0.0, 1.0, 0.0);
    glBegin(GL_QUADS);
    // Ön yüzey (z = 1)
    glColor3f(1.0f, 0.0f, 0.0f); // Kırmızı renk
    glVertex3f(-1.0f, -1.0f, 1.0f);
    glVertex3f(1.0f, -1.0f, 1.0f);
    glVertex3f(1.0f, 20.0f, 1.0f);
    glVertex3f(-1.0f, 20.0f, 1.0f);

    // Üst yüzey (y = 1)
    glColor3f(0.0f, 20.0f, 0.0f); // Yeşil renk
    glVertex3f(1.0f, 20.0f, -1.0f);
    glVertex3f(-1.0f, 20.0f, -1.0f);
    glVertex3f(-1.0f, 20.0f, 1.0f);
    glVertex3f(1.0f, 20.0f, 1.0f);

    // Arka yüzey (z = -1)
    glColor3f(0.0f, 0.0f, 1.0f); // Mavi renk
    glVertex3f(1.0f, -1.0f, -1.0f);
    glVertex3f(-1.0f, -1.0f, -1.0f);
    glVertex3f(-1.0f, 20.0f, -1.0f);
    glVertex3f(1.0f, 20.0f, -1.0f);

    // Alt yüzey (y = -1)
    glColor3f(1.0f, 1.0f, 0.0f); // Sarı renk
    glVertex3f(-1.0f, -1.0f, -1.0f);
    glVertex3f(1.0f, -1.0f, -1.0f);
    glVertex3f(1.0f, -1.0f, 1.0f);
    glVertex3f(-1.0f, -1.0f, 1.0f);

    // Sol yüzey (x = -1)
    glColor3f(1.0f, 0.0f, 1.0f); // Pembe renk
    glVertex3f(-1.0f, -1.0f, -1.0f);
    glVertex3f(-1.0f, -1.0f, 1.0f);
    glVertex3f(-1.0f, 20.0f, 1.0f);
    glVertex3f(-1.0f, 20.0f, -1.0f);

    // Sağ yüzey (x = 1)
    glColor3f(0.0f, 1.0f, 1.0f); // Camgöbeği renk
    glVertex3f(1.0f, -1.0f, 1.0f);
    glVertex3f(1.0f, -1.0f, -1.0f);
    glVertex3f(1.0f, 20.0f, -1.0f);
    glVertex3f(1.0f, 20.0f, 1.0f);

    glEnd(); // Çizim bitirilir

    glPopMatrix();
}

void GLWidget::drawSmoothCone(float radius //taban çapı
                              , float height //h
                              , int numSegments //
                              , float centralY
                              ) {
    glPushMatrix();
    glRotatef(90,-1,0,0);
    glTranslatef(0.0f, 0.0f, centralY);
    GLUquadric *quadric = gluNewQuadric();
    glLightModeli(GL_LIGHT_MODEL_TWO_SIDE, GL_TRUE);
    gluQuadricNormals(quadric, GLU_SMOOTH);
    gluQuadricTexture(quadric, GL_TRUE);
    gluQuadricOrientation(quadric, GLU_OUTSIDE);
    glColor3f(1.0f, 1.0f, 1.0f); // Beyaz renk

    gluCylinder(quadric, radius, 0.0f, height, numSegments, 1); // Koninin yan yüzeylerini çiz
    gluDisk(quadric, 0.0, radius, numSegments, 1);
    gluDeleteQuadric(quadric);
    glPopMatrix();
}
void GLWidget::drawCylinder(float radius, float height, int numSegments)
{

    glBegin(GL_TRIANGLE_STRIP);

    // Taban noktaları
    for (int i = 0; i <= numSegments; ++i) {
        float angle = i * 2.0f * M_PI / numSegments;
        float x = radius * cos(angle);
        float z = radius * sin(angle);
        glVertex3f(x, 0.0f, z);
    }

    glEnd();

    glBegin(GL_TRIANGLE_STRIP);

    // Tepe noktaları
    for (int i = 0; i <= numSegments; ++i) {
        float angle = i * 2.0f * M_PI / numSegments;
        float x = radius * cos(angle);
        float z = radius * sin(angle);
        glVertex3f(x, height, z);
    }

    glEnd();

    // Yan yüzeylerin çizilmesi
    glBegin(GL_QUAD_STRIP);

    for (int i = 0; i <= numSegments; ++i) {
        float angle = i * 2.0f * M_PI / numSegments;
        float x = radius * cos(angle);
        float z = radius * sin(angle);
        glVertex3f(x, 0.0f, z);  // Taban noktası
        glVertex3f(x, height, z);  // Tepe noktası
    }

    glEnd();
}

void GLWidget::drawSmoothCylinder(float radius, float height, int numSegments)
{


    glPushMatrix(); // Mevcut matris durumunu kaydet
    glRotatef(90,-1,0,0);
    glTranslatef(0.0f, 0.0f, 0.0f);
    GLUquadric *quadric = gluNewQuadric();
    gluQuadricNormals(quadric, GLU_SMOOTH);
    gluQuadricTexture(quadric, GL_TRUE);

    glColor3f(1.0f, 1.0f, 1.0f); // Beyaz renk

    // İç yüzeyleri de görünür yap
    glLightModeli(GL_LIGHT_MODEL_TWO_SIDE, GL_TRUE);

    gluQuadricOrientation(quadric, GLU_OUTSIDE); // Silindiri dışa doğru çiz
    gluCylinder(quadric, radius, radius, height, numSegments, 1); // Silindiri çiz

    gluQuadricOrientation(quadric, GLU_INSIDE); // Silindiri içe doğru çiz
    gluPartialDisk(quadric, 0.0, radius, numSegments, 1, 0.0, 360.0); // Silindirin tabanına daire çiz
    glTranslatef(0.0f, 0.0f, height); // Silindiri yüksekliği kadar yukarı taşı
    gluPartialDisk(quadric, 0.0, radius, numSegments, 1, 0.0, 360.0); // Silindirin üst yüzeyine daire çiz

    gluDeleteQuadric(quadric);
    glPopMatrix(); // Önceki matris durumunu geri yükle
}

void GLWidget::drawFlap(float h, int numberFlap)
{
    float degree = 360.0 / numberFlap;

    for(int i = 0; i < numberFlap; i++)
    {
        glPushMatrix(); // Mevcut matris durumunu kaydet

        glColor3f(1.0f, 1.0f, 1.0f); // Beyaz renk

        // İç yüzeyleri de görünür yap
        glLightModeli(GL_LIGHT_MODEL_TWO_SIDE, GL_TRUE);

        glRotatef(i*degree,0,1,0);
        glBegin(GL_TRIANGLES);

        glVertex3f(1,0,0);
        glVertex3f(1+h/2,0,0);
        glVertex3f(1,h,0);
        glEnd();

        glPopMatrix(); // Önceki matris durumunu geri yükle
    }
}

void GLWidget::mousePressEvent(QMouseEvent *event) {
    // Fare tuşuna basıldığında çağrılır
    lastPos = event->pos(); // Fare pozisyonu kaydedilir
}

void GLWidget::mouseMoveEvent(QMouseEvent *event) {
    // Fare hareket ettirildiğinde çağrılır
    float dx = event->x() - lastPos.x(); // X ekseni hareket miktarı hesaplanır
    float dy = event->y() - lastPos.y(); // Y ekseni hareket miktarı hesaplanır

    if (event->buttons() & Qt::LeftButton) {
        // Sol fare tuşu basılıysa
        setXRotation((xRotCam + 0.5f * dy)); // X ekseni dönüş açısı ayarlanır
        setYRotation((yRotCam + 0.5f * dx)); // Y ekseni dönüş açısı ayarlanır
    } else if (event->buttons() & Qt::RightButton) {
        // Sağ fare tuşu basılıysa
        setXRotation(xRotCam + 0.5f * dy); // X ekseni dönüş açısı ayarlanır
        setZRotation(zRotCam + 0.5f * dx); // Z ekseni dönüş açısı ayarlanır
    }
    lastPos = event->pos(); // Son fare pozisyonu güncellenir
}

void GLWidget::setXRotation(float angle) {
    // X ekseni dönüş açısı ayarlanır
    normalizeAngle(&angle); // Açı değeri normalize edilir
    if (angle != xRotCam) {
        xRotCam = angle; // Yeni açı değeri atanır
        update(); // Ekran yenilenir
    }
}

void GLWidget::setYRotation(float angle) {
    // Y ekseni dönüş açısı ayarlanır
    normalizeAngle(&angle); // Açı değeri normalize edilir
    if (angle != yRotCam) {
        yRotCam = angle; // Yeni açı değeri atanır
        update(); // Ekran yenilenir
    }
}

void GLWidget::setZRotation(float angle) {
    // Z ekseni dönüş açısı ayarlanır
    normalizeAngle(&angle); // Açı değeri normalize edilir
    if (angle != zRotCam) {
        zRotCam = angle; // Yeni açı değeri atanır
        update(); // Ekran yenilenir
    }
}

void GLWidget::normalizeAngle(float *angle) {
    // Açı değeri normalize edilir
    while (*angle < 0.0f)
        *angle += 360.0f;
    while (*angle > 360.0f)
        *angle -= 360.0f;
}

void GLWidget::changeAngle()
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
        yRot = i;
        zRot = i;
    }
    else
    {

    }

    update();

}

void GLWidget::changeCam()
{

    update();

}
