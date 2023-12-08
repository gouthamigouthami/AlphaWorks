#include "test.h"

Test::Test(QObject *parent)
    : QObject{parent}
{
    qInfo()<<this<<"Constricted.";
}

Test::~Test()
{
     qInfo()<<this<<"DeConstricted.";

}

void Test::doStuff()
{
 qInfo()<<this<<Q_FUNC_INFO;
}
