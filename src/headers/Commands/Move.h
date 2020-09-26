#pragma once
#include "Command.h"

class Move : public Command
{
public:
    void execute(MarsRover& ob) override;
};