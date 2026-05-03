#ifndef DRIVER_H
#define DRIVER_H

#include "Staff.h"

class Driver : public Staff {
protected:
    CustomString licenseClass;      // e.g., "Heavy", "Commercial"
    int assignedVehicleId;         // Link to a Vehicle ID
    double hoursThisWeek;
    int incidentCount;

public:
    Driver(CustomString name, CustomDate dob, CustomString dept, double sal,
           CustomString licClass, int vehicleId);

    // Implementing displayInfo for Level 4 concrete role
    virtual void displayInfo() const override;

    // Helper to log work
    void logHours(double hours);
};

#endif