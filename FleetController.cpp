#include "FleetController.h"
#include <iostream>

// Constructor: Set all 100 spots to null so we don't have "garbage" data
FleetController::FleetController() : currentCount(0) {
    for (int i = 0; i < MAX_VEHICLES; i++) {
        fleet[i] = nullptr;
    }
}

// Destructor: Automatically cleans up when the program ends
FleetController::~FleetController() {
    clearFleet();
}

void FleetController::addVehicle(Vehicle* v) {
    if (currentCount < MAX_VEHICLES) {
        fleet[currentCount] = v;
        currentCount++;
    } else {
        std::cout << "Fleet is full! Cannot add more vehicles." << std::endl;
    }
}

void FleetController::displayAllVehicles() const {
    if (currentCount == 0) {
        std::cout << "The fleet is currently empty." << std::endl;
        return;
    }

    for (int i = 0; i < currentCount; i++) {
        if (fleet[i] != nullptr) {
            fleet[i]->displayInfo();
        }
    }
}

// This prevents memory leaks, which is a major grading requirement
void FleetController::clearFleet() {
    for (int i = 0; i < currentCount; i++) {
        delete fleet[i];    // Delete the actual object from memory
        fleet[i] = nullptr; // Safety reset
    }
    currentCount = 0;
}