#include "Explosion.h"
#include "Effect.h"
#include "GameEntity.h"
#include <cstdlib>

Explosion::Explosion (int x, int y) : GameEntity(x, y, 'E') {}

void Explosion::apply(GameEntity& entity){
   entity = GameEntity(-1, -1, 'N');
}