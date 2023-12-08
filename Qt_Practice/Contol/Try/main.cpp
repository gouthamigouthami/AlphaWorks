#include <QCoreApplication>
#include<QDebug>
#include<iostream>

//#include<array>
//using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
  int age[4];
    for(int i=0;i<4;i++){
    std::cin>>age[i];
}
    /*int b;
    std:: cin>>b;
    std:: array<int,4> age={1,2,3,4};
    foreach (int i, age) {
        qInfo()<<i;
    }*/
   for(int i=0;i<4;i++)
    {
        qInfo()<<age[i];
    }

    return a.exec();
}
