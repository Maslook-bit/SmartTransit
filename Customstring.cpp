

#include "CustomString.h"
#include <iostream>

// Basic Constructor
CustomString::CustomString(const char* str) {
    if (!str) {
        length = 0;
        buffer = new char[1];
        buffer[0] = '\0';
    } else {
        length = 0;
        while (str[length] != '\0') length++;
        buffer = new char[length + 1];
        for (int i = 0; i <= length; i++) buffer[i] = str[i];
    }
}

// Assignment Operator (Safe Copying)
CustomString& CustomString::operator=(const CustomString& other) {
    if (this != &other) {
        delete[] buffer;
        length = other.length;
        buffer = new char[length + 1];
        for (int i = 0; i <= length; i++) buffer[i] = other.buffer[i];
    }
    return *this;
}

// Destructor
CustomString::~CustomString() {
    delete[] buffer;
}


// Copy Constructor implementation
CustomString::CustomString(const CustomString& other) {
    length = other.length;
    buffer = new char[length + 1];
    for (int i = 0; i <= length; i++) {
        buffer[i] = other.buffer[i];
    }
}



void CustomString::display() const {
    if (buffer) {
        std::cout << buffer;
    } else {
        std::cout << "[Empty String]";
    }
}


const char* CustomString::charData() const {
    return buffer;
}