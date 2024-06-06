#include <QCoreApplication>

#include "animal.h"
#include "laptop.h"

void test(Laptop &machine)
{
    machine.test();
}

void makeLaptops()
{
    Laptop mine(nullptr, "my laptop");
    Laptop yours(nullptr, "your laptop");

    mine.weight = 3;
    yours.weight = 5;

    test(mine);
    test(yours);
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    /* Animal lib çalışmalar
    Animal cat;
    Animal dog;
    Animal fish;

    cat.setObjectName("Kitty");
    dog.setObjectName("Fido");
    fish.setObjectName("FishStick");

    cat.speak("meow");
    dog.speak("haw");
    fish.speak("blablabla");
    */

    makeLaptops();


    return a.exec();
}
