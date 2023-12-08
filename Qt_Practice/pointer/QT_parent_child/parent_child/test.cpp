#include "test.h"

Test::Test(QObject *parent)
    : QObject{parent}
{
    qInfo()<<this<<"Construcor.";
}

Test::~Test()
{
qInfo()<<this<<"Destrucor.";
}
