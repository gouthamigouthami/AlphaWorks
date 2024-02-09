#include "transfer.h"
#include "communicationlog.h"

Transfer::Transfer(QObject *parent)
    : QObject{parent}
{}
bool Transfer::loadingdataToBuffer(const QString &fileName){
      QFile file(fileName);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qDebug() << "Error: Failed to open file example.txt";
        return false;
    }

    QByteArray buffer;
    while (!file.atEnd()) {
        QByteArray lineBuffer = file.readLine();
        buffer.append(lineBuffer);

        // Check if buffer size exceeds a certain threshold
        if (buffer.size() >= 1024) { // Adjust buffer size as needed
            loadingData(buffer);
            buffer.clear(); // Clear the buffer after processing
        }
    }
    file.close();
    return true;
}
bool Transfer::loadingData(const QByteArray &buffer) {
 Communicationlog com;
QList<QByteArray> lines = buffer.split('\n');
for (const QByteArray &line : lines) {
    // Skip empty lines or lines that don't start with 'S' followed by a digit
    if (line.isEmpty() || !(line.startsWith('S') && line[1] >= '0' && line[1] <= '9'))
        continue;
    QByteArray transferFrame = srecord(line);
            int datalength=Tranferdatasize(transferFrame);
           QString filename = "transfer.txt";

            com.logData(transferFrame,filename, datalength);
    }

        return true;
}
QByteArray Transfer::srecord(const QByteArray &line) {
    QByteArray transferFrame;
    QByteArray data = line.mid(8, line.length() - 10);
    QByteArray sequenceNo = data.mid(0, 2);
    QByteArray messageLength = data.mid(2, 2);
    QByteArray messageData =setdataToBuffer(line);
    QByteArray crc = line.mid(line.length() - 2, 2);

    transferFrame =  sequenceNo + " " + messageLength + " " + messageData + " " + crc ;
    return transferFrame;

}
int Transfer::Tranferdatasize(const QByteArray &line){
    QByteArray data = line.mid(8, line.length() - 10);
    QByteArray messageData = data.mid(4);
    int datasize =messageData.size();
    return datasize;


}
QByteArray Transfer::setdataToBuffer(const QByteArray &line){
   QByteArray messageData = line.mid(4);
    getdataFromBuffer(messageData);
   return messageData;
}
QByteArray Transfer::getdataFromBuffer(const QByteArray &buffer){

    return buffer;
}

