#ifndef GRIDITEM_HPP
#define GRIDITEM_HPP

#include <tuple>

class GridItem {
public:
    GridItem(int x, int y, int width, int height);
    GridItem();

    void setCoordinates(int x, int y);
    std::tuple<int, int> getCoordinates() const;
    int getGridWidth() const;
    int getGridHeight() const;
    static int getActiveGridItemCount();

    virtual ~GridItem();

private:
    static int activeCount; 
    int x, y;                     
};

#endif 
