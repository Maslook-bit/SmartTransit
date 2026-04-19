#ifndef PERSON_H
#define PERSON_H

#include "CustomString.h"
#include "CustomDate.h"

class Person {
protected:
    int id;
    CustomString name;
    CustomDate dob;

public:
    Person(int _id, CustomString _name, CustomDate _dob);
    virtual ~Person(); // Virtual ensures memory is cleaned up for child classes

    // Pure virtual function makes this an "Abstract" class
    virtual void displayDetails() = 0;
};

#endif
