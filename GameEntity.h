#ifndef GAMEENTITY_H
#define GAMEENTITY_H
#include <tuple>

class GameEntity {
 public:
  enum GameEntityType { ExplosionType, MineType, NoneType, ShipType };
  GameEntity(int x, int y, char type);
  // std::tuple<int, int> getPos();
  GameEntityType getType();
  void setType(GameEntityType type);
  void setPosition(std::tuple<int, int> position);
  std::tuple<int,int> getPos();

  protected:
  GameEntityType Type;
  std::tuple<int, int> position;

 
};
 

#endif
