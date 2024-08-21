#include "Orchestra.h"
#include <iostream>


Orchestra::Orchestra() : max_size(0), current_members(0), members(nullptr) {}


Orchestra::Orchestra(int size) : max_size(size), current_members(0) {
    members = new Musician[max_size];
}


Orchestra::~Orchestra() {
    delete[] members;
}


int Orchestra::get_current_number_of_members() {
    return current_members;
}


bool Orchestra::has_instrument(std::string instrument) {
    for (int i = 0; i < current_members; i++) {
        if (members[i].get_instrument() == instrument) {
            return true;
        }
    }
    return false;
}


Musician* Orchestra::get_members() {
    return members;
}


bool Orchestra::add_musician(Musician new_musician) {
    if (current_members < max_size) {
        members[current_members] = new_musician;
        current_members++;
        return true;
    }
    return false;
}
