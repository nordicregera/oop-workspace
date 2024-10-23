#ifndef GAME_H
#define GAME_H
#include <vector>
#include "Ship.h"
#include "Mine.h"
#include "Utils.h"

class Game {
    private:
    std::vector<GameEntity*> entities;

    public: 
    std::vector<GameEntity*> get_entities(){
        return entities;
    }

    void set_entities(){
        this->entities = entities;
    }

    std::vector<GameEntity*> initGame(int numShips, int NumMines, int gridWidth, int gridHeight){
        for (int i = 0; i < numShips; i++){
            

        }
    }
    void gameLoop(int maxIterations, double mineDistanceThreshold);
};

#endif 





double my_double = 20.3; 
int my_rounded_integer = (int)(my_double); //20

GameEntity* my_entity = whatever; 
Ship* my_ship = static_cast<Ship*>(my_entity); //then you can use my_ship.move(x,y);