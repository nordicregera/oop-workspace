#include <iostream>
#include "AirFleet.h"

int main() {
    AirFleet fleet;

    AirVehicle** fleetArray = fleet.get_fleet();
    
    for (int i = 0; i < 5; ++i) {
        Airplane* airplane = dynamic_cast<Airplane*>(fleetArray[i]);
        Helicopter* helicopter = dynamic_cast<Helicopter*>(fleetArray[i]);
        
        if (airplane) {
            std::cout << "Airplane: Weight = " << airplane->get_weight() 
                      << ", Wingspan = " << airplane->get_fuel() << std::endl;
        } else if (helicopter) {
            std::cout << "Helicopter: Weight = " << helicopter->get_weight() 
                      << ", Model = " << helicopter->get_fuel() << std::endl;
        } else {
            std::cout << "Unknown vehicle: Weight = " << fleetArray[i]->get_weight() << std::endl;
        }
    }

    return 0;
}
