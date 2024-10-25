#ifndef PIT_HPP
#define PIT_HPP

#include "Interactable.hpp"

class Pit : public Interactable {
private:
    bool covered;

public:
    Pit(int x, int y, int width, int height) 
        : Interactable(x, y, width, height), covered(false) {}

    bool interact(Explorer* player) override {
        if (player->getX() == x && player->getY() == y && !covered) {
            player->jumpPit();
            covered = true;
            return player->getStamina() == 0;
        }
        return false;
    }

    InteractableType getType() override {
        return PIT;
    }
};

#endif 
