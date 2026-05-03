#include "Vehicle.h"
#include <iostream>

// Removed the trailing comma after currentPassengers(0)
Vehicle::Vehicle(CustomString code, CustomDate pDate, double val, GeoCoordinate loc,
                 CustomString reg, int cap)
    : TransitAsset(code, pDate, val, loc),
    registrationNo(reg),
    capacity(cap),
    currentPassengers(0) // <--- No comma here!
{
}

bool Vehicle::isOverCapacity() const {
    return currentPassengers > capacity;
}

void Vehicle::updatePosition(GeoCoordinate newLoc) {
    location = newLoc; // This works because 'location' is inherited from TransitAsset
}