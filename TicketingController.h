#ifndef TICKETINGCONTROLLER_H
#define TICKETINGCONTROLLER_H

#include "IFareCalculator.h"
#include "CustomString.h" // Using your custom class

class TicketingController {
private:
    static constexpr double LOYALTY_MULTIPLIER = 0.1; // No magic numbers

public:
    TicketingController();

    // Calculates fare using the polymorphism we built
    double calculateFinalFare(IFareCalculator* strategy, double distance, int passengers, bool isPeak);

    // Placeholder for loyalty logic mentioned in Table 1
    void updateLoyaltyPoints(int userId, double ticketPrice);
};

#endif