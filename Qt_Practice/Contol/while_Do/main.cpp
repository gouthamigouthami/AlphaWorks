#include <QCoreApplication>
#include<QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    int max=100;
    int start=80;
   int i=start;
    while(i<max)
    {
       qInfo()<<"while"<<i;
        i++;
    }
    i=start;
    do
    {
        qInfo()<<"do"<<i;
        i++;
    }while(i<max);


    return a.exec();
}
