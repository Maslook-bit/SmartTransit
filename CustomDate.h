#ifndef CUSTOMDATE_H
#define CUSTOMDATE_H

class CustomDate {
private:
    int day, month, year;

public:
    CustomDate(int d = 1, int m = 1, int y = 2026);

    // To show the date in the GUI later
    void setDate(int d, int m, int y);
    bool isValid() const;

    // Extensibility: We'll need to compare dates for bus maintenance
    bool isBefore(const CustomDate& other) const;
};

#endif