#include "dog.h"

Dog::Dog(QObject *parent)
    : QObject{parent}
{}

void Dog::treat()
{
    qInfo()<<"bark";
}
