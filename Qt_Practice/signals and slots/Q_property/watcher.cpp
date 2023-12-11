#include "watcher.h"

Watcher::Watcher(QObject *parent)
    : QObject{parent}
{}

void Watcher::messageChnaged(QString message)
{
    qInfo()<<message;
}
