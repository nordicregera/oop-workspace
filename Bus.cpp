#include "Bus.h"

// Bus constructor
Bus::Bus(int id) : Vehicle(id) {}

int Bus::getParkingDuration() const {
    std::time_t now = std::time(nullptr);
    int duration = static_cast<int>(now - timeOfEntry);
    return static_cast<int>(duration * 0.75); // 25% reduction
}
