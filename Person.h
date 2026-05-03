#ifndef PERSON_H
#define PERSON_H

#include "Entity.h"        // Level 1 Base Class
#include "CustomString.h"
#include "CustomDate.h"

class Person : public Entity {
protected:
    CustomString name;
    CustomDate dob;

public:
    // We no longer pass _id because Entity() auto-generates it!
    Person(CustomString _name, CustomDate _dob);
    virtual ~Person();

    // Requirement: Const correctness for all getters
    CustomString getName() const { return name; }
    CustomDate getDOB() const { return dob; }

    // This remains pure virtual, making Person an abstract class
    virtual void displayInfo() const override = 0;
};

#endif