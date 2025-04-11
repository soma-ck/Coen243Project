#include "Staff.h"

Staff::Staff() {
    this->firstName = "";
    this->lastName = "";
    this->staffId = 0;
    this->dateOfHiring = "";
    this->bonusCode = "";
    this->currentSalary = 0;
}

Staff::Staff(std::string firstName, std::string lastName, int staffId, std::string dateOfHiring, std::string bonusCode,
    double currentSalary) {
    this->firstName = firstName;
    this->lastName = lastName;
    this->staffId = staffId;
    this->dateOfHiring = dateOfHiring;
    this->bonusCode = bonusCode;
    this->currentSalary = currentSalary;
}

std::string Staff::getFirstName() {
    return firstName;
}

std::string Staff::getLastName() {
    return lastName;
}

int Staff::getStaffId() {
    return staffId;
}

std::string Staff::getDateOfHiring() {
    return dateOfHiring;
}

std::string Staff::getBonusCode() {
    return bonusCode;
}

int Staff::getCurrentSalary() {
    return currentSalary;
}

void Staff::setFirstName(std::string firstName) {
    this->firstName = firstName;
}

void Staff::setLastName(std::string lastName) {
    this->lastName = lastName;
}

void Staff::setStaffId(int staffId) {
    this->staffId = staffId;
}

void Staff::setDateOfHiring(std::string dateOfHiring) {
    this->dateOfHiring = dateOfHiring;
}

void Staff::setBonusCode(std::string bonusCode) {
    this->bonusCode = bonusCode;
}

void Staff::setCurrentSalary(int currentSalary) {
    this->currentSalary = currentSalary;
}


void Staff::calculateSalary() {
    if (bonusCode == "A") {
        currentSalary *= 1.08;
    }
    else if (bonusCode == "B") {
        currentSalary *= 1.06;
    }
    else if (bonusCode == "C") {
        currentSalary *= 1.03;
    }
    else if (bonusCode == "D"){
        currentSalary *= 1.01;
    }
    // by Nirmal: if bonus code is not A, B, C or D, throw an exception
    else {
        throw std::invalid_argument("Invalid bonus code during salary calculation.");
    }
}

void Staff::printStaffInfo() {
    std::cout << "First Name: " << firstName << "\n"
    << "Last Name: " << lastName << "\n"
    << "Staff ID: " << staffId<< "\n"
    << "Date of Hiring: " << dateOfHiring << "\n"
    << "Bonus Code:  " << bonusCode << "\n"
    << "Current Salary: " << currentSalary << "\n\n";

}

