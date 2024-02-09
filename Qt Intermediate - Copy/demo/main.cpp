#include <QCoreApplication>
#include<QDebug>
#include "transfer.h"
#include "communicationlog.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QString filename="example.txt";
    Communicationlog comm;
    comm.openLogFile(filename);
    Transfer trans;
    if(trans.loadingdataToBuffer(filename)){
        qDebug()<<"sucessfull transfer of data\n";
    }else{
        qDebug()<<"no sucessfull transfer of data\n";
    }
    return a.exec();
}
