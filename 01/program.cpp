
#include <iostream>
#include "library.h"

int main(int argc, char* argv[])
{
    std::cout << "Advent of Code - 2017\n";
    std::cout << "--- Day 1: Inverse Captha ---\n";

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
    
    std::vector<int> v = readAsVectorOfInt(file);

    file.close();

    std::cout << "Answer for day 1 is: " 
        << totalSumOfMatchingNextDigit(v) << "\n";

    std::cout << "Answer for day 1, part two is: " 
        << totalSumOfMatchingHalfWayRoundDigit(v) << "\n";

    return 0;
}