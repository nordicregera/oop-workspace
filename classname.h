#ifndef classname_H
#define classname_H

#include "Instrument.h"

class classname {
private:
    int max_size;          
    int current_number;   
    Instrument* number;      

public:
   
    classname();

   
    classname(int size);

   
    ~classname();

    
    int get_current_number_of_numbers();

    
    bool has_brandname(std::string brandname);

    bool has_type(std::string type);

   
    Instrument* get_numbers();

   
    bool add_Instrument(Instrument new_Instrument);
};

#endif 
