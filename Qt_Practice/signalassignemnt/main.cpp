#include <QCoreApplication>
#include <iostream>
#include <QString>
#include <vector>
#include <algorithm>
#include <QObject>

class Student : public QObject {
    Q_OBJECT

private:
    QString name;
    int mathScore;
    int physicsScore;
    int chemistryScore;
    int totalScore;
    char grade;

public:
    Student(const QString& n, int math, int physics, int chemistry)
        : name(n), mathScore(math), physicsScore(physics), chemistryScore(chemistry) {
        calculateTotal();
        calculateGrade();
    }

    void calculateTotal() {
        totalScore = mathScore + physicsScore + chemistryScore;
    }

    void calculateGrade() {
        double averageScore = totalScore / 3.0;

        if (averageScore >= 90) {
            grade = 'A';
        } else if (averageScore >= 80) {
            grade = 'B';
        } else if (averageScore >= 70) {
            grade = 'C';
        } else if (averageScore >= 60) {
            grade = 'D';
        } else {
            grade = 'F';
        }
    }

    int getTotalScore() const {
        return totalScore;
    }

    QString getName() const {
        return name;
    }

    char getGrade() const {
        return grade;
    }

signals:
    void studentAdded(const Student& student);
};

bool compareStudents(const Student& s1, const Student& s2) {
    return s1.getTotalScore() > s2.getTotalScore();
}

class StudentManager : public QObject {
    Q_OBJECT

private:
    std::vector<Student> students;

public slots:
    void addStudent(const Student& student) {
        students.push_back(student);
        emit studentAdded(student);
    }

    void displayStudentInfo() {
        std::sort(students.begin(), students.end(), compareStudents);

        std::cout << "Student Information (Sorted by Total Marks):" << std::endl;
        for (const auto& student : students) {
            std::cout << "Name: " << student.getName().toStdString()
                      << ", Total Marks: " << student.getTotalScore()
                      << ", Grade: " << student.getGrade() << std::endl;
        }
    }

signals:
    void studentAdded(const Student& student);
};

int main(int argc, char *argv[]) {
    QCoreApplication a(argc, argv);

    StudentManager studentManager;

    QObject::connect(&studentManager, &StudentManager::studentAdded, &studentManager, &StudentManager::displayStudentInfo);

    char continueInput;
    do {
        QString name;
        int math, physics, chemistry;

        std::cout << "Enter student details:" << std::endl;
        std::cout << "Name: ";
        QTextStream qtin(stdin);
        name = qtin.readLine();

        std::cout << "Math score: ";
        std::cin >> math;

        std::cout << "Physics score: ";
        std::cin >> physics;

        std::cout << "Chemistry score: ";
        std::cin >> chemistry;

        Student student(name, math, physics, chemistry);
        studentManager.addStudent(student);

        std::cout << "Do you want to add another student? (y/n): ";
        std::cin >> continueInput;

    } while (continueInput == 'y' || continueInput == 'Y');

    return a.exec();
}
