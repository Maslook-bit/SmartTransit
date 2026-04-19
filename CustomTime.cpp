#include "CustomTime.h"

CustomTime::CustomTime(int h, int m) : hour(h), minute(m) {}

bool CustomTime::isValid() const {
    return (hour >= 0 && hour < 24 && minute >= 0 && minute < 60);
}

