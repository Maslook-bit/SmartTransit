#ifndef TRANSITMANAGER_H
#define TRANSITMANAGER_H

#include "DynamicArray.h"
#include "Person.h"

class TransitManager {
private:
    // Storing pointers allows us to use Polymorphism!
    DynamicArray<Person*> allUsers;

public:
    ~TransitManager(); // Important: we'll need to clean up those pointers

    void addUser(Person* newUser);
    void showAllUsers() const;
    void findUserByID(int id) const;
};

#endif