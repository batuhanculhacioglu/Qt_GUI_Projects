#ifndef GLWIDGET_H
#define GLWIDGET_H

#include <QtOpenGL/QGLWidget>
#include <QMouseEvent>
#include <GL/glu.h>

class GLWidget : public QGLWidget {
    Q_OBJECT

public:
    GLWidget(QWidget *parent = nullptr);

protected:
    void initializeGL() override;
    void resizeGL(int width, int height) override;
    void paintGL() override;
    void mousePressEvent(QMouseEvent *event) override;
    void mouseMoveEvent(QMouseEvent *event) override;

private:
    void drawCube();
    void setXRotation(int angle);
    void setYRotation(int angle);
    void setZRotation(int angle);
    void normalizeAngle(int *angle);

    int xRot;
    int yRot;
    int zRot;
    QPoint lastPos;
};

#endif
