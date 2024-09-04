#include "ParkingLot.h"
#include <iostream>
#include <ctime>

ParkingLot::ParkingLot(int capacity) : maxCapacity(capacity), currentCount(0) {}

bool ParkingLot::parkVehicle(Vehicle* vehicle) {
    if (currentCount < maxCapacity) {
        vehicles.push_back(vehicle);
        currentCount++;
        return true;
    } else {
        std::cout << "The lot is full" << std::endl;
        return false;
    }
}

void ParkingLot::unparkVehicle(int id) {
    for (int i = 0; i < currentCount; ++i) {
        if (vehicles[i]->getID() == id) {
            vehicles.erase(vehicles.begin() + i);
            currentCount--;
            std::cout << "Vehicle " << id << " removed from the lot" << std::endl;
            return;
        }
    }
    std::cout << "Vehicle not in the lot" << std::endl;
}

int ParkingLot::getCount() const {
    return currentCount;
}

// 实现 countOverstayingVehicles 函数
int ParkingLot::countOverstayingVehicles(int maxParkingDuration) const {
    int count = 0;
    std::time_t now = std::time(nullptr);
    for (const auto& vehicle : vehicles) {
        int duration = static_cast<int>(now - vehicle->getParkingDuration());
        if (duration > maxParkingDuration) {
            count++;
        }
    }
    return count;
}
