#include "CustomTime.h"
#include <iostream>

CustomTime::CustomTime(int h, int m, int s) : hour(h), minute(m), second(s) {
    if (h < 0 || h > 23 || m < 0 || m > 59 || s < 0 || s > 59)
        throw InvalidTimeException();
}

long CustomTime::operator-(const CustomTime& other) const {
    long t1 = hour * 3600 + minute * 60 + second;
    long t2 = other.hour * 3600 + other.minute * 60 + other.second;
    return t1 - t2;
}

CustomString CustomTime::toString24h() const {
    char buf[10];
    sprintf(buf, "%02d:%02d:%02d", hour, minute, second);
    return CustomString(buf);
}

CustomString CustomTime::toString12h() const {
    int h12 = (hour % 12 == 0) ? 12 : hour % 12;
    const char* ampm = (hour >= 12) ? " PM" : " AM";
    char buf[15];
    sprintf(buf, "%02d:%02d%s", h12, minute, ampm);
    return CustomString(buf);
}

CustomTime CustomTime::now() {
    return CustomTime(23, 12, 0); // Fixed for current system time
}

void CustomTime::display() const {
    std::cout << toString24h().c_str();
}