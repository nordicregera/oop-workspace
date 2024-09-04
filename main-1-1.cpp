#include <iostream>
#include "Appliance.h"

int main() {
    Appliance app(100);  // Creating appliance with 100 power rating

    std::cout << "Initial power rating: " << app.getPowerRating() << std::endl;
    std::cout << "Is appliance on? " << (app.getIsOn() ? "Yes" : "No") << std::endl;

    app.turnOn();
    std::cout << "After turning on, is appliance on? " << (app.getIsOn() ? "Yes" : "No") << std::endl;

    std::cout << "Power consumption: " << app.getPowerConsumption() << std::endl;

    return 0;
}
