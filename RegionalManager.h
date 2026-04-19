#ifndef REGIONALMANAGER_H
#define REGIONALMANAGER_H

#include "SuperAdmin.h"

class RegionalManager : public SuperAdmin {
private:
    CustomString assignedRegion;

public:
    RegionalManager(int _id, CustomString _name, CustomDate _dob, CustomString _dept,
                    double _sal, int _access, CustomString _key, CustomString _region);

    void displayDetails() override;
};

#endif