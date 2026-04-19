#include "SuperAdmin.h"
#include <iostream>

SuperAdmin::SuperAdmin(int _id, CustomString _name, CustomDate _dob, CustomString _dept, double _sal, int _access, CustomString _key)
    : Admin(_id, _name, _dob, _dept, _sal, _access), databaseKey(_key) {}

void SuperAdmin::displayDetails() {
    Admin::displayDetails(); // Call the parent display to show common info
    std::cout << "Security Status: Super User" << std::endl;
    std::cout << "Database Key: ********" << std::endl; // Secure display
}

void SuperAdmin::systemOverride() {
    std::cout << "Executing SuperAdmin Override with Key: ";
    databaseKey.display();
    std::cout << std::endl;
}