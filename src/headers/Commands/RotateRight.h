#pragma once
#include "Command.h"

class RotateRight : public Command
{
public:
    void execute(MarsRover& ob) override;
};