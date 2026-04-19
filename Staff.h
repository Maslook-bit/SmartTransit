#ifndef STAFF_H
#define STAFF_H

#include "Person.h"

class Staff : public Person {
protected:
    CustomString department;
    double salary;

public:
    Staff(int _id, CustomString _name, CustomDate _dob, CustomString _dept, double _sal);

    // We leave displayDetails() as virtual so the next level can implement it
    virtual void displayDetails() override = 0;
};

#endif