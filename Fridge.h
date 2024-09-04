#ifndef FRIDGE_H
#define FRIDGE_H

#include "Appliance.h"

class Fridge : public Appliance {
private:
    double volume;  // in litres

public:
    // Default constructor
    Fridge() : Appliance(), volume(0) {}

    // Parameterized constructor
    Fridge(int powerRating, double volume) : Appliance(powerRating), volume(volume) {}

    // Getter and Setter for volume
    double getVolume() const { return volume; }
    void setVolume(double volume) { this->volume = volume; }

    // Override the getPowerConsumption method
    double getPowerConsumption() const override {
        return getPowerRating() * 24 * (volume / 100);
    }
};

#endif
