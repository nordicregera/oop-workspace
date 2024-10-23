#include "GameEntity.h"

#include <tuple>

GameEntity ::GameEntity(int x, int y, char type) {
  position = std::make_tuple(x, y);

  switch (type) {
    case 'E':
      Type = GameEntityType::ExplosionType;
      break;
    case 'M':
      Type = GameEntityType::MineType;
      break;
    case 'N':
      Type = GameEntityType::NoneType;
      break;
    case 'S':
      Type = GameEntityType::ShipType;
      break;
  }
}

std::tuple<int, int> GameEntity ::getPos() { return position; }

GameEntity::GameEntityType GameEntity::getType() { return Type; }

void GameEntity::setType(GameEntityType type) { this->Type = type; }

void GameEntity::setPosition(std::tuple<int, int> position) { this->position = position;}

