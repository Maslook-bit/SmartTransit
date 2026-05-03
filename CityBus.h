#ifndef CITYBUS_H
#define CITYBUS_H

#include "Vehicle.h"

class CityBus : public Vehicle {
protected:
    CustomString busNumber;
    int routeId;
    bool isAirConditioned;

public:
    CityBus(CustomString code, CustomDate pDate, double val, GeoCoordinate loc,
            CustomString reg, int cap, CustomString busNo, int route, bool ac);

    void displayInfo() const override;

    // Simplified overrides from manual
    double getFuelCostPerKm() const override;
    void performDailyCheck() override;
    double calculateEmissions() const override;
};

#endif