#ifndef ELECTRICSCOOTER_H
#define ELECTRICSCOOTER_H

#include "Vehicle.h"

class ElectricScooter : public Vehicle {
private:
    int batteryLevelPercent;

public:
    ElectricScooter(CustomString code, CustomDate pDate, double val, GeoCoordinate loc,
                    CustomString reg, int bat);

    void displayInfo() const override;

    double getFuelCostPerKm() const override { return 2.0; } // Very cheap
    double calculateEmissions() const override { return 0.0; } // Per manual
    void performDailyCheck() override;
};

#endif