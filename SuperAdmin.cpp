#include "SuperAdmin.h"
#include <iostream>

SuperAdmin::SuperAdmin(CustomString _name, CustomDate _dob, CustomString _dept,
                       double _sal, int _access, CustomString _key)
    : Admin(_name, _dob, _dept, _sal, _access), databaseKey(_key) {}

void SuperAdmin::displayInfo() const {
    Admin::displayInfo(); // Shows ID, Name, Dept, Salary, Access Level
    std::cout << "Security Status: Super User\n";
    std::cout << "Database Key: [PROTECTED]\n";
}

void SuperAdmin::systemOverride() {
    std::cout << "Executing SuperAdmin Override with Key: ";
    databaseKey.display();
    std::cout << std::endl;
}