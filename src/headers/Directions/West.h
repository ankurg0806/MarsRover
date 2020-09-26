#pragma once
#include "Direction.h"
class West : public Direction
{
public:
    std::unique_ptr<Direction> left() override;
    std::unique_ptr<Direction> right() override;
    std::string                toString() override;
    std::pair<int, int>        move() override;
};