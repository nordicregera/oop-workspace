#ifndef EXPLORER_HPP
#define EXPLORER_HPP

#include "GridItem.hpp"

class Explorer : public GridItem {
private:
    int stamina;

public:
    Explorer(int getGridWidth, int getGridHeight) 
        : GridItem(0, 0, 1, 1), stamina(2) {}

    int getStamina() {
        return stamina;
    }

    void jumpPit() {
        if (stamina > 0) {
            --stamina;
        }
    }

    bool move(int xOffset, int yOffset) {
        if ((xOffset != 0 && yOffset == 0) || (xOffset == 0 && yOffset != 0)) {
            int newX = x + xOffset;
            int newY = y + yOffset;

            
            if (newX >= 0 && newX < getGridWidth() && newY >= 0 && newY < getGridHeight()) {
                x = newX;
                y = newY;
                return true;
            }
        }
        return false;
    }
};

#endif 
