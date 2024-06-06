#ifndef ANIMAL_H
#define ANIMAL_H

#include <QObject>

class Animal : public QObject
{
    Q_OBJECT
public:
    explicit Animal(QObject *parent = nullptr);

    void speak(QString text);
    bool isAlive()
    {
        return true;
    }

signals:
};

#endif // ANIMAL_H
