#ifndef APPCONTROLLER_H
#define APPCONTROLLER_H

#include "FleetController.h" // We will make this next
#include "TicketingController.h"

class AppController {
private:
    // Private constructor: Nobody else can "new" this class
    AppController();

    // Member controllers owned by the AppController
    FleetController* fleetCtrl;
    TicketingController* ticketCtrl;

public:
    // The only way to get the instance
    static AppController& getInstance();

    // Delete copy constructor and assignment to keep it a Singleton
    AppController(const AppController&) = delete;
    void operator=(const AppController&) = delete;

    void initialize();
    void run();

    // Getters for the sub-controllers
    FleetController* getFleet() { return fleetCtrl; }
};

#endif