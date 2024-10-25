#ifndef INTERACTABLE_HPP
#define INTERACTABLE_HPP

#include "GridItem.hpp"

enum InteractableType { EXIT, PIT };

class Interactable : public GridItem {
protected:
    static int activeCount;

public:
    Interactable(int x, int y, int width, int height) 
        : GridItem(x, y, width, height) {
        ++activeCount;
    }

    Interactable() 
        : GridItem(0, 0, 0, 0) {
        ++activeCount;
    }

    virtual bool interact(Explorer* player) = 0;
    virtual InteractableType getType() = 0;

    static int getActiveInteractableCount() {
        return activeCount;
    }

    virtual ~Interactable() {
        --activeCount;
    }
};

int Interactable::activeCount = 0;

#endif // INTERACTABLE_HPP
