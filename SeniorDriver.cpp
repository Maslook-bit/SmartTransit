#include "SeniorDriver.h"
#include <iostream>

SeniorDriver::SeniorDriver(CustomString name, CustomDate dob, CustomString dept, double sal,
                           CustomString licClass, int vehicleId, int mentees, CustomString award)
    : Driver(name, dob, dept, sal, licClass, vehicleId),
    menteeCount(mentees),
    specialAward(award)
{
}

void SeniorDriver::displayInfo() const {
    std::cout << "===== SENIOR STAFF MEMBER =====" << std::endl;
    Driver::displayInfo(); // Reuses Driver -> Staff -> Person -> Entity logic

    std::cout << "Mentoring: " << menteeCount << " junior drivers" << std::endl;
    std::cout << "Special Recognition: "; specialAward.display();
    std::cout << "\nFinal Adjusted Salary: " << calculateMonthlySalary() << " PKR" << std::endl;
}

double SeniorDriver::calculateMonthlySalary() const {
    // Adds a 15% seniority bonus + 1000 per mentee
    return (salary * 1.15) + (menteeCount * 1000.0);
}