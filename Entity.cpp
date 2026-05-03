#include "Entity.h"

// Initialize the static counter at 1
int Entity::nextID = 1;

Entity::Entity() {
    id = nextID++; // Assign current ID and then increment for the next object
}

Entity::~Entity() {
    // Nothing to delete here, but the virtual destructor
    // ensures child classes clean up properly.
}