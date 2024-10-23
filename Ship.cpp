#include "Ship.h"
#include "GameEntity.h"

Ship::Ship(int x, int y) : GameEntity(x, y, 'S'){} 

void Ship::move(int dx, int dy){
   std::get<0>(position) += dx;
   std::get<1>(position) += dy;
}


