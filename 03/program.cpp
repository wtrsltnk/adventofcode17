
#include <iostream>
#include <functional>
#include <numeric>
#include "library.h"

int main(int argc, char* argv[])
{
    std::cout << "Advent of Code - 2017\n";
    std::cout << "--- Day 3: Spiral Memory ---\n";

    if (argc < 2)
    {
        std::cout << "*** ERROR *** No input value given, please provide an integer input value.\n";
        return 0;
    }

    if (!is_positive_number(argv[1]))
    {
        std::cout << "*** ERROR *** No numeric value given, please provide an integer input value.\n";
        return 0;
    }

    auto value = std::atoi(argv[1]);

    auto valueLocation = gridLocationOfIndex(value);
    auto answer1 = manhattanDistance(valueLocation);

    std::cout << "Answer for day 2 is: " << answer1 << "\n";

    auto answer2 = firstValueLargerThanInput(value);

    std::cout << "Answer for day 2, part two is: " << answer2 << "\n";

    return 0;
}
