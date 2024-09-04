#ifndef VEHICLE_H
#define VEHICLE_H

#include <ctime>

class Vehicle {
protected:
    std::time_t timeOfEntry;
    int ID;

public:
    Vehicle(int id);
    int getID() const;
    virtual int getParkingDuration() const = 0; // 纯虚函数
};

class Car : public Vehicle {
public:
    Car(int id);
    int getParkingDuration() const override;
};

class Bus : public Vehicle {
public:
    Bus(int id);
    int getParkingDuration() const override;
};

class Motorbike : public Vehicle {
public:
    Motorbike(int id);
    int getParkingDuration() const override;
};

#endif
