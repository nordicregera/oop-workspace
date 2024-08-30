#ifndef Instrument_H
#define Instrument_H

#include <string>

class Instrument_H {
private:
    std::string brandname; 
    std::string type; 
    int serialcodenumber;          

public:
   
    Instrument_H();

   
    Instrument(std::string brandname,std::string tyoe, int serialcode );

    std::string get_brand() const;

    std::string get_Tyoe() const;  

    int get_serialcode() const; 
};

#endif 

