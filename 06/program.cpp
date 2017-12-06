
#include <iostream>
#include <functional>
#include <numeric>
#include "library.h"

int main(int argc, char* argv[])
{
    std::cout << "Advent of Code - 2017\n";
    std::cout << "--- Day 6: Memory Reallocation ---\n";

    if (argc < 2)
    {
        std::cout << "*** ERROR *** No input file location given, please provide the path to the input file.\n";
        return 0;
    }

    std::ifstream file(argv[1]);

    if (!file.is_open())
    {
        std::cout << "*** ERROR *** Given input file could not be opened: " << argv[1] << "\n";
        return 0;
    }
    
    auto v1 = readAllLinesAsIntegers(file);
    auto v2 = std::vector<int>(v1.begin(), v1.end());

    file.close();

    std::cout << "Answer for day 5 is: " << countStepsFromInstructions(v1) <<  "\n";

    std::cout << "Answer for day 5, part two is: " << countStepsFromInstructionsPartTwo(v2) <<  "\n";

    return 0;
}
