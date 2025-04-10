//
// Created by soma on 08/04/25.
//

#include "StudentStaff.h"



StudentStaff::StudentStaff() {
    std::cout << "Student staff created" << std::endl;
    size_t numberOfLines;
    std::string lines;
    std::fstream studentFile("./data/student.txt");
    studentFile >> numberOfLines;
    studentFile.ignore(5, '\n');
    std::string firstName;
    std::string lastName;
    std::string studentId;
    std::string dateOfBirth;
    std::string startYear;
    int completedCredits;
    double gpa;

    char program;
    studentArray = new Student[numberOfLines]();
    for (int i = 0; i < numberOfLines; i++) {
        studentFile >> firstName >> lastName >> studentId >> dateOfBirth >> gpa >> startYear >> completedCredits >> program ;
        studentArray[i] = Student(firstName, lastName, studentId, dateOfBirth, startYear, completedCredits, program, gpa);
    }

    studentFile.close();


    std::fstream staffFile("./data/staff.txt");
    numberOfLines = 0;
    staffFile >> numberOfLines;
    staffFile.ignore(5, '\n');
    int staffId;
    std::string dateOfHiring;
    std::string bonusCode;
    double currentSalary;
    staffArray = new Staff[numberOfLines]();
    for (int i = 0; i < numberOfLines; i++) {
        staffFile >> firstName >> lastName >> staffId >> dateOfHiring >> bonusCode >> currentSalary;
        staffArray[i] = Staff(firstName, lastName, staffId, dateOfHiring, bonusCode, currentSalary);
    }
    staffFile.close();
}

void StudentStaff::highestGpa(Student* studentArray, size_t size) {
    double highestGpa = 0;
    Student bestStudent{};
    std::cout << "\n----------------------------------------\n";
    for (int i = 0; i < size; i++) {
        if (studentArray[i].getGpa() > highestGpa) {
            highestGpa = studentArray[i].getGpa();
            bestStudent = studentArray[i];
        }
    }
    std::cout << "Student with higest GPA : \n\n";
    bestStudent.printStudentInfo();
    std::cout << "----------------------------------------\n";
}

int StudentStaff::numberOfUndergraduateStudents(Student *studentArray, size_t size) {
    int numberOfUndergraduateStudents = 0;
    for (int i = 0; i < size; i++) {
        if (studentArray[i].getProgram() == 'B') {
            numberOfUndergraduateStudents++;
        }
    }
    return numberOfUndergraduateStudents;
}

void StudentStaff::sameHireYear(Staff *staffArray, size_t size, std::string year) {
    std::cout << "----------------------------------------\n";
    std::cout << "Staff hired in " << year << ":\n\n";
    for (int i = 0; i < size; i++) {
        std::string hireYear = staffArray[i].getDateOfHiring();
        if (strstr(hireYear.c_str(), year.c_str())) {
            staffArray[i].printStaffInfo();
        }
    }
    std::cout << "----------------------------------------\n";
}

