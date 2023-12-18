// student.h

#ifndef STUDENT_H
#define STUDENT_H

#include <QObject>
#include <QDebug>
#include <QString>

class Student
{

private:
    int rollNumber;
    QString studentName;
    int mathMarks;
    int scienceMarks;
    int englishMarks;
    int totalMarks;
    double averageMarks;
    char grade;

public:
     Student();
    void calculateTotal();
    void calculateAverage();
    void calculateGrade();
    int getTotalMarks() const;
    void displayInfo();
    static bool isValidMarks(int marks);
    static void deleteStudent(std::vector<Student>& students, int rollNumber);
signals:

};

bool compareStudents(const Student& s1, const Student& s2);
//char home(char);
#endif // STUDENT_H
