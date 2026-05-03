#ifndef IFARECALCULATOR_H
#define IFARECALCULATOR_H

#include "CustomString.h"

// Abstract Interface as per Listing 3
class IFareCalculator {
public:
    virtual ~IFareCalculator() = default;

    // Pure virtual functions: This makes the class Abstract
    virtual double calculateFare(double distanceKm, int passengerCount, bool isPeakHour) const = 0;
    virtual CustomString getFareType() const = 0;
};

// Concrete Fare Strategy for the Bus
class FlatFareBus : public IFareCalculator {
public:
    // Implementation of the interface functions
    double calculateFare(double distanceKm, int passengerCount, bool isPeakHour) const override;
    CustomString getFareType() const override;
};

#endif