#include "stopwatch.h"
#include <QDebug>
#include <QTimer>
#include <chrono>
using namespace std::chrono_literals;

StopWatch::StopWatch(QObject *parent)
    : QObject(parent), m_secs(0)
{
    QTimer *timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &StopWatch::addOneSecond);

    timer->start(1s);
}


void StopWatch::addOneSecond()
{
    m_secs += 1;

    const QString str = QString::asprintf("%d:%02d", m_secs / 60, m_secs % 60);

    qDebug() << str;
}
