#include <iostream>
#include "TV.h"

int main() {
    TV tv(200, 42);  // Creating a TV with 200 power rating and 42 inches screen size

    std::cout << "TV power rating: " << tv.getPowerRating() << std::endl;
    std::cout << "TV screen size: " << tv.getScreenSize() << std::endl;

    tv.turnOn();
    std::cout << "Is TV on? " << (tv.getIsOn() ? "Yes" : "No") << std::endl;

    std::cout << "TV power consumption: " << tv.getPowerConsumption() << " watts" << std::endl;

    return 0;
}
