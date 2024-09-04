#ifndef TV_H
#define TV_H

#include "Appliance.h"

class TV : public Appliance {
private:
    double screenSize;  // in inches

public:
    // Default constructor
    TV() : Appliance(), screenSize(0) {}

    // Parameterized constructor
    TV(int powerRating, double screenSize) : Appliance(powerRating), screenSize(screenSize) {}

    // Getter and Setter for screenSize
    double getScreenSize() const { return screenSize; }
    void setScreenSize(double screenSize) { this->screenSize = screenSize; }

    // Override the getPowerConsumption method
    double getPowerConsumption() const override {
        return getPowerRating() * (screenSize / 10);
    }
};

#endif
