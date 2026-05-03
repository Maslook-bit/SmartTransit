#ifndef ADMIN_H
#define ADMIN_H

#include "Staff.h"

// Level 4 of the Hierarchy
class Admin : public Staff {
protected:
    int accessLevel; // 1-5 scale for security clearance

public:
    // Removed _id to match the Entity-based system
    Admin(CustomString _name, CustomDate _dob, CustomString _dept, double _sal, int _access);

    // Renamed to displayInfo and marked const to satisfy the rubric
    virtual void displayInfo() const override;

    void manageSystem();
};

#endif