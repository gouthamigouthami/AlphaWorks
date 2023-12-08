#include <QCoreApplication>
#include<QDebug>
#include "animal.h"
#include "test.h"
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    //qInfo()<<"hello World!!";
    Test *parent=new Test(&a);
     parent->dog=new Animal(parent);
    delete(parent);

    return a.exec();
}
