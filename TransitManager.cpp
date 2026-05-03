#include "TransitManager.h"
#include <iostream>

TransitManager::TransitManager() : userCount(0) {
    for(int i = 0; i < 100; i++) allUsers[i] = nullptr;
}

TransitManager::~TransitManager() {
    // Memory Management: Delete polymorphic objects
    for (int i = 0; i < userCount; i++) {
        delete allUsers[i];
    }
}

void TransitManager::addUser(Person* newUser) {
    if (userCount < 100) {
        allUsers[userCount++] = newUser;
    }
}

void TransitManager::showAllUsers() const {
    std::cout << "\n--- SmartTransit System Directory ---\n";
    for (int i = 0; i < userCount; i++) {
        // Polymorphism in action!
        allUsers[i]->displayInfo();
    }
}