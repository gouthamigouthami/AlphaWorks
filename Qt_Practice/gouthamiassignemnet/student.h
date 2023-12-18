#ifndef STUDENT_H
#define STUDENT_H

#include <QObject>
#include <QTextStream>
#include<QDebug>

class Student : public QObject
{

    Q_OBJECT
    int rollNumber;
    QString studentName;
    int mathMarks;
    int scienceMarks;
    int englishMarks;
    int totalMarks;
    double averageMarks;
    char grade;
public:
    explicit Student(QObject *parent = nullptr);
    void  calculateTotal();
    void calculateAverage();
   void  calculateGrade();
    int getTotalMarks();
       void displayInfo();


   signals:
};



#endif // STUDENT_H
