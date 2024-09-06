#include <iostream>
#include "Helicopter.h"

int main() {
    Helicopter heli(5690, "SkyMaster");
    std::cout << "Initial state of helicopter:" << std::endl;
    std::cout << "Name: " << heli.get_name() << std::endl;
    std::cout << "Weight: " << heli.get_weight() << std::endl;
    std::cout << "Fuel: " << heli.get_fuel() << "%" << std::endl;
    std::cout << "Number of Flights: " << heli.get_numberOfFlights() << std::endl;


    heli.fly(45, 10);
    std::cout << "\nAfter flying:" << std::endl;
    std::cout << "Fuel: " << heli.get_fuel() << "%" << std::endl;
    std::cout << "Number of Flights: " << heli.get_numberOfFlights() << std::endl;

 
    heli.set_fuel(19.0f); 
    heli.fly(30, 10);
    std::cout << "\nAfter attempting to fly with low fuel:" << std::endl;
    std::cout << "Fuel: " << heli.get_fuel() << "%" << std::endl;
    std::cout << "Number of Flights: " << heli.get_numberOfFlights() << std::endl;


    heli.refuel();
    std::cout << "\nAfter refueling:" << std::endl;
    std::cout << "Fuel: " << heli.get_fuel() << "%" << std::endl;
    heli.fly(30, 10);
    std::cout << "\nAfter flying again:" << std::endl;
    std::cout << "Fuel: " << heli.get_fuel() << "%" << std::endl;
    std::cout << "Number of Flights: " << heli.get_numberOfFlights() << std::endl;

    return 0;
}
