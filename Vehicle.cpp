#include "Vehicle.h"

// Vehicle类实现
Vehicle::Vehicle(int id) : ID(id) {
    timeOfEntry = std::time(nullptr);
}

int Vehicle::getID() const {
    return ID;
}

// Car类实现
Car::Car(int id) : Vehicle(id) {}

int Car::getParkingDuration() const {
    std::time_t now = std::time(nullptr);
    int duration = static_cast<int>(now - timeOfEntry);
    return static_cast<int>(duration * 0.9); // 10%减免
}

// Bus类实现
Bus::Bus(int id) : Vehicle(id) {}

int Bus::getParkingDuration() const {
    std::time_t now = std::time(nullptr);
    int duration = static_cast<int>(now - timeOfEntry);
    return static_cast<int>(duration * 0.75); // 25%减免
}

// Motorbike类实现
Motorbike::Motorbike(int id) : Vehicle(id) {}

int Motorbike::getParkingDuration() const {
    std::time_t now = std::time(nullptr);
    int duration = static_cast<int>(now - timeOfEntry);
    return static_cast<int>(duration * 0.85); // 15%减免
}
