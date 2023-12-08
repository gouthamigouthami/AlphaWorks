#include "animal.h"

Animal::Animal(QObject *parent)
    : QObject{parent}
{
    qInfo()<<this<<"  construcor.";
}

Animal::~Animal()
{
    qInfo()<<this<<" Destrucor.";
}
