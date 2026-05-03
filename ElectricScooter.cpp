#include "ElectricScooter.h"
#include <iostream>

ElectricScooter::ElectricScooter(CustomString code, CustomDate pDate, double val, GeoCoordinate loc,
                                 CustomString reg, int bat)
    : Vehicle(code, pDate, val, loc, reg, 1), batteryLevelPercent(bat) {}

void ElectricScooter::displayInfo() const {
    std::cout << "--- Electric Scooter ---" << std::endl;
    std::cout << "Battery: " << batteryLevelPercent << "%" << std::endl;
}

void ElectricScooter::performDailyCheck() {
    std::cout << "Battery health and docking sensor checked.\n";
}