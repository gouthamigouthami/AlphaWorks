#include <QCoreApplication>
#include<QDebug>
#include "Hello.h"
template<class U>
void display( U value)
{
    qInfo()<<value;
}
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Hello<int,int>test;
    qInfo()<<" int reslu: "<<test.fun(2,3);
    qInfo()<<"single int fun res:"<<test.fun2(44);
    Hello<double,double>test1;
    qInfo()<<" double reslu: "<<test1.fun(2.89,3.6767);
    Hello<QString,QString>test2;
    qInfo()<<" string reslu: "<<test2.fun("gouthmai","chintu");
    Hello<bool,double>test3;
    qInfo()<<" bool reslu: "<<test1.fun(true,6767);
    Hello<int,bool>test4;
    qInfo()<<" bool reslu: "<<test1.fun(45,true);
    QObject obj;
    display<QObject*>(&obj);

    return a.exec();
}
