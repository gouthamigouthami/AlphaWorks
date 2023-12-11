#include <QCoreApplication>
#include<QDebug>
#include "owner.h"
#include "dog.h"


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Owner owner;
    Dog dog;
    QObject::connect(&owner,&Owner::treat,&dog,&Dog::treat);
    for(int i=0;i<10;i++)
    {
        //unique connection it will connect only oncce to the object not 10 times.
        QObject::connect(&owner,&Owner::treat,&dog,&Dog::treat,Qt::UniqueConnection);

    }
    owner.giveSnacks();


    return a.exec();
}
