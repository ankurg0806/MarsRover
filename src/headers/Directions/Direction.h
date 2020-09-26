#pragma once
#include <memory>
#include <string>
class Direction
{
public:
    virtual std::unique_ptr<Direction> left()     = 0;
    virtual std::unique_ptr<Direction> right()    = 0;
    virtual std::string                toString() = 0;
    virtual std::pair<int, int>        move()     = 0;
    virtual ~Direction()                          = default;
};