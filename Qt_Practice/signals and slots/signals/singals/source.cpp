#include "source.h"

Source::Source(QObject *parent)
    : QObject{parent}
{}

void Source::Test()
{
    emit mySignal("Hello World");
}
