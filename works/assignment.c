#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define the maximum number of students
#define MAX_STUDENTS 50

// Define the structure for student information
struct Student {
    char name[50];
    int marks1, marks2, marks3;
    int totalMarks;
    float average;
    char grade;
};

// Function to input student information
void inputStudent(struct Student *s) {
    printf("Enter student name: ");
    scanf("%s", s->name);
    printf("Enter marks for subject 1: ");
    scanf("%d", &s->marks1);
    printf("Enter marks for subject 2: ");
    scanf("%d", &s->marks2);
    printf("Enter marks for subject 3: ");
    scanf("%d", &s->marks3);

    // Calculate total marks, average, and grade
    s->totalMarks = s->marks1 + s->marks2 + s->marks3;
    s->average = s->totalMarks / 3.0;

    if (s->average >= 90) {
        s->grade = 'A';
    } else if (s->average >= 80) {
        s->grade = 'B';
    } else if (s->average >= 70) {
        s->grade = 'C';
    } else if (s->average >= 60) {
        s->grade = 'D';
    } else {
        s->grade = 'F';
    }
}

// Function to print student information
void printStudent(struct Student s) {
    printf("Name: %s\n", s.name);
    printf("Marks - Subject 1: %d, Subject 2: %d, Subject 3: %d\n", s.marks1, s.marks2, s.marks3);
    printf("Total Marks: %d\n", s.totalMarks);
    printf("Average: %.2f\n", s.average);
    printf("Grade: %c\n", s.grade);
    printf("\n");
}

// Function to sort students based on total marks
void sortStudents(struct Student *students, int numStudents) {
    for (int i = 0; i < numStudents - 1; i++) {
        for (int j = 0; j < numStudents - i - 1; j++) {
            if (students[j].totalMarks < students[j + 1].totalMarks) {
                // Swap the students
                struct Student temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
}

int main() {
    // Declare an array of students
    struct Student students[MAX_STUDENTS];

    int numStudents;

    // Input the number of students
    printf("Enter the number of students (max %d): ", MAX_STUDENTS);
    scanf("%d", &numStudents);

    // Input student information
    for (int i = 0; i < numStudents; i++) {
        printf("\nEnter information for student %d:\n", i + 1);
        inputStudent(&students[i]);
    }

    // Calculate sum of marks, average, and grade for each student
    for (int i = 0; i < numStudents; i++) {
        printStudent(students[i]);
    }

    // Sort students based on total marks
    sortStudents(students, numStudents);

    // Print the sorted results
    printf("\nStudents sorted based on total marks:\n");
    for (int i = 0; i < numStudents; i++) {
        printStudent(students[i]);
    }

    return 0;
}
