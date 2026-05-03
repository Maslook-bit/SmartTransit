#include "AppController.h"
#include <iostream>

AppController::AppController() {
    // Initialize sub-controllers
    fleetCtrl = new FleetController();
    ticketCtrl = new TicketingController();
}

AppController& AppController::getInstance() {
    // This static instance is created only once
    static AppController instance;
    return instance;
}

void AppController::initialize() {
    std::cout << "SmartTransit EMS Initializing..." << std::endl;
    // Here you would load your files or set up initial data
}

void AppController::run() {
    std::cout << "System is now running." << std::endl;
}