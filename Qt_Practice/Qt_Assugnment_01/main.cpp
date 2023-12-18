#include <QCoreApplication>
#include <vector>
#include <algorithm>
#include <QTextStream>
#include <ctime>
#include "student.h"

int main(int argc, char *argv[]) {
    QCoreApplication a(argc, argv);
    QTextStream qtin(stdin);
    char operationInput,continueOperation,selection_role;;

    time_t now = time(0);
    char* dt = ctime(&now);

    std::vector<Student> students;


    label:
        qInfo() << "              The local date and time is: " << dt << "\n";
        qInfo() <<
            "      ==========================        ===========================\n"
            "       *(A)  ADD STUDENT *               * (B) DELETE STUDENT *      \n"
            "      ==========================        ===========================\n"
            "      ==========================        =========================\n"
            "        *(C)  SORT *                     * (D) DISPLAY *  \n"
            "      ==========================        =========================\n"
            "                ==========================       \n"
            "                            *(e) EXIT *                      \n"
            "               ==========================        "
            "                               \n\n";

        do {
            qInfo() << " SELECT AN OPTION: ";
            qtin >> selection_role;

            selection_role = tolower(selection_role);
            if (selection_role < 'a' || selection_role > 'e')
                qInfo() << " You have entered a wrong selection. Try again.\n\n";
        } while (selection_role < 'a' || selection_role > 'e');

        switch (selection_role) {
        case 'a':
            do {
                students.push_back(Student());

                while (true) {
                    qInfo() << "Do you want to add another student? (y/n): ";
                    qtin >> continueOperation;
                    continueOperation = tolower(continueOperation);

                    if (continueOperation == 'y' || continueOperation == 'n') {
                        break;
                    } else {
                        qWarning() << "Invalid input. Please enter 'y' or 'n'.";
                    }
                }

            } while (continueOperation == 'y');
            goto label;
            break;
        case 'b':



            int rollNumberToDelete;
            qInfo() << "Enter Roll Number to delete: ";
            qtin >> rollNumberToDelete;
            Student::deleteStudent(students, rollNumberToDelete);
            goto label;

            break;
        case 'c':
            std::sort(students.begin(), students.end(), compareStudents);
            qInfo() << "Student Information (Sorted by Total Marks):\n";
            for (auto& student : students) {
                student.displayInfo();
            }
            goto label;
            break;
        case 'd':
            qInfo() << "Student Information (Sorted by Total Marks):\n";
            for (auto& student : students) {
                student.displayInfo();
            }
            goto label;
            break;
        case 'e':

            exit(0);
        }return a.exec();
}

