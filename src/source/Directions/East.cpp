#include "../../headers/Directions/East.h"

#include "../../headers/Directions/North.h"
#include "../../headers/Directions/South.h"

std::unique_ptr<Direction> East::left()
{
    return std::unique_ptr<Direction>(new North);
}

std::unique_ptr<Direction> East::right()
{
    return std::unique_ptr<Direction>(new South);
}

std::string East::toString()
{
    return "E";
}

std::pair<int, int> East::move()
{
    return {1, 0};
}