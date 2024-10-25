#include <iostream>
#include "Explorer.hpp"
#include "Exit.hpp"
#include "Pit.hpp"

int main() {
    int gridWidth = 5;
    int gridHeight = 5;
    Explorer explorer(gridWidth, gridHeight);
    Exit exit(1, 1);
    Pit pit(2, 2, 1, 1);

    std::cout << "Explorer Stamina: " << explorer.getStamina() << std::endl;

    
    explorer.move(2, 2);
    std::cout << "Moved to Pit. Stamina: " << explorer.getStamina() << std::endl;

    
    if (pit.interact(&explorer)) {
        std::cout << "Jumped the pit! Stamina after jump: " << explorer.getStamina() << std::endl;
    } else {
        std::cout << "Couldn't jump the pit. Stamina: " << explorer.getStamina() << std::endl;
    }

    
    explorer.move(1, 1);
    if (exit.interact(&explorer)) {
        std::cout << "Reached the exit!" << std::endl;
    } else {
        std::cout << "Not at the exit yet." << std::endl;
    }

    return 0;
}
