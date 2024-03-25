#ifndef STOPWATCH_H
#define STOPWATCH_H

#include <QObject>

class StopWatch : public QObject
{
    Q_OBJECT
public:
    explicit StopWatch(QObject *parent = nullptr);
private slots:
    void addOneSecond();
private:
    int m_secs;

signals:
};

#endif // STOPWATCH_H
