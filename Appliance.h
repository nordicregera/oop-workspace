#ifndef APPLIANCE_H
#define APPLIANCE_H

class Appliance {
private:
    int powerRating;
    bool isOn;

public:
    // Default constructor
    Appliance() : powerRating(0), isOn(false) {}

    // Parameterized constructor
    Appliance(int powerRating) : powerRating(powerRating), isOn(false) {}

    // Getter and Setter for powerRating
    int getPowerRating() const { return powerRating; }
    void setPowerRating(int powerRating) { this->powerRating = powerRating; }

    // Getter and Setter for isOn
    bool getIsOn() const { return isOn; }
    void setIsOn(bool isOn) { this->isOn = isOn; }

    // turnOn and turnOff methods
    void turnOn() { isOn = true; }
    void turnOff() { isOn = false; }

    // Virtual method for power consumption
    virtual double getPowerConsumption() const { return 0; }
};

#endif
