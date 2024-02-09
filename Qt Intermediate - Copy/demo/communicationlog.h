#ifndef COMMUNICATIONLOG_H
#define COMMUNICATIONLOG_H

#include <QObject>
#include <QFile>
#include <QTextStream>
#include <QDateTime>

class Communicationlog : public QObject
{
    Q_OBJECT
public:
    explicit Communicationlog(QObject *parent = nullptr);
    bool openLogFile(const QString &fileName);
    void closeLogFile();
    bool logData(const QString &data,const QString &fileName,int);
    QString getCurrentTime();
    QString getCurrentDate();

signals:
private:
    QFile m_logFile;
    QTextStream m_logStream;
};

#endif // COMMUNICATIONLOG_H
