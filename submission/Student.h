#include <iostream>
#include <string>

#ifndef STUDENT_H
#define STUDENT_H



class Student {
private:
    std::string firstName;
    std::string lastName;
    std::string studentId;
    std::string dateOfBirth;
    std::string startYear;
    double gpa{};
    int completedCredits{};
    char program{};
public:
    // Constructors
    Student();
    Student(const std::string &firstName, std::string lastName, std::string studentId, std::string dateOfBirth, std::string startYear, int completedCredits, char program, double gpa);
    // Getters
    std::string getFirstName();
    std::string getLastName();
    std::string getStudentId();
    std::string getDateOfBirth();
    std::string getStartYear();
    int getCompletedCredits();
    double getGpa();
    char getProgram();

    // Setters
    void setFirstName(std::string firstName);
    void setLastName(std::string lastName);
    void setStudentId(std::string studentId);
    void setDateOfBirth(std::string dateOfBirth);
    void setStartYear(std::string startYear);
    void setCompletedCredits(int completedCredits);
    void setGpa(double gpa);
    void setProgram(char program);

    // Returns true if the student finished all courses
    bool completedProgram() const;

    // Returns GPA letter grade of the student
    std::string studentStatus();

    // Print all the information about a student
    void printStudentInfo();
};



#endif //STUDENT_H
