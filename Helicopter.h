#ifndef HELICOPTER_H
#define HELICOPTER_H

#include <string>
#include "AirVehicle.h"

class Helicopter : public AirVehicle {
private:
    std::string name; 

public:

    Helicopter();
    

    Helicopter(int w, const std::string& n);


    std::string get_name() const;
    void set_name(const std::string& n);


    void fly(int headwind, int minutes) override;
};

#endif 
