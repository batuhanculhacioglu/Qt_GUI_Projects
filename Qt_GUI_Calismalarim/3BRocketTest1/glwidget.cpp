#include "glwidget.h"

GLWidget::GLWidget(QWidget *parent)
    : QGLWidget(parent),
    xRot(0),
    yRot(0),
    zRot(0) {}

void GLWidget::initializeGL() {
    // OpenGL başlangıç ayarları yapılır
    glClearColor(0.5f, 0.7f, 1.0f, 1.0f);
    glEnable(GL_DEPTH_TEST); // Derinlik testi etkinleştirilir
    glEnable(GL_CULL_FACE); // Ters yüzeyleri çizmeyi devre dışı bırakır

    time = 0;

    myTimer = new QTimer(this);
    connect(myTimer, &QTimer::timeout, this, &GLWidget::changeAngle);
    myTimer->start(10);
}

void GLWidget::resizeGL(int width, int height) {
    // Ekran boyutu değiştiğinde bu fonksiyon çağrılır ve görüntü ayarları yapılır
    glViewport(0, 0, width, height); // Görüntü alanı ayarlanır
    glMatrixMode(GL_PROJECTION); // Projeksiyon matrisi kullanılacağı belirtilir
    glLoadIdentity(); // Projeksiyon matrisi sıfırlanır
    gluPerspective(45.0, GLfloat(width) / height, 0.1, 100.0); // Perspektif projeksiyon ayarlanır
    glMatrixMode(GL_MODELVIEW); // Model görüntüleme matrisi kullanılacağı belirtilir
    glLoadIdentity(); // Model görüntüleme matrisi sıfırlanır
}

void GLWidget::paintGL() {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); // Ekran temizlenir
    glLoadIdentity(); // Model görüntüleme matrisi sıfırlanır
    gluLookAt(0, 0, 50, 0, 0, 0, 0, 10, 0); // Kamera pozisyonu ve bakış yönü ayarlanır



    // Cismin pozisyonunu ivme verilerine göre güncelle
    // İvme verilerini kullanarak pozisyonu güncelleyebilirsiniz
    // Örneğin:

    glRotatef(xRot / 16.0f, 1.0f, 0.0f, 0.0f); // X ekseni etrafında dönme
    glRotatef(yRot / 16.0f, 0.0f, 1.0f, 0.0f); // Y ekseni etrafında dönme
    glRotatef(zRot / 16.0f, 0.0f, 0.0f, 1.0f); // Z ekseni etrafında dönme

    drawCube(); // Kendi küp çizme fonksiyonunuza çağrı yapın
}

void GLWidget::mousePressEvent(QMouseEvent *event) {
    // Fare tuşuna basıldığında çağrılır
    lastPos = event->pos(); // Fare pozisyonu kaydedilir
}

void GLWidget::mouseMoveEvent(QMouseEvent *event) {
    // Fare hareket ettirildiğinde çağrılır
    int dx = event->x() - lastPos.x(); // X ekseni hareket miktarı hesaplanır
    int dy = event->y() - lastPos.y(); // Y ekseni hareket miktarı hesaplanır

    if (event->buttons() & Qt::LeftButton) {
        // Sol fare tuşu basılıysa
        setXRotation(xRot + 8 * dy); // X ekseni dönüş açısı ayarlanır
        setYRotation(yRot + 8 * dx); // Y ekseni dönüş açısı ayarlanır
    } else if (event->buttons() & Qt::RightButton) {
        // Sağ fare tuşu basılıysa
        setXRotation(xRot + 8 * dy); // X ekseni dönüş açısı ayarlanır
        setZRotation(zRot + 8 * dx); // Z ekseni dönüş açısı ayarlanır
    }

    lastPos = event->pos(); // Son fare pozisyonu güncellenir
}

void GLWidget::drawCube() {

    // Küp çizmek için OpenGL komutları kullanılır
    glBegin(GL_QUADS); // Çizim tipi belirtilir

    // Her yüzey için renk ve köşe noktaları belirtilir
    // Yüzeyler, küpün içerisine doğru bakacak şekilde sıralanır

    /* Cisimler çizilirken bakış yönüne göre sol alttan başlanarak çizilmelidir.
    glNormal3f fonksiyonu kullanılarak cisimlerin ışıklandırma yönünün
    yani görüntülenme yönünün ekrana bakan kullanıcıya doğru mu yoksa tersi
    yöne olduğumu belirlenmeye çalışılmış ama etkisi olmamıştır. Bu nedenle
    cisimlerin yönünü belirleyebilmek için başlangıç noktası önemlidir.

    Koordinat sistemi cismin merkezinde olacak şekilde ayarlanmıştır.

    Z ekseni ekrana bakan kullanıcıya doğru 1'dir.
    */

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


    glColor3f(0.5f, 0.5f, 0.5f);
    glBegin(GL_QUADS);
    // Ön yüz
    glVertex3f(50.0f, -50.0f, -50.0f);
    glVertex3f(-50.0f, -50.0f, -50.0f);
    glVertex3f(-50.0f, 50.0f, -50.0f);
    glVertex3f(50.0f, 50.0f, -50.0f);
    glEnd();

}

void GLWidget::setXRotation(int angle) {
    // X ekseni dönüş açısı ayarlanır
    normalizeAngle(&angle); // Açı değeri normalize edilir
    if (angle != xRot) {
        xRot = angle; // Yeni açı değeri atanır
        update(); // Ekran yenilenir
    }
}

void GLWidget::setYRotation(int angle) {
    // Y ekseni dönüş açısı ayarlanır
    normalizeAngle(&angle); // Açı değeri normalize edilir
    if (angle != yRot) {
        yRot = angle; // Yeni açı değeri atanır
        update(); // Ekran yenilenir
    }
}

void GLWidget::setZRotation(int angle) {
    // Z ekseni dönüş açısı ayarlanır
    normalizeAngle(&angle); // Açı değeri normalize edilir
    if (angle != zRot) {
        zRot = angle; // Yeni açı değeri atanır
        update(); // Ekran yenilenir
    }
}

void GLWidget::normalizeAngle(int *angle) {
    // Açı değeri normalize edilir
    while (*angle < 0)
        *angle += 360 * 16;
    while (*angle > 360 * 16)
        *angle -= 360 * 16;
}

void GLWidget::changeAngle()
{

    static float accz = 0;
    static float accx = 0;
    accz++;
    setZRotation(accz);
 update();

    qInfo() << accz ;
    if(accz <= -1500)
    {
        QMessageBox::information(this, " ","Sürüklenme paraşütü açıldı");
        myTimer->stop();
    }

}
