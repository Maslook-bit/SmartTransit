#include "TransitManager.h"
#include <iostream>

TransitManager::~TransitManager() {
    // Since we stored pointers, we must delete the objects they point to
    // to avoid memory leaks!
    for (int i = 0; i < allUsers.getSize(); i++) {
        delete allUsers[i];
    }
}

void TransitManager::addUser(Person* newUser) {
    allUsers.add(newUser); // Change push_back to add
}

void TransitManager::showAllUsers() const {
    std::cout << "\n--- SmartTransit System Directory ---" << std::endl;
    for (int i = 0; i < allUsers.getSize(); i++) {
        // Because displayDetails is VIRTUAL, C++ knows whether
        // to call the Passenger version or the RegionalManager version!
        allUsers[i]->displayDetails();
        std::cout << "------------------------------------" << std::endl;
    }
}