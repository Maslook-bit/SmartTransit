#ifndef SUPERADMIN_H
#define SUPERADMIN_H

#include "Admin.h"

class SuperAdmin : public Admin {
private:
    CustomString databaseKey;

public:
    SuperAdmin(int _id, CustomString _name, CustomDate _dob, CustomString _dept, double _sal, int _access, CustomString _key);

    void displayDetails() override;
    void systemOverride(); // Unique power for Level 4
};

#endif