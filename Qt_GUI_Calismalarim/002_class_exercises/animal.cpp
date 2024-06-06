#include "animal.h"
#include <QDebug>

Animal::Animal(QObject *parent) : QObject{parent}
{
    qInfo() << "You are created -> " << this;
}

void Animal::speak(QString text)
{
    qInfo() << this << text;
}
