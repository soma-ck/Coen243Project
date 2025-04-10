#include <iostream>
#include "StudentStaff.h"

/*
 *  Built by
 *  Soma Chénard-Koné 40299666
 *  Nirmal Patel 40309693
 *
 *  Put the data directory together with the executable file to run
 *
 *
 */


int main() {
    StudentStaff *studentStaff = new StudentStaff();
    studentStaff->studentArray[0].printStudentInfo();

    studentStaff->studentArray[3].printStudentInfo();

    studentStaff->studentArray[3].completedProgram() ? std::cout << "Student has completed the program\n\n" : std::cout << "Student has not completed the program\n\n";

    studentStaff->staffArray[0].printStaffInfo();
    studentStaff->staffArray[0].calculateSalary();
    studentStaff->staffArray[0].printStaffInfo();
    size_t arraySize, arraySizeStaff;
    std::ifstream studentFile("./data/student.txt");
    studentFile >> arraySize;
    studentFile.close();
    std::ifstream staffFile("./data/staff.txt");
    staffFile >> arraySizeStaff;
    staffFile.close();
    studentStaff->highestGpa(studentStaff->studentArray, arraySize);
    std::cout << "Number of undergraduate students: " << studentStaff->numberOfUndergraduateStudents(studentStaff->studentArray, arraySize) << std::endl;


    std::string year = "2022";
    studentStaff->sameHireYear(studentStaff->staffArray, arraySizeStaff, year);

    delete studentStaff;

}