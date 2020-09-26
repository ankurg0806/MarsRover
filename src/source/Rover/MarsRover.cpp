#include "../../headers/Rover/MarsRover.h"

#include <iostream>
#include <memory>

#include "../../headers/Directions/Direction.h"
#include "../../headers/Directions/East.h"
#include "../../headers/Directions/North.h"
#include "../../headers/Directions/South.h"
#include "../../headers/Directions/West.h"
#include "../../headers/helper/StringParser.h"
namespace {
bool isValid(int i, int j, int r, int c)
{
    return (i >= 0 and i <= r and j >= 0 and j <= c);
}
}  // namespace

MarsRover::MarsRover(Grid& g, char dir, Coordinate& cor) : grid(g), currentCord(cor)
{
    switch (dir)
    {
    case 'E':
        currentDir = std::unique_ptr<Direction>(new East);
        break;
    case 'W':
        currentDir = std::unique_ptr<Direction>(new West);
        break;
    case 'N':
        currentDir = std::unique_ptr<Direction>(new North);
        break;
    case 'S':
        currentDir = std::unique_ptr<Direction>(new South);
        break;
    default:
        std::cout << "Invalid Dir" << std::endl;
    }
}
void MarsRover::move()
{
    std::pair<int, int> xypair = currentDir->move();
    int                 ii     = currentCord.x + xypair.first;
    int                 jj     = currentCord.y + xypair.second;
    if (isValid(ii, jj, grid.getEnd().x, grid.getEnd().y))
    {
        currentCord.x = ii;
        currentCord.y = jj;
    }
}

void MarsRover::turnLeft()
{
    currentDir = std::move(currentDir->left());
}

void MarsRover::turnRight()
{
    currentDir = std::move(currentDir->right());
}
void MarsRover::run(const std::string& input)
{
    std::vector<std::unique_ptr<Command>> commands = parseInput(input);
    for (auto& command : commands)
    {
        std::cout << currentLocation() << std::endl;
        command->execute(*this);
    }
}

std::string MarsRover::currentLocation()
{
    return std::to_string(currentCord.x) + " " + std::to_string(currentCord.y) + " " + currentDir->toString();
}
