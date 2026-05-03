#include "RegionalManager.h"
#include <iostream>

RegionalManager::RegionalManager(CustomString _name, CustomDate _dob, CustomString _dept,
                                 double _sal, int _access, CustomString _key, CustomString _region)
    : SuperAdmin(_name, _dob, _dept, _sal, _access, _key), assignedRegion(_region)
{
}

void RegionalManager::displayInfo() const {
    std::cout << "====================================" << std::endl;
    std::cout << "    REGIONAL MANAGEMENT COMMAND      " << std::endl;
    std::cout << "====================================" << std::endl;

    // Calls SuperAdmin's displayInfo to show Name, ID, Salary, and Keys
    SuperAdmin::displayInfo();

    std::cout << "Assigned Region: ";
    assignedRegion.display();
    std::cout << "\n----------------------------------" << std::endl;
}