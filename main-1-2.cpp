#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"
#include "ParkingLot.h"
#include <iostream>

int main() {
    ParkingLot lot(10);  // 停车场容量为 10

    while (true) {
        int choice;
        std::cout << "Enter 1 to park a vehicle, 2 to unpark a vehicle, or 3 to quit: ";
        std::cin >> choice;

        if (choice == 1) {
            int type, id;
            std::cout << "Enter vehicle type (1 for Car, 2 for Bus, 3 for Motorbike): ";
            std::cin >> type;
            std::cout << "Enter vehicle ID: ";
            std::cin >> id;

            Vehicle* vehicle = nullptr;
            if (type == 1) {
                vehicle = new Car(id);  // 确保类型正确
            } else if (type == 2) {
                vehicle = new Bus(id);  // 确保类型正确
            } else if (type == 3) {
                vehicle = new Motorbike(id);  // 确保类型正确
            } else {
                std::cout << "Invalid vehicle type!" << std::endl;
                continue;
            }

            if (!lot.parkVehicle(vehicle)) {
                delete vehicle;  // 如果无法停车，需要删除对象
            }

        } else if (choice == 2) {
            int id;
            std::cout << "Enter vehicle ID to unpark: ";
            std::cin >> id;
            lot.unparkVehicle(id);

        } else if (choice == 3) {
            break;
        } else {
            std::cout << "Invalid choice!" << std::endl;
        }
    }

    return 0;
}
