#include "GridItem.hpp"

int GridItem::activeCount = 0;

GridItem::GridItem(int x, int y, int width, int height)
    : x(x), y(y), width(width), height(height) {
    activeCount++;
}

GridItem::GridItem() : GridItem(0, 0, 0, 0) {}

void GridItem::setCoordinates(int x, int y) {
    this->x = x;
    this->y = y;
}

std::tuple<int, int> GridItem::getCoordinates() const {
    return std::make_tuple(x, y);
}

int GridItem::getGridWidth() const {
    return width;
}

int GridItem::getGridHeight() const {
    return height;
}

int GridItem::getActiveGridItemCount() {
    return activeCount;
}

GridItem::~GridItem() {
    activeCount--;
}
