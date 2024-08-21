#include <iostream>
#include "Orchestra.h"

int main() {
  
    Orchestra orchestra(3);

   
    Musician musician1("Violin", 5);
    Musician musician2("Piano", 10);
    Musician musician3("Flute", 3);


    orchestra.add_musician(musician1);
    orchestra.add_musician(musician2);

   
    std::cout << "Current number of members: " << orchestra.get_current_number_of_members() << std::endl;

   
    std::cout << "Orchestra has a violin: " << (orchestra.has_instrument("Violin") ? "Yes" : "No") << std::endl;
    std::cout << "Orchestra has a guitar: " << (orchestra.has_instrument("Guitar") ? "Yes" : "No") << std::endl;


    orchestra.add_musician(musician3);
    std::cout << "Current number of members: " << orchestra.get_current_number_of_members() << std::endl;

   
    Musician musician4("Guitar", 7);
    if (!orchestra.add_musician(musician4)) {
        std::cout << "Orchestra is full, cannot add another musician." << std::endl;
    }

    return 0;
}
