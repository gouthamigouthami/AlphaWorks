#ifndef TRANSFER_H
#define TRANSFER_H

#include <QObject>

class Transfer : public QObject
{
    Q_OBJECT
public:
    explicit Transfer(QObject *parent = nullptr);
QByteArray srecord(const QByteArray &data);
QByteArray setdataToBuffer(const QByteArray &line);
QByteArray getdataFromBuffer(const QByteArray &buffer);
int Tranferdatasize(const QByteArray &data);
bool loadingData(const QByteArray &buffer);
bool loadingdataToBuffer(const QString &fileName);

// createFrame(const QByteArray &data);
signals:
};

#endif // TRANSFER_H
