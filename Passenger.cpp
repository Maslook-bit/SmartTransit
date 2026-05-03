#include "Passenger.h"
#include <iostream>

Passenger::Passenger(CustomString name, CustomDate dob, double bal, CustomString type)
    : Person(name, dob), balance(bal), membershipType(type)
{
    // The initializer list above now works because membershipType is in the .h file
}

void Passenger::displayInfo() const {
    std::cout << "Passenger ID: " << id << "\n"
              << "Name: "; name.display();
    std::cout << "\nMembership: "; membershipType.display(); // Error here will disappear
    std::cout << "\nBalance: " << balance << " PKR";
    std::cout << "\n-------------------" << std::endl;
}