#include "Person.h"
#include <iostream>

// Explicitly call Entity() to ensure ID generation works
Person::Person(CustomString _name, CustomDate _dob)
    : Entity(), name(_name), dob(_dob)
{
}

void Person::displayInfo() const {
    std::cout << "ID: " << id << " | Name: ";
    name.display();
    std::cout << " | DOB: ";
    dob.display();
}

Person::~Person() {
    // Cleanup handled by member destructors
}