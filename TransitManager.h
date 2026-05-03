#ifndef TRANSITMANAGER_H
#define TRANSITMANAGER_H

#include "Person.h"

class TransitManager {
private:
    Person* allUsers[100]; // Simple pointer array (Requirement: No STL)
    int userCount;

public:
    TransitManager();
    ~TransitManager();

    void addUser(Person* newUser);
    void showAllUsers() const;
};

#endif