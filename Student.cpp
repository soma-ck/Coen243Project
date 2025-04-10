#include "Student.h"

Student::Student() {
    firstName = "";
    lastName = "";
    studentId = "";
    dateOfBirth = "";
    startYear = "";
    completedCredits = 0;
    program = ' ';
}

Student::Student(const std::string &firstName, std::string lastName, std::string studentId, std::string dateOfBirth, std::string startYear, int completedCredits, char program, double gpa) {
    this->firstName = firstName;
    this->lastName = lastName;
    this->studentId = studentId;
    this->dateOfBirth = dateOfBirth;
    this->startYear = startYear;
    this->completedCredits = completedCredits;
    this->program = program;
    this->gpa = gpa;
}


// Getters
std::string Student::getFirstName() {
    return firstName;
}
std::string Student::getLastName() {
    return lastName;
}
std::string Student::getStudentId() {
    return studentId;
}
std::string Student::getDateOfBirth() {
    return dateOfBirth;
}
std::string Student::getStartYear() {
    return startYear;
}
double Student::getGpa() {
    return gpa;
}
int Student::getCompletedCredits() {
    return completedCredits;
}
char Student::getProgram() {
    return program;
}

// Setters
void Student::setFirstName(std::string firstName) {
    this->firstName = firstName;
}
void Student::setLastName(std::string lastName) {
    this->lastName = lastName;
}
void Student::setStudentId(std::string studentId) {
    this->studentId = studentId;
}
void Student::setDateOfBirth(std::string dateOfBirth) {
    this->dateOfBirth = dateOfBirth;
}
void Student::setStartYear(std::string startYear) {
    this->startYear = startYear;
}
void Student::setGpa(double gpa) {
    this->gpa = gpa;
}
void Student::setCompletedCredits(int completedCredits) {
    this->completedCredits = completedCredits;
}
void Student::setProgram(char program) {
    this->program = program;
}

// Returns true if the student finished all courses
bool Student::completedProgram() const {
    if (program == 'B' && completedCredits == 140 ||
       program == 'M' && completedCredits == 16 ||
       program == 'P' && completedCredits == 12) {
        return true;
    }
    return false;
}

// Returns GPA letter grade of the student
std::string Student::studentStatus() {
    if (gpa >= 3.5) {
        return "A+";
    } else if (gpa >= 3.0) {
        return "A";
    } else if (gpa >= 2.5) {
        return "B";
    } else if (gpa >= 2.0) {
        return "C";
    } else {
        return "D";
    }
}

// Print all the information about a student
void Student::printStudentInfo() {
    std::cout << "First Name: " << firstName << "\n"
     << "Last Name: " << lastName << "\n"
     << "Student ID: " << studentId << "\n"
     << "Date of Birth: " << dateOfBirth << "\n"
     << "Start Year: " << startYear << "\n"
     << "Completed Credits: " << completedCredits << "\n"
     << "GPA: " << gpa << "\n"
     << "Program: " << program << "\n\n";
}