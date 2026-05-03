#include "Driver.h"
#include <iostream>

Driver::Driver(CustomString name, CustomDate dob, CustomString dept, double sal,
               CustomString licClass, int vehicleId)
    : Staff(name, dob, dept, sal),
    licenseClass(licClass),
    assignedVehicleId(vehicleId),
    hoursThisWeek(0.0),
    incidentCount(0)
{
}

void Driver::displayInfo() const {
    std::cout << "--- Driver Profile ---\n";
    Staff::displayInfo(); // Reuse Staff display for Name/ID/Dept/Salary

    std::cout << "License Class: "; licenseClass.display();
    std::cout << "\nAssigned Vehicle ID: " << assignedVehicleId;
    std::cout << "\nWeekly Hours: " << hoursThisWeek;
    std::cout << "\nIncidents: " << incidentCount << "\n";
    std::cout << "----------------------" << std::endl;
}

void Driver::logHours(double hours) {
    if (hours > 0) hoursThisWeek += hours;
}