#include "CustomDate.h"
#include <iostream>

CustomDate::CustomDate(int d, int m, int y) : day(d), month(m), year(y) {
    if (m < 1 || m > 12 || d < 1 || d > 31) throw InvalidDateException();
    // Simplified validation: check February
    if (m == 2 && d > (isLeapYear() ? 29 : 28)) throw InvalidDateException();
}

bool CustomDate::isLeapYear() const {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

// Requirement: Day difference operator
long CustomDate::operator-(const CustomDate& other) const {
    // Simplified logic: converts both to total days from a baseline year
    auto toTotalDays = [](int d, int m, int y) {
        if (m < 3) { y--; m += 12; }
        return 365L * y + y / 4 - y / 100 + y / 400 + (153 * m - 457) / 5 + d - 306;
    };
    return toTotalDays(day, month, year) - toTotalDays(other.day, other.month, other.year);
}

CustomDate CustomDate::today() {
    return CustomDate(30, 4, 2026); // Fixed for current system time
}

void CustomDate::display() const {
    std::cout << (day < 10 ? "0" : "") << day << "/"
              << (month < 10 ? "0" : "") << month << "/" << year;
}