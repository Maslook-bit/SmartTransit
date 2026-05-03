#ifndef STAFF_H
#define STAFF_H

#include "Person.h"

// Level 3: Abstract Base for all Employees
class Staff : public Person {
protected:
    CustomString department;
    double salary;

public:
    Staff(CustomString _name, CustomDate _dob, CustomString _dept, double _sal);

    // Remains pure virtual to prevent instantiation of a 'generic' Staff
    virtual void displayInfo() const override = 0;

    double getSalary() const { return salary; }
};

#endif