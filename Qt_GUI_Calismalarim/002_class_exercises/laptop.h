#ifndef LAPTOP_H
#define LAPTOP_H

#include <QObject>

#include <QDebug>

class Laptop : public QObject
{
    Q_OBJECT
public:
    //Constructor
    explicit Laptop(QObject *parent = nullptr , QString name = "");

    //Deconstructor
    ~Laptop();

    //Variables
    int weight;
    QString name;
    double asKilo();
    void test();

signals:
};

#endif // LAPTOP_H
