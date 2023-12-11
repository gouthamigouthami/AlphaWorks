#include <QCoreApplication>
#include<QDebug>
#include<QVariant>
#include "test.h"
#include "watcher.h"


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Test tester;
    Watcher destination;
    QObject::connect(&tester,&Test::messageChanged,&destination,&Watcher::messageChnaged);
    destination.messageChnaged("hello World!!");



    return a.exec();
}
