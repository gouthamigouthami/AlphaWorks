/*The QList class is a template class
 *  that provides a dynamic array.
 *   It stores its items in adjacent memory locations
 *   and provides fast index-based access.
 * */
#include <QCoreApplication>
#include<QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QString name="hi hello how are you!";
    QList<QString>name1=name.split(" ");
    qInfo()<<name;
    foreach (QString str, name1) {
        qInfo()<<str;
    }
    QList<int>age={22,3,55,78};

    age.append(23);//last added.
    age.remove(1);//remove index number.
   int hey= age.last();
    qInfo()<<hey;//last ele printed.

    foreach (int str, age) {
        qInfo()<<str;
    }









    return a.exec();
}
