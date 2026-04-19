#include "Staff.h"

Staff::Staff(int _id, CustomString _name, CustomDate _dob, CustomString _dept, double _sal)
    : Person(_id, _name, _dob), department(_dept), salary(_sal) {}