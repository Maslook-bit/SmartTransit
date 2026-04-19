#ifndef ADMIN_H
#define ADMIN_H

#include "Staff.h"

class Admin : public Staff {
private:
    int accessLevel; // 1-5 scale for security clearance

public:
    Admin(int _id, CustomString _name, CustomDate _dob, CustomString _dept, double _sal, int _access);

    void displayDetails() override;
    void manageSystem(); // Unique function just for Admins
};

#endif