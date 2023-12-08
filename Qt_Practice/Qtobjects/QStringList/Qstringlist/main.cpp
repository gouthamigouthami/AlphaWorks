/*It provides fast index-based access
 *  as well as fast insertions and removals.
 *  Passing string lists as value parameters
 *   is both fast and safe*/

#include <QCoreApplication>
#include<QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QString say="Hello hi how are you";
    QStringList name=say.split(" ");
    qInfo()<<name;
    qInfo()<<say;
    foreach (QString str, name) {
        qInfo()<<str;

    }
    foreach (QString str, say) {
        qInfo()<<str;

    }

    name.sort(Qt::CaseInsensitive);
    qInfo()<<name;
    QString value="Hello";
    if(name.contains(value))
    {
        int index=name.indexOf(value);
        qInfo()<<name.value(index);
    }


    return a.exec();
}
