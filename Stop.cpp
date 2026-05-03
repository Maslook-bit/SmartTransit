#include "Stop.h"
#include <iostream>


Stop::Stop(int id, CustomString name, GeoCoordinate pos, bool shelter)
    : stopId(id), stopName(name), position(pos), hasShelter(shelter)
{
}

void Stop::display() const {
    // 1. Display the CustomString name using its method
    stopName.display();

    // 2. Safe streaming:
    // .c_str() converts the string to a format cout handles without errors.
    std::cout << " [" << position.toString().c_str() << "]";

    // 3. Shelter status check
    if (hasShelter) {
        std::cout << " (Sheltered)";
    }
}