#include "Helicopter.h"
#include <cmath>  


Helicopter::Helicopter() : AirVehicle(), name("") {}


Helicopter::Helicopter(int w, const std::string& n) : AirVehicle(w), name(n) {}


std::string Helicopter::get_name() const {
    return name;
}


void Helicopter::set_name(const std::string& n) {
    name = n;
}


void Helicopter::fly(int headwind, int minutes) {
    if (get_fuel() < 20.0f) {
        return;
    }


    float fuelConsumptionPerMinute = (headwind >= 40) ? 0.4f : 0.18f;

    float extraFuelConsumption = (get_weight() > 5670) ? 0.01f * (get_weight() - 5670) : 0.0f;
    fuelConsumptionPerMinute += extraFuelConsumption;


    float totalFuelConsumption = fuelConsumptionPerMinute * minutes;

    if (get_fuel() - totalFuelConsumption < 20.0f) {

        return;
    }

   
    set_fuel(get_fuel() - totalFuelConsumption);
    set_numberOfFlights(get_numberOfFlights() + 1);
}
