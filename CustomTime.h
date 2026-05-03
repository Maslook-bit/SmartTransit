#ifndef CUSTOMTIME_H
#define CUSTOMTIME_H

#include "CustomExceptions.h"
#include "CustomString.h"

class CustomTime {
private:
    int hour, minute, second;

public:
    // Constructor must throw InvalidTimeException
    CustomTime(int h = 0, int m = 0, int s = 0);

    // Operators
    long operator-(const CustomTime& other) const; // Seconds difference
    CustomTime operator+(int secs) const;          // Add N seconds
    CustomTime& operator++();                      // Increment second
    bool operator==(const CustomTime& other) const;
    bool operator<(const CustomTime& other) const;

    // Methods
    CustomString toString12h() const;
    CustomString toString24h() const;
    static CustomTime fromString(CustomString s);
    static CustomTime now();

    void display() const;
};

#endif