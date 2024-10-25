#ifndef EXIT_HPP
#define EXIT_HPP

#include "Interactable.hpp"

class Exit : public Interactable {
public:
    Exit(int width, int height) 
        : Interactable(0, 0, width, height) {}

    bool interact(Explorer* player) override {
        return (player->xOffset() == x && player->yOffset() == y);
    }

    InteractableType getType() override {
        return EXIT;
    }
};

#endif 
