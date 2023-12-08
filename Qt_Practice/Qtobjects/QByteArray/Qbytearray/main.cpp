/*QByteArray is the Qt class to store a array of bytes.
 * It is analogous to a char *
 * */
#include <QCoreApplication>
#include<QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QString name="hello World!";
    QByteArray buffer=(name.toUtf8());
    qInfo()<<name<<Qt::endl<<buffer;
    qInfo()<<buffer.rightJustified(20,'.');
    qInfo()<<(buffer.length() );
    qInfo()<<buffer.at(buffer.length()-1);
    //encoding and decoding
     qInfo()<<buffer.toHex();
     qInfo()<<(buffer.toBase64() );


    return a.exec();
}
