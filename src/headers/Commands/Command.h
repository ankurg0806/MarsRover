#pragma once
#include "../Rover/MarsRover.h"

class Command
{
public:
    virtual void execute(MarsRover& rover) = 0;
    virtual ~Command()                     = default;
};