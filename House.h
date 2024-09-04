#ifndef HOUSE_H
#define HOUSE_H

#include "Appliance.h"

class House {
private:
    Appliance** appliances;
    int numAppliances;
    int capacity;

public:
    // Default constructor
    House() : appliances(nullptr), numAppliances(0), capacity(0) {}

    // Parameterized constructor
    House(int numAppliances) : numAppliances(0), capacity(numAppliances) {
        appliances = new Appliance*[capacity];
    }

    // Destructor to free memory
    ~House() {
        for (int i = 0; i < numAppliances; ++i) {
            delete appliances[i];
        }
        delete[] appliances;
    }

    // Add appliance to the house
    bool addAppliance(Appliance* appliance) {
        if (numAppliances < capacity) {
            appliances[numAppliances++] = appliance;
            return true;
        }
        return false;
    }

    // Calculate total power consumption of the house
    double getTotalPowerConsumption() const {
        double totalPower = 0;
        for (int i = 0; i < numAppliances; ++i) {
            totalPower += appliances[i]->getPowerConsumption();
        }
        return totalPower;
    }
};

#endif
