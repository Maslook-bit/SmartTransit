#include "Staff.h"
#include <iostream>

Staff::Staff(CustomString _name, CustomDate _dob, CustomString _dept, double _sal)
    : Person(_name, _dob), department(_dept), salary(_sal)
{
    // ID generation is handled by the Entity grandparent
}

// Implementation for the pure virtual function
void Staff::displayInfo() const {
    // 1. Show Person info (ID, Name, DOB)
    Person::displayInfo();

    // 2. Show Staff-specific info
    std::cout << "\nDepartment: "; department.display();
    std::cout << " | Salary: " << salary << " PKR";
}