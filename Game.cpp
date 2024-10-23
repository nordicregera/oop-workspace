#include "Game.h"
#inlcude "GameEntity.h"

std::vector<GameEntity*> Game::get_entities(){
    return entities;
}

void Game::set_entities(){
    this->entities = entities;
}

std::vector<GameEntity*> Game::initGame(int numShips, int numMines, int gridWidth, int gridHeight){
    for (int i = 0; i < numShips; i++) {
        std::tuple<int,int> pos = Utils::generateRandomPos(gridWidth, gridHeight);
        entities.push_back(new Ship(std::get<0>(pos),std::get<1>(pos)));
    }
    
    for (int i = 0; i < numMines; i++) {
        
    }
    return entities;
}

void Game::gameLoop(int maxIterations, double mineDistanceThreshold){

    
}



void gameLoop(int maxIterations, double mineDistanceThreshold);