#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include <QGLWidget>
#include <GL/glu.h>
#include <QTimer>
#include <QMouseEvent>
#include <QLabel>
#include <QDebug>
#include <qvector3d.h>
#include <fstream>
#include <math.h>
#include <vector>
#include <GL/glext.h>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
