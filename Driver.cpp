#include "Driver.h"
#include <iostream>

// Level 2 Inheritance: Passing data to the 'Person' grandparent
Driver::Driver(int _id, CustomString _name, CustomDate _dob, CustomString _lic, int _exp)
    : Person(_id, _name, _dob), licenseID(_lic), yearsOfExperience(_exp) {}

void Driver::displayDetails() {
    std::cout << "--- Driver Professional Profile ---" << std::endl;
    std::cout << "Employee ID: " << id << std::endl;
    // Name will be displayed here once CustomString print is ready
    std::cout << "License No: ";
    licenseID.display(); // Assuming you add a display method to CustomString
    std::cout << "\nExperience: " << yearsOfExperience << " years" << std::endl;

    if (yearsOfExperience > 5) {
        std::cout << "Status: Senior Lead Driver" << std::endl;
    } else {
        std::cout << "Status: Junior Driver" << std::endl;
    }
}