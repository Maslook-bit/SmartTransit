#include "Person.h"

// The constructor initializes the basic info for anyone in the system
Person::Person(int _id, CustomString _name, CustomDate _dob)
    : id(_id), name(_name), dob(_dob)
{
    // Body can stay empty because the initializer list did the work!
}

// Virtual destructor is empty but necessary for safe inheritance
Person::~Person() {}