#include "Airplane.h"


Airplane::Airplane() : AirVehicle(), numPassengers(0) {}


Airplane::Airplane(int w, int p) : AirVehicle(w), numPassengers(p) {}


void Airplane::reducePassengers(int x) {
    numPassengers -= x;
    if (numPassengers < 0) {
        numPassengers = 0;
    }
}


int Airplane::get_numPassengers() const {
    return numPassengers;
}

void Airplane::fly(int headwind, int minutes) {
    if (get_fuel() < 20.0f) {
      
        return;
    }


    float fuelConsumptionPerMinute = (headwind >= 60) ? 0.5f : 0.25f;
   
    float extraFuelConsumption = 0.001f * numPassengers;

    fuelConsumptionPerMinute += extraFuelConsumption;


    float totalFuelConsumption = fuelConsumptionPerMinute * minutes;

    if (get_fuel() - totalFuelConsumption < 20.0f) {

        return;
    }

    
    set_fuel(get_fuel() - totalFuelConsumption);
    set_numberOfFlights(get_numberOfFlights() + 1);
}
