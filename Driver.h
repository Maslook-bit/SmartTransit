#ifndef DRIVER_H
#define DRIVER_H

#include "Person.h"

class Driver : public Person {
private:
    CustomString licenseID;
    int yearsOfExperience;

public:
    Driver(int _id, CustomString _name, CustomDate _dob, CustomString _lic, int _exp);

    void displayDetails() override;
};

#endif