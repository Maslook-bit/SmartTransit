#ifndef CUSTOMDATE_H
#define CUSTOMDATE_H

#include "CustomExceptions.h"
#include "CustomString.h"

class CustomDate {
private:
    int day, month, year;

public:
    // Constructor must throw InvalidDateException for impossible values
    CustomDate(int d = 1, int m = 1, int y = 2000);

    // Operators
    long operator-(const CustomDate& other) const; // Day difference
    CustomDate operator+(int days) const;          // Add N days
    CustomDate& operator++();                      // Prefix increment
    bool operator==(const CustomDate& other) const;
    bool operator<(const CustomDate& other) const;
    bool operator<=(const CustomDate& other) const;
    bool operator>(const CustomDate& other) const;
    bool operator>=(const CustomDate& other) const;

    // Methods
    bool isLeapYear() const;
    int getDayOfWeek() const; // 0=Sun, 1=Mon...
    void addMonths(int months);
    bool isWeekend() const;
    CustomString toString() const;
    static CustomDate fromString(CustomString s);
    static CustomDate today(); // Static factory

    void display() const;
};

#endif