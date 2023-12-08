#include <QCoreApplication>
#include<QDebug>
void display(QString *value)
{
    qInfo()<<"the adddress of value: "<<&value;

    qInfo()<<"the adddrress of value_pointer: "<<value;

    qInfo()<<"the value: "<<*value;

}
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QString name="gouthami";
    QString *descr=  new QString("hello Wrold!");
    display(descr);
    delete(descr);
    display(descr);//trying to access after deletion of poiter i.e. dangling pointer


    return a.exec();
}
