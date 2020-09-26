#include <iostream>
#include <memory>

#include "headers/Directions/Direction.h"
#include "headers/Grid/Grid.h"
#include "headers/Rover/MarsRover.h"
using namespace std;

int main()
{
    Grid       grid(5, 5);
    char       dir = 'E';
    Coordinate start(3, 3);
    MarsRover  ob(grid, dir, start);
    ob.run("MMRMMRMRRM");
    cout <<ob.currentLocation();
}