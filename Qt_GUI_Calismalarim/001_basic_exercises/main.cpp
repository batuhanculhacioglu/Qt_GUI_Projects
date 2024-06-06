#include <QCoreApplication>

#include <QDebug>

#include <array>

#include <iostream>

using namespace std; //methodların başına std'yi otomatik olarak ekler.

/*  (1)Aynı isim ile birden fazla fonksiyon oluşturma (test(), test(QString name), test(int age), test(bool isActive))
void test()
{
    qInfo()<<"This is a test.";
}

void test(QString name)
{
    qInfo()<<"The name is "<<name;
}

void test(int age)
{
    qInfo()<<"The age is "<<age;
}

void test(bool isActive)
{
    if(isActive)
    {
        qInfo()<<"Yes, it is active.";
    }
    else
    {
        qInfo()<<"No, it is not active";
    }
}
*/

/*  (2)Call by reference yöntemi (pointerlara benzer)
void callByReference(int &x)
{
    x = x + 5;
}
*/

/*  (3)Struct içerisinde fonksiyonların kullanılması
struct product{
    int weight;

    double asKilograms(double value)
    {
        return value * 0.0453592;
    }
};
*/

/*  (4)QObject ile methot içerisinde ptr kullanarak obje oluşturma.

//  Bu şekilde bir obje geri döndürülemiyor. Çünkü obje fonksiyon sonunda siliniyor.
QObject get_object(QString name)
{
    QObject x;
    x.setObjectName(name);
    return x;
}

//  Bu şekilde bir obje geri döndürülemiyor. Nedeni araştırılacak.
QObject &get_ref(QString name)
{
    QObject x;
    x.setObjectName(name);
    return x;
}

//  Method içerisinde obje ptr olarak oluşturuluyor ve method sonunda bu obje adresi döndürülüyor.
QObject *get_ptr(QString name)
{
    QObject *x = new QObject();
    x->setObjectName(name);
    return x;
}
*/

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    /*  Qt Consol ekranına hello world yazdıran method
    qInfo() << "Hello World!"; //Bu method terminal ekranına yazar.
    */

    /*  Boolean sizeları hakkında çalışma
    bool isOn = false;         //Boolean türünde bir değişken tanımlanmıştır.
    qInfo() << "Size of isOn : "<< sizeof(isOn); //isOn değişkeninin boyutunu ekrana yazar.
    */

    /*  ARRAY sizeları hakkında çalışma
    int array[4] = {23,12,13,15};
    qInfo() << "size of array : "<< sizeof(array); //4 adet int değer barındıran dizinin boyutu 16 bytetır.
    */

    /*  ENUM VE STRUCT hakkında çalışma
    enum colors{
        red,
        blue,
        green
    };

    struct product{
        int id;
        float weight;
        colors color;
    };

    product laptop;
    laptop.id = 13;
    laptop.weight = 3.5;
    laptop.color = colors::green; //colors enumının içerisinde ki green değerini getirir.
    laptop.color = blue; //colors::green ile aynı işlevi görmektedir.
    qInfo()<<"Laptop id : "<<laptop.id;
    qInfo()<<"Laptop weight : "<<laptop.weight;
    qInfo()<<"Laptop color : "<<laptop.color;
    */

    /*  ARRAY lib kullanarak array oluşturma (array<int,3> cars;)
    array<int,3> cars;
    cars[0] = 8;
    cars[1] = 65;
    cars[2] = 12;
    for(int i=0; i<3; i++)
        qInfo()<<i+1<<". Car number :"<<cars[i];
    qInfo()<<"Size array cars : "<<cars.size(); //Output is 3
    qInfo()<<"Size array cars 2 :"<<sizeof(cars); //Output is 12
    */

    /*  using namespace std kullanılma amacının örneği (std::)
    std::cout<<"Hello World!";
    cout<<"Hello World!";
    */

    /*  Klavyeden input alma (cin>>)
    int age=0;
    qInfo() << "Bir sayi giriniz : "
    cin>>age;
    qInfo() << "Girdiginiz sayi : " << age;
    */

    /*  Error çıktısını consol ekranına yazdırma (cerr<<)
    cerr<<"Bir hata olustu!";
    */

    /*  Qt Consol çıktısı alma methodları
    qInfo()<< "Information";
    qDebug()<< "Debug";
    qWarning()<< "Warning";
    qCritical()<< "Critical";
    qFatal()<< "Fatal"; // Fatal methodu programı sonlandırır. Bu methoddan sonra herhangi bir işlem gerçekleştirilemez.
    */

    /*  Ternary -> if else "?" yapisi (x>10 ? true:false;)
    int x=0;
    x=13;
    x > 10 ? qInfo()<<"Sayi 10'dan buyuktur.": qInfo()<<"Sayi 10'dan kucuktur.";
    */

    /*  Switch Case yapısı
    int x;
    qInfo()<<"1 ile 3 arasinda bir deger giriniz : ";
    cin>>x;
    switch (x)
    {
    case 1:
        qInfo()<<"Girdiginiz sayi : 1";
        break;
    case 2:
        qInfo()<<"Girdiginiz sayi : 2";
        break;
    case 3:
        qInfo()<<"Girdiginiz sayi : 3";
        break;
    default:
        qInfo()<<"1 ile 3 arasinda bir sayi girmediniz!";
        break;
    }
    */

    /*  array<int, değişken sayısı> değişken adı = {değişken değerleri} ve değişken adi.size() kullanımı örneği
    array<int,5> x = {13,18,26,11,58};
    for(int i=0; i<x.size(); i++)
    {
        qInfo()<<"x degeri : "<<x[i];
    }
    */

    /*  (1)Aynı isim ile birden fazla fonksiyon oluşturma (test(), test(QString name), test(int age), test(bool isActive))
    test();

    //  QString tanımlamanın iki yolu vardır.
    //  Yol 1:
    QString name;
    name = "QString tanimlama 1. yolu";
    test(name);
    //  Yol 2:
    test(QString("QString tanimlama 2. yolu"));
    //  Hatalı Kullanım
    //test("Batuhan"); // Bu tip bir QString verisi gönderiminde bool değişken gibi algılanıp hatalı çıktı oluşuyor.

    test(26);
    test(false);
    */

    /*  (2)Call by reference yöntemi (pointerlara benzer)
    int x = 3;
    qInfo()<<"x'in degeri : "<<x;
    callByReference(x);
    qInfo()<<"x'in yeni degeri : "<<x;
    */

    /*  (3)Struct içerisinde fonksiyonların kullanılması
    product notebook;
    notebook.weight = 5;
    qInfo()<<"Pounds : "<<notebook.weight;
    qInfo()<<"Kilograms : "<<notebook.asKilograms(notebook.weight);
    */

    /*  (4)QObject ile methot içerisinde ptr kullanarak obje oluşturma.
    QObject *y = get_ptr("ByPtr");
    qInfo()<<y->objectName();
    */

    /*  Pointer olusturma ve silme işlemleri (int *ptr = new int , delete ptr)
    int *ptr = new int;
    *ptr = 13;
    qInfo()<<"Olusturulan pointer degeri : "<<*ptr;
    qInfo()<<"Olusturulan pointer adresi : "<<ptr;
    delete ptr;
    */

    return a.exec();
}
