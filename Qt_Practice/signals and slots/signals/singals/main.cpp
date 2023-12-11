/*signals and slots are used for communication between objects
-> A signal is emitted when a particular event occurs.
signals are public access functions and can be emitted from anywhereby an object,
When a signal is emitted, the slots connected to it are usually executed immediately
Slots
A slot is called when a signal connected to it is emitted.
 Slots are normal C++ functions and can be called normally;
 their only special feature is that signals can be connected to them.
 */

#include <QCoreApplication>
#include<QDebug>
#include "source.h"
#include "destination.h"


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Source oSource;
    Destination oDestination;

    QObject::connect(&oSource,&Source::mySignal,&oDestination,&Destination::mySignal);

    oSource.Test();

    oDestination.mySignal("Hi!");



    return a.exec();
}
