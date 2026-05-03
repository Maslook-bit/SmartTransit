#include "Route.h"
#include <iostream>

Route::Route(int id, CustomString name)
    : routeId(id), routeName(name), currentStopCount(0) {}

void Route::addStop(Stop* newStop) {
    if (currentStopCount < 10) {
        stops[currentStopCount++] = newStop;
    }
}

void Route::displayRouteInfo() const {
    std::cout << "Route ID: " << routeId << " | Name: ";
    routeName.display();
    std::cout << "\nStops recorded: " << currentStopCount << std::endl;
}