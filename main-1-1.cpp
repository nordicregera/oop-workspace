#include <iostream>
#include "AirVehicle.h"

int main() {
   
    AirVehicle av1;
    std::cout << "Initial state of av1:" << std::endl;
    std::cout << "Weight: " << av1.get_weight() << std::endl;
    std::cout << "Fuel: " << av1.get_fuel() << "%" << std::endl;
    std::cout << "Number of Flights: " << av1.get_numberOfFlights() << std::endl;
    
  
    AirVehicle av2(5000);
    std::cout << "\nInitial state of av2:" << std::endl;
    std::cout << "Weight: " << av2.get_weight() << std::endl;
    std::cout << "Fuel: " << av2.get_fuel() << "%" << std::endl;
    std::cout << "Number of Flights: " << av2.get_numberOfFlights() << std::endl;


    av2.fly(50, 120);
    std::cout << "\nAfter flying with av2:" << std::endl;
    std::cout << "Fuel: " << av2.get_fuel() << "%" << std::endl;
    std::cout << "Number of Flights: " << av2.get_numberOfFlights() << std::endl;


    av2.refuel();
    std::cout << "\nAfter refueling av2:" << std::endl;
    std::cout << "Fuel: " << av2.get_fuel() << "%" << std::endl;

    return 0;
}
