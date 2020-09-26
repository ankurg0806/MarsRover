#pragma once
#include <memory>
#include <string>
#include <vector>

#include "../Commands/Command.h"

std::vector<std::unique_ptr<Command>> parseInput(const std::string& input);
