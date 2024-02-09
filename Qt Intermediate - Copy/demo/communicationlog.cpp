#include "communicationlog.h"
//#include "transfer.h"

Communicationlog::Communicationlog(QObject *parent)
    : QObject{parent}
{}
bool Communicationlog::openLogFile(const QString &fileName)
{
    QFile exampleFile(fileName);
    if (exampleFile.exists()) {
        qDebug() << "example.txt already exists.";
        return true;
    }


    if (!exampleFile.open(QIODevice::WriteOnly | QIODevice::Text)) {
        qDebug() << "Error: Failed to create example file!";
        return false;
    }

    exampleFile.close();
    return true;
}

void Communicationlog::closeLogFile()
{
    m_logFile.close();
}
QString Communicationlog::getCurrentTime() {
    QDateTime currentTime = QDateTime::currentDateTime();
    QString timeString = currentTime.toString("HH:mm:ss.zzz");
    return timeString;
}

QString Communicationlog::getCurrentDate() {
    QDateTime currentTime = QDateTime::currentDateTime();
    QString dateString = currentTime.toString("yy-MM-dd");
    return dateString;
}
bool Communicationlog::logData(const QString &data,const QString &fileName,int datalength)
{
        QFile transferFile(fileName);
        if (!transferFile.open(QIODevice::Append | QIODevice::Text)) {
            qDebug() << "Error: Failed to open transfer file!";

        }

        QTextStream out(&transferFile);

        //qDebug() << "Size of the frame  "<<frame <<"is: " << size;
        out << "[RX] [CAN] " + getCurrentDate().toUtf8() + " " + getCurrentTime().toUtf8() + " "+ data << "\n";

        transferFile.close();
        return true;

}

