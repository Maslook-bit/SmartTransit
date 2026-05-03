#include "CityBus.h"
#include <iostream>

CityBus::CityBus(CustomString code, CustomDate pDate, double val, GeoCoordinate loc,
                 CustomString reg, int cap, CustomString busNo, int route, bool ac)
    : Vehicle(code, pDate, val, loc, reg, cap), busNumber(busNo), routeId(route), isAirConditioned(ac) {}

void CityBus::displayInfo() const {
    std::cout << "--- City Bus ---" << std::endl;
    // Basic vehicle info inherited
    std::cout << "Bus No: "; busNumber.display();
    std::cout << "\nRoute: " << routeId << (isAirConditioned ? " (AC)" : " (No AC)") << std::endl;
}

double CityBus::getFuelCostPerKm() const { return 25.5; } // Simple flat rate
double CityBus::calculateEmissions() const { return 1.2; } // Fixed diesel value
void CityBus::performDailyCheck() { std::cout << "Tyres and Brakes checked.\n"; }