#include <iostream>
#include "Fridge.h"

int main() {
    Fridge fridge(150, 200);  // Creating a fridge with 150 power rating and 200L volume

    std::cout << "Fridge power rating: " << fridge.getPowerRating() << std::endl;
    std::cout << "Fridge volume: " << fridge.getVolume() << std::endl;

    fridge.turnOn();
    std::cout << "Is fridge on? " << (fridge.getIsOn() ? "Yes" : "No") << std::endl;

    std::cout << "Fridge power consumption: " << fridge.getPowerConsumption() << " watts" << std::endl;

    return 0;
}
