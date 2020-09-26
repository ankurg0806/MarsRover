#include "../../headers/Directions/West.h"

#include "../../headers/Directions/North.h"
#include "../../headers/Directions/South.h"

std::unique_ptr<Direction> West::left()
{
    return std::unique_ptr<Direction>(new South);
}

std::unique_ptr<Direction> West::right()
{
    return std::unique_ptr<Direction>(new North);
}

std::string West::toString()
{
    return "W";
}

std::pair<int, int> West::move()
{
    return {-1, 0};
}