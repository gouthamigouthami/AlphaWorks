#include <QCoreApplication>
#include<QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QString name="baryan rao";
    qInfo()<<name;
    qInfo()<<name.mid(0,4);
    qInfo()<<name.insert(0,"Mr. ");
    qInfo()<<name.split(" ");
    int index=name.indexOf(" ");
    qInfo()<<"index: "<<index;
    if(index>-1)
    {
       // qInfo()<<name.remove(0,index+1);
        qInfo()<<name.remove(0,index).trimmed();
    }
    QString role="Teacher";
    QString full = name+" "+role;
    //qInfo()<<name.append(full);
   // qInfo()<<name;
    qInfo()<<full.toUtf8();//representation of the string in QbyteArray


    return a.exec();
}
