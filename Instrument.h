#ifndef Instrument_H
#define Instrument_H

#include <string>

class Instrument {
private:
    std::string brandname; 
    std::string type; 
    int serialcodenumber;          

public:
   
    Instrument();

   
    Instrument(std::string brandname,std::string type, int serialcode );

    std::string get_brand() const;

    std::string get_type() const;  

    int get_serialcode() const; 
};

#endif 

