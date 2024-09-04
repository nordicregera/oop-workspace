#include "ParkingLot.h"
#include <iostream>
#include <ctime>

ParkingLot::ParkingLot(int capacity) : maxCapacity(capacity), currentCount(0) {}

// 停车功能
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

// 移除车辆功能
void ParkingLot::unparkVehicle(int id) {
    for (int i = 0; i < currentCount; ++i) {
        if (vehicles[i]->getID() == id) {
            vehicles.erase(vehicles.begin() + i);  // 从停车场中移除车辆
            currentCount--;
            return;  // 不输出移除信息
        }
    }
    std::cout << "Vehicle not in the lot" << std::endl;  // 车辆不在停车场时输出
}

// 获取当前停车场中的车辆数量
int ParkingLot::getCount() const {
    return currentCount;
}

// 统计超时停车的车辆
int ParkingLot::countOverstayingVehicles(int maxParkingDuration) const {
    int count = 0;
    std::time_t now = std::time(nullptr);  // 获取当前时间
    for (const auto& vehicle : vehicles) {
        int duration = static_cast<int>(now - vehicle->getParkingDuration());
        if (duration > maxParkingDuration) {
            count++;
        }
    }
    return count;
}
