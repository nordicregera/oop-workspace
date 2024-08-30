#include "Instrument.h"


Instrument::Instrument() :brandname("null"), type ("null"),serialcode(0) {}


Instrument::Instrument(std::string brandname,string type, int serialcode)
    : brandname(brandname), type(type) ,serialcode(serialcode),{}


std::string Instrument::get_brandname() const {
    return brandname;
}

std::string Instrument::get_type() const{
    return type;
}


int Instrument::get_serialcode() const {
    return serialcode;
}
