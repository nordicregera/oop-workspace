#include <iostream>
#include "GridItem.hpp"
#include "Helper.hpp"

int main() {
    
    GridItem item1(1, 2, 5, 3);
    GridItem item2(3, 4, 6, 2);
    GridItem item3;

    std::cout << "Coordinates of item1: " << std::get<0>(item1.getCoordinates()) << ", " << std::get<1>(item1.getCoordinates()) << std::endl;
    std::cout << "Active GridItem count: " << GridItem::getActiveGridItemCount() << std::endl;

    item1.setCoordinates(5, 5);
    std::cout << "New coordinates of item1: " << std::get<0>(item1.getCoordinates()) << ", " << std::get<1>(item1.getCoordinates()) << std::endl;

    
    std::tuple<int, int> pointA(1, 2);
    std::tuple<int, int> pointB(4, 6);
    double distance = Helper::absoluteSquaredDistance(pointA, pointB);
    std::cout << "Absolute squared distance between pointA and pointB: " << distance << std::endl;

    return 0;
}
