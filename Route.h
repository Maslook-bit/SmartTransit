#ifndef ROUTE_H
#define ROUTE_H

#include "Stop.h"
#include "CustomString.h"

class Route {
private:
    int routeId;
    CustomString routeName;
    Stop* stops[10]; // Simple array to avoid LinkedList complexity for now
    int currentStopCount;

public:
    Route(int id, CustomString name);
    void addStop(Stop* newStop);
    void displayRouteInfo() const;
};

#endif