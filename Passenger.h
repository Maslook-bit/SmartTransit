#ifndef PASSENGER_H
#define PASSENGER_H

#include "Person.h"
#include "DynamicArray.h"

class Passenger : public Person {
private:
    double balance;
    // DynamicArray<CustomString> tripHistory; // We can add this once trips are ready!

public:
    Passenger(int _id, CustomString _name, CustomDate _dob, double _balance);

    // Implementing the 'Contract' from the Person class
    void displayDetails() override;

    void addBalance(double amount);
};

#endif