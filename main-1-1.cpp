#include <iostream>
#include "Instrument.h"

int main() {
  
    Instrument m1;
    std::cout << "Default brandname: " << m1.get_brand() << ", Default type: " << m1.get_type() << ",Default serialcode:"<< m1.get_serialcode()<< std::endl;


    Instrument m2("sony","piano", 5);
    std::cout << "brandname: " << m2.get_brand() << ", type: " << m2.get_type() << ", serialcode: "<< std::endl;

    return 0;
}