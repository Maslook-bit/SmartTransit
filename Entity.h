#ifndef ENTITY_H
#define ENTITY_H

class Entity {
protected:
    int id;
    static int nextID; // This shared variable counts every object created

public:
    Entity();
    virtual ~Entity(); // Virtual destructor is MANDATORY for inheritance safety

    int getID() const { return id; }

    // Pure virtual function: This makes the class "Abstract"
    // Every class that inherits from Entity MUST implement this
    virtual void displayInfo() const = 0;
};

#endif