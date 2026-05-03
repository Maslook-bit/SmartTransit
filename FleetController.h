#ifndef FLEETCONTROLLER_H
#define FLEETCONTROLLER_H

#include "Vehicle.h"

class FleetController {
private:
    // This constant avoids "Magic Numbers" in your code
    static constexpr int MAX_VEHICLES = 100;

    // The actual array of pointers and a counter
    Vehicle* fleet[MAX_VEHICLES];
    int currentCount;

public:
    FleetController();
    ~FleetController();

    void addVehicle(Vehicle* v);
    void displayAllVehicles() const;
    void clearFleet();
};

#endif