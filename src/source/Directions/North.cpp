#include "../../headers/Directions/North.h"

#include "../../headers/Directions/East.h"
#include "../../headers/Directions/West.h"

std::unique_ptr<Direction> North::left()
{
    return std::unique_ptr<Direction>(new West);
}

std::unique_ptr<Direction> North::right()
{
    return std::unique_ptr<Direction>(new East);
}

std::string North::toString()
{
    return "N";
}

std::pair<int, int> North::move()
{
    return {0, 1};
}