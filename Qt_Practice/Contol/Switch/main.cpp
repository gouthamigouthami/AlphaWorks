#include <QCoreApplication>
#include<QDebug>
#include<iostream>
using namespace std;
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    unsigned int age;
    cin>>age;
    switch(age)
    {
    case 0:
        if(age==0)
        {
            cout<<"age is : "<<age<<" u r not yet born";
        }
        break;
    case 18:
        if(age>18)
            qInfo()<<"now u r "<<age<<"eligible to vote.";
        break;
    case 23:
        qWarning()<<"now u are aligible to marry";
        break;
    default:
        qInfo()<<"default.";
        break;
    }
    std::cout<<"Finished.";

    return a.exec();
}
