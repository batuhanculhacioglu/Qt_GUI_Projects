#include "laptop.h"

Laptop::Laptop(QObject *parent, QString name)
    : QObject{parent}
{
    this -> name = name;
    qInfo()<< this << "Constructor" << name;
}

Laptop::~Laptop()
{
    qInfo() << this << "Deconstructor" << name;
}

double Laptop::asKilo()
{
    return weight * 0.0453592;
}

void Laptop::test()
{
    qInfo() << this << "Test : " << name << " Kilo : " << asKilo();
}
