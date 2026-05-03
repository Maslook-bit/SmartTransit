#include "Admin.h"
#include <iostream>

Admin::Admin(CustomString _name, CustomDate _dob, CustomString _dept, double _sal, int _access)
    : Staff(_name, _dob, _dept, _sal), accessLevel(_access) {}

void Admin::displayInfo() const {
    std::cout << "--- Administrator Profile ---" << std::endl;
    std::cout << "ID: " << id << std::endl; // Inherited from Entity
    std::cout << "Name: "; name.display(); // Inherited from Person
    std::cout << "\nDept: "; department.display(); // Inherited from Staff
    std::cout << "\nAccess Level: " << accessLevel << "/5" << std::endl;
    std::cout << "Salary: " << salary << " PKR" << std::endl;
    std::cout << "----------------------------" << std::endl;
}

void Admin::manageSystem() {
    if (accessLevel >= 3) {
        std::cout << "System Access Granted. Updating transit routes..." << std::endl;
    } else {
        std::cout << "Access Denied. Contact SuperAdmin for clearance." << std::endl;
    }
}