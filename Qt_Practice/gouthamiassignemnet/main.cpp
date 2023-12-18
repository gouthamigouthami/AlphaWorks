#include <QCoreApplication>
#include <iostream>
#include <QString>
#include <algorithm>
#include<Qvector>

#include "student.h"

bool compareStudents( Student& s1,  Student& s2) {
    return s1.getTotalMarks() > s2.getTotalMarks();
}

int main(int argc, char *argv[]) {
    QCoreApplication a(argc, argv);

    std::vector<Student> students;
    unsigned int num = 0;

    char continueInput;
    do {
        students.push_back(Student());
        num++;
        qInfo() << "Do you want to add another student? (y/n): ";
        std::cin >> continueInput;

    } while (continueInput == 'y' || continueInput == 'Y');

    std::sort(students.begin(), students.end(), compareStudents);

    qInfo() << "Student Information (Sorted by Total Marks):\n";
    for ( auto& student : students) {
        student.displayInfo();
    }

    return a.exec();
}

