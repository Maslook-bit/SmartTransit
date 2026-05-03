#ifndef VEHICLE_H
#define VEHICLE_H

#include "TransitAsset.h"

class Vehicle : public TransitAsset {
protected:
    CustomString registrationNo;
    int capacity;
    int currentPassengers; // <--- You were missing this field!

public:
    Vehicle(CustomString code, CustomDate pDate, double val, GeoCoordinate loc,
            CustomString reg, int cap);

    // Pure virtual functions (Level 3 requirement)
    virtual void displayInfo() const override = 0;
    virtual double getFuelCostPerKm() const = 0;
    virtual void performDailyCheck() = 0;
    virtual double calculateEmissions() const = 0;

    // --- Add these declarations to fix the "no declaration matches" errors ---
    bool isOverCapacity() const;
    void updatePosition(GeoCoordinate newLoc);
};

#endif