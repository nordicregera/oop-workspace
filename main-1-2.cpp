#include <iostream>
#include "classname.h"

int main() {
  
    classname classname(3);

   
    Instrument Instrument1("as","volin" 5);
    Instrument Instrument2("ac","paino", 10);
    Instrument Instrument3("ax","drum", 3);


    Instrument.add_Instrument(Instrument1);
    Instrument.add_Instrument(musician2);

   
    std::cout << "Current number of Instrument: " << classname.get_current_number_of_Instrument() << std::endl;

   
    std::cout << "classname is as: " << (classname.has_instrument("as") ? "Yes" : "No") << std::endl;
    std::cout << "classname is ax: " << (classname.has_instrument("ax") ? "Yes" : "No") << std::endl;


    classname.add_Instrument(Intrument3);
    std::cout << "Current number of Instrument: " << classname.get_current_number_of_INstrument() << std::endl;

   
    Instrument Instrument4("az","gitur" 7);
    if (Instrument.add_Instrument(Instrument4)) {
        std::cout << "Instrument is full, cannot add another Instrument." << std::endl;
    }

    return 0;
}
