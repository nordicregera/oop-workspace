#ifndef PARKINGLOT_H
#define PARKINGLOT_H

#include "Vehicle.h"
#include <vector>

class ParkingLot {
private:
    int maxCapacity;
    int currentCount;
    std::vector<Vehicle*> vehicles;

public:
    ParkingLot(int capacity);
    bool parkVehicle(Vehicle* vehicle);
    void unparkVehicle(int id);
    int getCount() const;
    int countOverstayingVehicles(int maxParkingDuration) const;
};

#endif
