#ifndef CUSTOMSTRING_H
#define CUSTOMSTRING_H
#include <iostream>

class CustomString {
private:
    char* buffer;
    int len;

public:
    CustomString();
    CustomString(const char* str);
    CustomString(const CustomString& other); // Copy
    CustomString(CustomString&& other) noexcept; // Move
    ~CustomString();

    // Required Operators
    CustomString& operator=(const CustomString& other);
    CustomString& operator=(CustomString&& other) noexcept;
    CustomString operator+(const CustomString& other) const;
    bool operator==(const CustomString& other) const;
    bool operator<(const CustomString& other) const; // Lexicographical
    char& operator[](int index);

    // Required Methods
    int length() const { return len; }
    bool isEmpty() const { return len == 0; }
    void toUpperCase();
    void trim();
    int split(const char* delim, CustomString* out, int max) const;
    const char* c_str() const { return buffer; }
    void display() const;
};
#endif