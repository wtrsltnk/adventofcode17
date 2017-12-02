
#include <iostream>
#include <functional>
#include <numeric>
#include "library.h"

int main(int argc, char* argv[])
{
    std::cout << "Advent of Code - 2017\n";
    std::cout << "--- Day 2: Corruption Checksum ---\n";

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
    
    auto v = readAsVectorOfVectorOfInt(file);

    file.close();

    auto answer1 = std::accumulate(v.begin(), v.end(), 0, [] (int a, const std::vector<int>& b) {
        return a + differenceBetweenMinMaxPerRow(b); 
    });

    std::cout << "Answer for day 2 is: " << answer1 << "\n";

    auto answer2 = std::accumulate(v.begin(), v.end(), 0, [] (int a, const std::vector<int>& b) {
        return a + totalEvenlyDivisibleValuesPerRow(b);
    });

    std::cout << "Answer for day 2, part two is: " << answer2 << "\n";

    return 0;
}
