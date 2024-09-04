#include "Vehicle.h"
#include <iostream>
#include <vector>

int main() {
    int numVehicles;
    std::cout << "Enter the number of vehicles to park: ";
    std::cin >> numVehicles;

    std::vector<Vehicle*> vehicles;

    for (int i = 0; i < numVehicles; ++i) {
        int choice, id;
        std::cout << "Enter vehicle type (1 for Car, 2 for Bus, 3 for Motorbike): ";
        std::cin >> choice;
        std::cout << "Enter vehicle ID: ";
        std::cin >> id;

        if (choice == 1) {
            vehicles.push_back(new Car(id));
        } else if (choice == 2) {
            vehicles.push_back(new Bus(id));
        } else if (choice == 3) {
            vehicles.push_back(new Motorbike(id));
        } else {
            std::cout << "Invalid choice!" << std::endl;
            --i;  
        }
    }

    for (const auto& vehicle : vehicles) {
        std::cout << "Vehicle ID: " << vehicle->getID() 
                  << ", Parking duration (seconds): " 
                  << vehicle->getParkingDuration() << std::endl;
    }

   
    for (auto& vehicle : vehicles) {
        delete vehicle;
    }

    return 0;
}
