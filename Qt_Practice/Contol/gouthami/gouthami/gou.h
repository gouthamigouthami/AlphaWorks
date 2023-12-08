#ifndef GOU_H
#define GOU_H

#include <QObject>

class Gou : public QObject
{
    Q_OBJECT
public:
    explicit Gou(QObject *parent = nullptr);

signals:
};

#endif // GOU_H
