/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *pushButton_3;
    QGroupBox *groupBox;
    QPushButton *pushButton_4;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_6;
    QLineEdit *username;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_7;
    QLineEdit *password;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QProgressBar *progressBar;
    QSlider *horizontalSlider;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout;
    QProgressBar *progressBar_2;
    QSlider *horizontalSlider_2;
    QWidget *layoutWidget3;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *comboBox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *azak_logo;
    QLabel *label_8;
    QWidget *widget;
    QVBoxLayout *verticalLayout_5;
    QCheckBox *checkBox;
    QPushButton *pushButton_5;
    QMenuBar *menubar;
    QMenu *menuAna_men;
    QMenu *menuSe_enkler;
    QMenu *menuHakk_nda;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 588);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(680, 520, 75, 24));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(590, 520, 75, 24));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(190, 0, 91, 16));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(320, 0, 91, 16));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(494, 520, 81, 24));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(30, 80, 241, 111));
        pushButton_4 = new QPushButton(groupBox);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(150, 80, 75, 24));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 20, 221, 56));
        verticalLayout_4 = new QVBoxLayout(layoutWidget);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_3->addWidget(label_6);

        username = new QLineEdit(layoutWidget);
        username->setObjectName(QString::fromUtf8("username"));

        horizontalLayout_3->addWidget(username);


        verticalLayout_4->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_4->addWidget(label_7);

        password = new QLineEdit(layoutWidget);
        password->setObjectName(QString::fromUtf8("password"));

        horizontalLayout_4->addWidget(password);


        verticalLayout_4->addLayout(horizontalLayout_4);

        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(180, 20, 110, 54));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        progressBar = new QProgressBar(layoutWidget1);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setValue(24);

        verticalLayout_2->addWidget(progressBar);

        horizontalSlider = new QSlider(layoutWidget1);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setOrientation(Qt::Horizontal);

        verticalLayout_2->addWidget(horizontalSlider);

        layoutWidget2 = new QWidget(centralwidget);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(310, 20, 110, 54));
        verticalLayout = new QVBoxLayout(layoutWidget2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        progressBar_2 = new QProgressBar(layoutWidget2);
        progressBar_2->setObjectName(QString::fromUtf8("progressBar_2"));
        progressBar_2->setValue(24);

        verticalLayout->addWidget(progressBar_2);

        horizontalSlider_2 = new QSlider(layoutWidget2);
        horizontalSlider_2->setObjectName(QString::fromUtf8("horizontalSlider_2"));
        horizontalSlider_2->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(horizontalSlider_2);

        layoutWidget3 = new QWidget(centralwidget);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(30, 20, 129, 50));
        verticalLayout_3 = new QVBoxLayout(layoutWidget3);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(layoutWidget3);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setBold(true);
        label->setFont(font);

        horizontalLayout->addWidget(label);

        comboBox = new QComboBox(layoutWidget3);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        horizontalLayout->addWidget(comboBox);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(layoutWidget3);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        label_3 = new QLabel(layoutWidget3);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);


        verticalLayout_3->addLayout(horizontalLayout_2);

        azak_logo = new QLabel(centralwidget);
        azak_logo->setObjectName(QString::fromUtf8("azak_logo"));
        azak_logo->setGeometry(QRect(660, 10, 121, 111));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(40, 200, 171, 21));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(40, 230, 171, 52));
        verticalLayout_5 = new QVBoxLayout(widget);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        checkBox = new QCheckBox(widget);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        verticalLayout_5->addWidget(checkBox);

        pushButton_5 = new QPushButton(widget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        verticalLayout_5->addWidget(pushButton_5);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        menuAna_men = new QMenu(menubar);
        menuAna_men->setObjectName(QString::fromUtf8("menuAna_men"));
        menuSe_enkler = new QMenu(menubar);
        menuSe_enkler->setObjectName(QString::fromUtf8("menuSe_enkler"));
        menuHakk_nda = new QMenu(menubar);
        menuHakk_nda->setObjectName(QString::fromUtf8("menuHakk_nda"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuAna_men->menuAction());
        menubar->addAction(menuSe_enkler->menuAction());
        menubar->addAction(menuHakk_nda->menuAction());

        retranslateUi(MainWindow);
        QObject::connect(pushButton, SIGNAL(clicked()), MainWindow, SLOT(close()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), MainWindow, SLOT(update()));
        QObject::connect(horizontalSlider_2, SIGNAL(valueChanged(int)), progressBar_2, SLOT(setValue(int)));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Close", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Next", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Yazilimsal olarak", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Design k\304\261sm\304\261ndan", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Message Box", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "SignIn", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Username", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Password ", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Baud Rate", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("MainWindow", "9600", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("MainWindow", "115200", nullptr));

        label_2->setText(QCoreApplication::translate("MainWindow", "Se\303\247ilen deger : ", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "9600", nullptr));
        azak_logo->setText(QCoreApplication::translate("MainWindow", "LOGO", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "<div style=\"background-color:#ff0000;\">K\304\261rm\304\261z\304\261 Arkaplanda Yaz\304\261 HTML</div>", nullptr));
        checkBox->setText(QCoreApplication::translate("MainWindow", "CheckBox", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "Check Kontrol", nullptr));
        menuAna_men->setTitle(QCoreApplication::translate("MainWindow", "Ana men\303\274", nullptr));
        menuSe_enkler->setTitle(QCoreApplication::translate("MainWindow", "Se\303\247enkler", nullptr));
        menuHakk_nda->setTitle(QCoreApplication::translate("MainWindow", "Hakk\304\261nda", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
