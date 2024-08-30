#include "musicshop.h"
#include <iostream>


musicshop::musicshop() : max_size(0), current_numbers(0), numbers(nullptr) {}


musicshop::musicshop(int size) : max_size(size), current_numbers(0) {
    numbers = new classname[max_size];
}


musicshop::~musicshop() {
    delete[] numbers;
}


int musicshop::get_current_number_of_Instrument() {
    return current_numbers;
}


bool musicshop::has_brandname(std::string brandname) {
    for (int i = 0; i < current_numbers; i++) {
        if (numbers[i].get_brandname() == brandname) {
            return true;
        }
    }
    return false;
}


bool musicshop::has_type(std::string type) {
    for (int i = 0; i < current_numbers; i++) {
        if (numbers[i].get_type() == type) {
            return true;
        }
    }
    return false;
}


Instrument* musicshop::get_numbers() {
    return numbers;
}


bool musicshop::add_Instrument(Instrument new_Instrument) {
    if (current_numbers < max_size) {
        members[current_numbers] = new_Instrument;
        current_numbers++;
        return true;
    }
    return false;
}
