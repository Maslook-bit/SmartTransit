#include "GeoCoordinate.h"
#include <cmath>

#define PI 3.14159265358979323846
#define EARTH_RADIUS_KM 6371.0

GeoCoordinate::GeoCoordinate(double lat, double lon) : latitude(lat), longitude(lon) {}

bool GeoCoordinate::isValid() const {
    return (latitude >= -90.0 && latitude <= 90.0 && longitude >= -180.0 && longitude <= 180.0);
}

double GeoCoordinate::distanceTo(const GeoCoordinate& other) const {
    double dLat = (other.latitude - latitude) * PI / 180.0;
    double dLon = (other.longitude - longitude) * PI / 180.0;
    double a = sin(dLat/2) * sin(dLat/2) +
               cos(latitude * PI / 180.0) * cos(other.latitude * PI / 180.0) *
                   sin(dLon/2) * sin(dLon/2);
    return EARTH_RADIUS_KM * (2 * atan2(sqrt(a), sqrt(1-a)));
}

double GeoCoordinate::bearingTo(const GeoCoordinate& other) const {
    double dLon = (other.longitude - longitude) * PI / 180.0;
    double y = sin(dLon) * cos(other.latitude * PI / 180.0);
    double x = cos(latitude * PI / 180.0) * sin(other.latitude * PI / 180.0) -
               sin(latitude * PI / 180.0) * cos(other.latitude * PI / 180.0) * cos(dLon);
    return fmod((atan2(y, x) * 180.0 / PI + 360.0), 360.0);
}

double GeoCoordinate::operator-(const GeoCoordinate& other) const {
    return distanceTo(other);


    }
CustomString GeoCoordinate::toString() const {
    char buffer[64];
    // Formats coordinates into a readable string
    snprintf(buffer, sizeof(buffer), "Lat: %.4f, Lon: %.4f", latitude, longitude);
    return CustomString(buffer);
}