#ifndef TRANSITASSET_H
#define TRANSITASSET_H
#include "CustomDate.h"

#include "Entity.h"
#include "GeoCoordinate.h"

class TransitAsset : public Entity {
protected:
    CustomString assetCode;
    CustomDate purchaseDate;
    double purchaseValue;
    GeoCoordinate location;

public:
    TransitAsset(CustomString _code, CustomDate _pDate, double _val, GeoCoordinate _loc);

    virtual void displayInfo() const override;

    // Logic to satisfy the requirement: "Calculate age in days"
    long getAgeInDays() const;
};

#endif