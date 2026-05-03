#ifndef SENIORDRIVER_H
#define SENIORDRIVER_H

#include "Driver.h"

class SeniorDriver : public Driver {
private:
    int menteeCount;
    CustomString specialAward;

public:
    SeniorDriver(CustomString name, CustomDate dob, CustomString dept, double sal,
                 CustomString licClass, int vehicleId, int mentees, CustomString award);

    // Final override for the 5-level hierarchy
    void displayInfo() const override;

    // Level 5 specific logic: adds a seniority bonus to the base salary
    double calculateMonthlySalary() const;
};

#endif