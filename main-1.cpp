#include "GameEntity.h"
#include "Utils.h"
#include <iostream>

int main() {
    std::srand(static_cast<unsigned>(std::time(0)));
    int gridWidth = 10;
    int gridHeight = 20;
    std::tuple<int, int> pos1 = Utils::generateRandomPos(gridWidth, gridHeight);
    std::tuple<int, int> pos2 = Utils::generateRandomPos(gridWidth, gridHeight);
    
    std::cout << Utils::calculateDistance(pos1, pos2) << std::endl;

    return 0;
}