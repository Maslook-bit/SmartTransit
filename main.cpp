#include <iostream>
#include "TransitManager.h"
#include "Passenger.h"
#include "RegionalManager.h"
#include "CustomDate.h"

int main() {
    TransitManager system;

    // 1. Create a Passenger (Level 1/2 logic)
    CustomDate p_dob(10, 5, 2000);
   Passenger* p1 = new Passenger(101, "Ahmad Ali", p_dob, 500.0); // FIXED: 500.0 is a double

    // 2. Create the Regional Manager (Level 5 logic!)
    CustomDate m_dob(15, 6, 1985);
    RegionalManager* boss = new RegionalManager(
        786, "Dur E Maslook", m_dob, "Operations",
        150000.0, 5, "DB-KEY-99", "Quetta"
        );

    // Add them both to the SAME array
    system.addUser(p1);
    system.addUser(boss);

    // The Magic: Polymorphism in action
    system.showAllUsers();

    return 0;
}
