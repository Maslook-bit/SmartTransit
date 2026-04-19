#include "Admin.h"
#include <iostream>

Admin::Admin(int _id, CustomString _name, CustomDate _dob, CustomString _dept, double _sal, int _access)
    : Staff(_id, _name, _dob, _dept, _sal), accessLevel(_access) {}

void Admin::displayDetails() {
    std::cout << "--- Administrator Profile ---" << std::endl;
    std::cout << "ID: " << id << std::endl;
    std::cout << "Dept: "; department.display();
    std::cout << "\nAccess Level: " << accessLevel << "/5" << std::endl;
    std::cout << "Monthly Salary: " << salary << " PKR" << std::endl;
}

void Admin::manageSystem() {
    if (accessLevel >= 3) {
        std::cout << "System Access Granted. Updating transit routes..." << std::endl;
    } else {
        std::cout << "Access Denied. Contact SuperAdmin for clearance." << std::endl;
    }
}