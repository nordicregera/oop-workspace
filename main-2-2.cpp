#include <iostream>
#include "Airplane.h"

int main() {

    Airplane plane(6000, 150);  
    std::cout << "Initial state of airplane:" << std::endl;
    std::cout << "Passengers: " << plane.get_numPassengers() << std::endl;
    std::cout << "Weight: " << plane.get_weight() << std::endl;
    std::cout << "Fuel: " << plane.get_fuel() << "%" << std::endl;
    std::cout << "Number of Flights: " << plane.get_numberOfFlights() << std::endl;

  
    plane.reducePassengers(50);
    std::cout << "\nAfter reducing passengers:" << std::endl;
    std::cout << "Passengers: " << plane.get_numPassengers() << std::endl;

   
    plane.fly(65, 120);  
    std::cout << "\nAfter flying:" << std::endl;
    std::cout << "Fuel: " << plane.get_fuel() << "%" << std::endl;
    std::cout << "Number of Flights: " << plane.get_numberOfFlights() << std::endl;


    plane.set_fuel(19.0f);
    plane.fly(30, 10);
    std::cout << "\nAfter attempting to fly with low fuel:" << std::endl;
    std::cout << "Fuel: " << plane.get_fuel() << "%" << std::endl;
    std::cout << "Number of Flights: " << plane.get_numberOfFlights() << std::endl;

 
    plane.refuel();
    std::cout << "\nAfter refueling:" << std::endl;
    std::cout << "Fuel: " << plane.get_fuel() << "%" << std::endl;
    plane.fly(30, 10);
    std::cout << "\nAfter flying again:" << std::endl;
    std::cout << "Fuel: " << plane.get_fuel() << "%" << std::endl;
    std::cout << "Number of Flights: " << plane.get_numberOfFlights() << std::endl;

    return 0;
}
