#include "../../headers/helper/StringParser.h"

#include <iostream>

#include "../../headers/Commands/Move.h"
#include "../../headers/Commands/RotateLeft.h"
#include "../../headers/Commands/RotateRight.h"
std::vector<std::unique_ptr<Command>> parseInput(const std::string& input)
{
    std::vector<std::unique_ptr<Command>> commands;
    for (char ch : input)
    {
        switch (ch)
        {
        case 'M':
            commands.emplace_back(new Move);
            break;
        case 'L':
            commands.emplace_back(new RotateLeft);
            break;
        case 'R':
            commands.emplace_back(new RotateRight);
            break;
        default:
            std::cout << "Ignoring character " << ch << " as invalid" << std::endl;
            break;
        }
    }
    return commands;
}