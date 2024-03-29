#ifndef USER_H
#define USER_H

#include <QObject>

class User : public QObject
{
    Q_OBJECT

    Q_PROPERTY(QString name MEMBER m_name NOTIFY nameChanged)

public:
    explicit User(const QString &name = QString());
    ~User();

signals:
    void nameChanged();

private:
    QString m_name;
};

#endif // USER_H
