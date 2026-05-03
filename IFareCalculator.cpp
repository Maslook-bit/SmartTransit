#include "IFareCalculator.h"

// Logic for FlatFareBus
double FlatFareBus::calculateFare(double distanceKm, int passengerCount, bool isPeakHour) const {
    double ratePerPassenger = 60.0; // Fixed rate for Bus
    double total = ratePerPassenger * passengerCount;

    // Apply surcharge for Peak Hours if true
    if (isPeakHour) {
        total *= 1.25; // 25% increase
    }

    return total;
}

CustomString FlatFareBus::getFareType() const {
    return CustomString("Flat Fare Bus Strategy");
}