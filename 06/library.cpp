#include "library.h"
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>

std::vector<int> readAllLinesAsIntegers(std::istream& file)
{
    std::vector<int> result;

    std::string str;
    while (std::getline(file, str))
    {
        result.push_back(std::atoi(str.c_str()));
    }  

    return result;
}

int countStepsFromInstructions(std::vector<int>& v)
{
    int cursor = 0;
    int count = 0;

    while (cursor >= 0 && cursor < v.size())
    {
        auto instruction = v[cursor];
        v[cursor] = v[cursor] + 1;
        cursor += instruction;
        count++;
    }

    return count;
}

int countStepsFromInstructionsPartTwo(std::vector<int>& v)
{
    int cursor = 0;
    int count = 0;

    while (cursor >= 0 && cursor < v.size())
    {
        auto instruction = v[cursor];
        v[cursor] = v[cursor] + (instruction >= 3 ? -1 : 1);
        cursor += instruction;
        count++;
    }

    return count;
}
