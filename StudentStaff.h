
#ifndef STUDENTSTAFF_H
#define STUDENTSTAFF_H

#include "Staff.h"
#include "Student.h"
#include <vector>
#include <fstream>
#include <iostream>
#include <cstring>

class StudentStaff {
private:


public:
    StudentStaff();
    Student* studentArray{};
    Staff* staffArray{};
    void highestGpa(Student* studentArray, size_t size);
    int numberOfUndergraduateStudents(Student* studentArray, size_t size);
    void sameHireYear(Staff* staffArray, size_t size, std::string year);
};



#endif //STUDENTSTAFF_H
