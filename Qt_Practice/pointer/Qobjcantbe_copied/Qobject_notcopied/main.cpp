#include <QCoreApplication>
#include<QDebug>

void testPtr(QObject* object)
{
    qInfo()<<object<<Q_FUNC_INFO;
}
QObject* getPtr()
{
    QObject *o=new QObject;
    return o;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QObject* p=getPtr();
    testPtr(p);
    return a.exec();
}
