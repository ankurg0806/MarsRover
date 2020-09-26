#include "../../headers/Directions/South.h"

#include "../../headers/Directions/East.h"
#include "../../headers/Directions/West.h"

std::unique_ptr<Direction> South::left()
{
    return std::unique_ptr<Direction>(new East);
}

std::unique_ptr<Direction> South::right()
{
    return std::unique_ptr<Direction>(new West);
}

std::string South::toString()
{
    return "S";
}

std::pair<int, int> South::move()
{
    return {0, -1};
}