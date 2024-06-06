#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix("C:/Users/MONSTER/Desktop/Masa/AZAK_LOGO.png");
    ui->azak_logo->setPixmap(pix.scaled(100,100,Qt::KeepAspectRatio));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_2_clicked()
{
    ui->label_3->setText("500");
}


void MainWindow::on_comboBox_currentIndexChanged(int index)
{
    if(index == 0)
    {
        ui->label_3->setText("9600");
    }
    else if(ui->comboBox->currentIndex() == 1)
    {
        ui->label_3->setText("115200");
    }
}


void MainWindow::on_horizontalSlider_valueChanged(int value)
{
    ui->progressBar->setValue(value);
}


void MainWindow::on_pushButton_3_clicked()
{
    QMessageBox::StandardButton reply = QMessageBox::question(this,"My Message Box","Uygulamayı kapatmak istediğinize emin misiniz?",QMessageBox::Yes | QMessageBox::No);
    if(reply == QMessageBox::Yes)
    {
        QApplication::quit();
    }
    else
    {
        qDebug("No butonuna tikladiniz.");
    }

}


void MainWindow::on_pushButton_4_clicked()
{
    QString username = ui->username->text();
    QString password = ui->password->text();

    if(username == "admin" && password == "admin")
    {
        QMessageBox::information(this,"","Başarıyla giriş yaptınız.");
    }
    else
    {
        QMessageBox::critical(this,"","Hatalı bilgi!");
    }
}


void MainWindow::on_pushButton_5_clicked()
{
    if(ui->checkBox->isChecked())
    {
        QMessageBox::information(this,"","Checkbox işaretlenmiş.");
    }
    else
    {
        QMessageBox::information(this,"","Checkbox işaretlenmemiş.");
    }
}


void MainWindow::on_checkBox_clicked()
{
    if(ui->checkBox->isChecked())
    {
        ui->checkBox->setText("kutucuğu işaretlediniz.");
    }
    else
    {
        ui->checkBox->setText("bu kutucuğu işaretleyiniz");
    }

}

