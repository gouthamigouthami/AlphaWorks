#include "student.h"


Student::Student(QObject *parent)
    : QObject{parent}
{
    QTextStream qtin(stdin);
    qInfo() << "Enter Roll Number: ";
    qtin >> rollNumber;

    qInfo() << "Enter Name: ";

    studentName = qtin.readLine();

    qInfo() << "Enter Math Marks: ";
    qtin >> mathMarks;

    qInfo() << "Enter Science Marks: ";
    qtin >> scienceMarks;

    qInfo() << "Enter English Marks: ";
    qtin >> englishMarks;
    calculateTotal();
    calculateAverage();
    calculateGrade();
}
void Student::calculateTotal()
{
    totalMarks = mathMarks + scienceMarks + englishMarks;
}
void Student::calculateAverage()
{
    averageMarks = totalMarks / 3.0;
}

void Student::calculateGrade()
{
    if (averageMarks >= 90) {
        grade = 'A';
    } else if (averageMarks >= 80) {
        grade = 'B';
    } else if (averageMarks >= 70) {
        grade = 'C';
    } else if (averageMarks >= 60) {
        grade = 'D';
    } else {
        grade = 'F';
    }
}
int Student::getTotalMarks() {
    return totalMarks;
}
void Student:: displayInfo()  {
    qInfo() << "Roll Number: " << rollNumber << "\tName: " << studentName.toStdString()
            << "\tTotal Marks: " << totalMarks << "\tAverage Marks: " << averageMarks
            << "\tGrade: " << grade << "\n";
}


