#include "TransitAsset.h"
#include <iostream>

TransitAsset::TransitAsset(CustomString _code, CustomDate _pDate, double _val, GeoCoordinate _loc)
    : Entity(), assetCode(_code), purchaseDate(_pDate), purchaseValue(_val), location(_loc) {}

void TransitAsset::displayInfo() const {
    std::cout << "Asset Code: "; assetCode.display();
    std::cout << "\nPurchase Date: "; purchaseDate.display();
    std::cout << "\nValue: " << purchaseValue << " PKR" << std::endl;
    std::cout << "Location: " << location.toString().c_str() << std::endl;
}

long TransitAsset::getAgeInDays() const {
    // Uses the CustomDate operator- we built for the Utility Layer custom date!
    return CustomDate::today() - purchaseDate;
}