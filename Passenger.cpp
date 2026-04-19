#include "Passenger.h"
#include <iostream>

// Use the Colon (:) to pass data up to the Person class
Passenger::Passenger(int _id, CustomString _name, CustomDate _dob, double _balance)
    : Person(_id, _name, _dob), balance(_balance) {}

void Passenger::displayDetails() {
    std::cout << "--- Passenger Details ---" << std::endl;
    std::cout << "ID: " << id << std::endl;
    // Note: We will add a display method to CustomString soon to show the name
    std::cout << "Balance: " << balance << " PKR" << std::endl;
}

void Passenger::addBalance(double amount) {
    if (amount > 0) {
        balance += amount;
    }
}