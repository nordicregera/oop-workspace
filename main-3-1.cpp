#include <iostream>
#include "House.h"
#include "Fridge.h"
#include "TV.h"

int main() {
    House house(2);  // A house with space for 2 appliances

    Fridge* fridge = new Fridge(150, 300);  // Fridge with power rating 150 and volume 300
    TV* tv = new TV(100, 50);  // TV with power rating 100 and screen size 50

    house.addAppliance(fridge);
    house.addAppliance(tv);

    std::cout << "Total power consumption of the house: " << house.getTotalPowerConsumption() << " watts" << std::endl;

    return 0;
}
