#ifndef CUSTOMSTRING_H
#define CUSTOMSTRING_H

class CustomString {
private:
    char* buffer;  // This is what the .cpp is looking for!
    int length;    // And this!

public:
    CustomString(const char* str = nullptr);
    CustomString(const CustomString& other);// Copy Constructor
    ~CustomString();
    void display() const;
    const char* charData() const;

    CustomString& operator=(const CustomString& other);

    int getLength() const { return length; }
    const char* c_str() const { return buffer; }

};

#endif
