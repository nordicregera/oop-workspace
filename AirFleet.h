#ifndef AIRFLEET_H
#define AIRFLEET_H

#include "AirVehicle.h"
#include "Airplane.h"
#include "Helicopter.h"

class AirFleet {
private:
    AirVehicle* fleet[5];

public:
    AirFleet();
    ~AirFleet();
    AirVehicle** get_fleet();
};

#endif 
