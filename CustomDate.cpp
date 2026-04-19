#include "CustomDate.h"

CustomDate::CustomDate(int d, int m, int y) : day(d), month(m), year(y) {}

bool CustomDate::isValid() const {
    if (year < 1900 || year > 2100) return false;
    if (month < 1 || month > 12) return false;
    if (day < 1 || day > 31) return false;
    // (We can add leap year logic here later!)
    return true;
}
