#ifndef GEOCOORDINATE_H
#define GEOCOORDINATE_H

#include "CustomString.h"

class GeoCoordinate {
private:
    double latitude;  // [-90, 90]
    double longitude; // [-180, 180]

public:
    GeoCoordinate(double lat = 0.0, double lon = 0.0);

    // Required Operators
    bool operator==(const GeoCoordinate& other) const;
    bool operator!=(const GeoCoordinate& other) const;
    double operator-(const GeoCoordinate& other) const; // Returns distance in km

    // Required Methods
    double distanceTo(const GeoCoordinate& other) const;
    double bearingTo(const GeoCoordinate& other) const;
    CustomString toString() const;
    bool isValid() const;
};

#endif