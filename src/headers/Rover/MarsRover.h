#pragma once
#include <memory>

#include "../Directions/Direction.h"
#include "../Grid/Grid.h"
class MarsRover
{
private:
    Grid                       grid;
    std::unique_ptr<Direction> currentDir;
    Coordinate                 currentCord;

public:
    MarsRover(Grid& g, char dir, Coordinate& cor);
    void        run(const std::string& input);
    std::string currentLocation();
    void        move();
    void        turnLeft();
    void        turnRight();
};