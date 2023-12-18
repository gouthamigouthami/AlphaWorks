#include "student.h"
#include <QTextStream>
#include <QDebug>

//student no-param constuctor reading student details from the user.
Student::Student()
 {
    QTextStream qtin(stdin);

 qInfo() << "Enter Roll Number: ";
 QString rollNumberStr = qtin.readLine();
 bool conversionSuccess;

 //coverting String to int
 rollNumber = rollNumberStr.toInt(&conversionSuccess);

//eror handling for the name
 while (true) {
     qInfo() << "Enter Name: ";
     //attempt was made to read past the end of the stream
     if (qtin.status() == QTextStream::ReadPastEnd)
         break;

     studentName = qtin.readLine().trimmed();
     if (studentName.isEmpty()) {
         qWarning() << "Name cannot be empty. Please enter a valid Name.";
     } else {
         break;
     }
 }

 // Error handling for Math Marks
 while (true) {
     qInfo() << "Enter Math Marks: ";
     qtin >> mathMarks;

     if (isValidMarks(mathMarks)) {
         break;
     } else {
         qWarning() << "Invalid marks. Please enter marks between 0 and 100.";
     }
 }

 // Error handling for english Marks
 while (true) {
     qInfo() << "Enter english Marks: ";
     qtin >> englishMarks;

     if (isValidMarks(englishMarks)) {
         break;
     } else {
         qWarning() << "Invalid marks. Please enter marks between 0 and 100.";
     }
 }

 // Error handling for science Marks
 while (true) {
     qInfo() << "Enter Math Marks: ";
     qtin >> scienceMarks;

     if (isValidMarks(scienceMarks)) {
         break;
     } else {
         qWarning() << "Invalid marks. Please enter marks between 0 and 100.";
     }
 }

 calculateTotal();
 calculateAverage();
 calculateGrade();
 }

//function to calculate totalMarks
void Student::calculateTotal() {
    totalMarks = mathMarks + scienceMarks + englishMarks;
}

 //function to find calculate averageMarks
void Student::calculateAverage() {
    averageMarks = totalMarks / 3.0;
}

//function to calculate grade.
void Student::calculateGrade() {
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

//this function return the total marks
//doesn't modify the Student object's state it just retrieves a value.
int Student::getTotalMarks() const {
    return totalMarks;
}

//display the list of every student.
void Student::displayInfo() {
    qInfo() << "Roll Number: " << rollNumber << "\tName: " << studentName.toStdString()
            << "\tTotal Marks: " << totalMarks << "\tAverage Marks: " << averageMarks
            << "\tGrade: " << grade << "\n";
}
//funtion to get theh valid marks
bool Student::isValidMarks(int marks) {
    return marks >= 0 && marks <= 100;
}
//function to delete student detail based on rollNumber
void Student::deleteStudent(std::vector<Student>& students, int rollNumber) {
    auto it = std::remove_if(students.begin(), students.end(), [rollNumber](const Student& s) {
        return s.rollNumber == rollNumber;
    });

    students.erase(it, students.end());
}

// It compares these two objects based on their total marks,
//which is obtained using the getTotalMarks method.
bool compareStudents(Student& s1, Student& s2) {
    return s1.getTotalMarks() > s2.getTotalMarks();
}
/*char home(char selection_role)
{
    time_t now = time(0);
    char* dt = ctime(&now);
    QTextStream qtin(stdin);
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
        if (selection_role < 'a' || selection_role > 'e'){
            qInfo() << " You have entered a wrong selection. Try again.\n\n";}

    } while (selection_role < 'a' || selection_role > 'e');
    return selection_role;
}
*/
