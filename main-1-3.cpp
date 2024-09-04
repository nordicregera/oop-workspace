#include "ParkingLot.h"
#include "Vehicle.h"
#include <iostream>

int main() {
    ParkingLot lot(10); 

    for (int i = 0; i < 5; ++i) {
        lot.parkVehicle(new Car(i + 1));
    }
    for (int i = 0; i < 3; ++i) {
        lot.parkVehicle(new Bus(i + 6));
    }
    for (int i = 0; i < 2; ++i) {
        lot.parkVehicle(new Motorbike(i + 9));
    }

   
    int maxParkingDuration = 15;  
    int overstayingVehicles = lot.countOverstayingVehicles(maxParkingDuration);
    std::cout << "Number of overstaying vehicles: " << overstayingVehicles << std::endl;

    return 0;
}
