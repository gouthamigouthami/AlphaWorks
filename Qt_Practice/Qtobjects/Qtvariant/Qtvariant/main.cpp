#include <QCoreApplication>
#include<QVariant>
QVariant fun(QVariant value)
{
    qInfo()<<value;
    return value ;
}
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QVariant value1=34;
    QVariant value2="hello world";
    qInfo()<<fun(value1);
    qInfo()<< fun(value2);

    return a.exec();
}
