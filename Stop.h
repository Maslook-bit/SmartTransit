#ifndef STOP_H
#define STOP_H

#include "CustomString.h"
#include "GeoCoordinate.h"

class Stop {
private:
    int stopId;
    CustomString stopName;
    GeoCoordinate position;
    bool hasShelter;

public:
    Stop(int id, CustomString name, GeoCoordinate pos, bool shelter);

    // Getters for Route calculations
    int getId() const { return stopId; }
    GeoCoordinate getPosition() const { return position; }
    void display() const;
};

#endif