#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"
#include "ParkingLot.h"
#include <iostream>

int main() {
    ParkingLot lot(10);  // 停车场容量为 10

    // 停车 5 辆汽车
    for (int i = 0; i < 5; ++i) {
        lot.parkVehicle(new Car(i + 1));
    }

    // 停车 3 辆巴士
    for (int i = 0; i < 3; ++i) {
        lot.parkVehicle(new Bus(i + 6));
    }

    // 停车 2 辆摩托车
    for (int i = 0; i < 2; ++i) {
        lot.parkVehicle(new Motorbike(i + 9));
    }


    int maxParkingDuration = 15;  
    int overstayingVehicles = lot.countOverstayingVehicles(maxParkingDuration);
    std::cout << "Number of overstaying vehicles: " << overstayingVehicles << std::endl;

    return 0;
}

