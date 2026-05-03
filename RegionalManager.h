#ifndef REGIONALMANAGER_H
#define REGIONALMANAGER_H

#include "SuperAdmin.h"

// Level 5 of the Hierarchy
class RegionalManager : public SuperAdmin {
private:
    CustomString assignedRegion;

public:
    // Removed _id to match Entity auto-generation
    RegionalManager(CustomString _name, CustomDate _dob, CustomString _dept,
                    double _sal, int _access, CustomString _key, CustomString _region);

    // Renamed and marked const for rubric compliance
    void displayInfo() const override;
};

#endif