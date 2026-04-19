#ifndef CUSTOMTIME_H
#define CUSTOMTIME_H

class CustomTime {
private:
    int hour;   // 0-23
    int minute; // 0-59

public:
    CustomTime(int h = 0, int m = 0);
    bool isValid() const;
    // We can add "calculateTravelTime" logic here later
};

#endif