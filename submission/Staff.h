
#ifndef STAFF_H
#define STAFF_H
#include <string>
#include <iostream>


class Staff {
private:
    std::string firstName;
    std::string lastName;
    int staffId;
    std::string dateOfHiring;
    std::string bonusCode;
    double currentSalary;
public:
    // Constructors
    Staff();
    Staff(std::string firstName, std::string lastName, int staffId, std::string dateOfHiring, std::string bonusCode, double currentSalary);
    // Getters
    std::string getFirstName();
    std::string getLastName();
    int getStaffId();
    std::string getDateOfHiring();
    std::string getBonusCode();
    int getCurrentSalary();
    // Setters
    void setFirstName(std::string firstName);
    void setLastName(std::string lastName);
    void setStaffId(int staffId);
    void setDateOfHiring(std::string dateOfHiring);
    void setBonusCode(std::string bonusCode);
    void setCurrentSalary(int currentSalary);
    // Other methods

    void calculateSalary();
    void printStaffInfo();
};



#endif //STAFF_H
