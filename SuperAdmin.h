#ifndef SUPERADMIN_H
#define SUPERADMIN_H

#include "Admin.h"

class SuperAdmin : public Admin {
private:
    CustomString databaseKey;

public:
    SuperAdmin(CustomString _name, CustomDate _dob, CustomString _dept,
               double _sal, int _access, CustomString _key);

    void displayInfo() const override; // Renamed to match Entity
    void systemOverride();
};

#endif