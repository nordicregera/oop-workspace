#include "Mine.h"
#include "Explosion.h"

Mine::Mine(int x, int y) : GameEntity(x, y, 'M'){};

Explosion Mine::explode() {
    setType(GameEntityType::NoneType);
    Explosion testExplosion(std::get<0>(position), std::get<1>(position));
    return testExplosion;
}