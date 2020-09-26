#pragma once
#include "Command.h"

class RotateLeft : public Command
{
public:
    void execute(MarsRover& ob) override;
};