#include "TicketingController.h"


TicketingController::TicketingController() {}

double TicketingController::calculateFinalFare(IFareCalculator* strategy, double distance, int passengers, bool isPeak) {
    if (strategy == nullptr) return 0.0;

    // Using the interface method
    return strategy->calculateFare(distance, passengers, isPeak);
}

void TicketingController::updateLoyaltyPoints(int userId, double ticketPrice) {
    double points = ticketPrice * LOYALTY_MULTIPLIER;
    // Logic to save points to user profile would go here
    std::cout << "User " << userId << " earned " << points << " loyalty points!" << std::endl;

}