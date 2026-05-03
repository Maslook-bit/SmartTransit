#ifndef PASSENGER_H
#define PASSENGER_H

#include "Person.h"

class Passenger : public Person {
private:
    double balance;
    CustomString membershipType; // Changed from ticketType to match .cpp

public:
    // Ensure this signature matches the .cpp exactly
    Passenger(CustomString name, CustomDate dob, double bal, CustomString type);

    void displayInfo() const override;
    void addBalance(double amount);
};

#endif