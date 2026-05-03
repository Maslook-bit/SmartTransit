#include "CustomString.h"
#include <cstring>

CustomString::CustomString() : buffer(new char[1]{'\0'}), len(0) {}

CustomString::CustomString(const char* str) {
    len = str ? strlen(str) : 0;
    buffer = new char[len + 1];
    if (str) strcpy(buffer, str);
    else buffer[0] = '\0';
}

CustomString::CustomString(const CustomString& other) : len(other.len) {
    buffer = new char[len + 1];
    strcpy(buffer, other.buffer);
}

CustomString::CustomString(CustomString&& other) noexcept : buffer(other.buffer), len(other.len) {
    other.buffer = nullptr;
    other.len = 0;
}

CustomString::~CustomString() { delete[] buffer; }

void CustomString::toUpperCase() {
    for (int i = 0; i < len; i++) {
        if (buffer[i] >= 'a' && buffer[i] <= 'z') buffer[i] -= 32;
    }
}

void CustomString::display() const { std::cout << buffer; }

// Lexicographical comparison for sorting
bool CustomString::operator<(const CustomString& other) const {
    return strcmp(buffer, other.buffer) < 0;
}