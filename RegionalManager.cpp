#include "RegionalManager.h"
#include <iostream>

RegionalManager::RegionalManager(int _id, CustomString _name, CustomDate _dob, CustomString _dept, double _sal, int _access, CustomString _key, CustomString _region)
    : SuperAdmin(_id, _name, _dob, _dept, _sal, _access, _key), assignedRegion(_region) {}

void RegionalManager::displayDetails() {
    std::cout << "====================================" << std::endl;
    std::cout << "   REGIONAL MANAGEMENT COMMAND      " << std::endl;
    std::cout << "====================================" << std::endl;

    SuperAdmin::displayDetails(); // Shows everything from Admin, Staff, and Person
    std::cout << "Assigned Region: ";
    assignedRegion.display();
    std::cout << "\n----------------------------------" << std::endl;
}