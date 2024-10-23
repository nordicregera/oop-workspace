#include "GameEntity.h"
#include "Explosion.h"
#include "Mine.h"
#include "Ship.h"
#include <iostream>
#include <cstdlib>

int main(){
    int dx = 4, dy = 1, x = 1, y = 3;
    Ship testShip = Ship(x + 1, y + 1);
    Mine testMine = Mine(x, y);
    Explosion testExplosion(3, 3);
    std::cout << "My type before explosion: " << testShip.getType() << std::endl;
    std::cout << "My pos before explosion:" << std::get<0>(testShip.getPos()) << std::endl;
    testExplosion.apply(testShip);
    std::cout << "My type after explosion: " << testShip.getType() << std::endl;
    std::cout << "My pos after explosion:" << std::get<0>(testShip.getPos()) << std::endl;


}