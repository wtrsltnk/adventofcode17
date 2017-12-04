
#include <iostream>
#include <functional>
#include <numeric>
#include "library.h"

int main(int argc, char* argv[])
{
    std::cout << "Advent of Code - 2017\n";
    std::cout << "--- Day 4: High-Entropy Passphrases ---\n";

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
    
    auto v = readAllLines(file);

    file.close();

    auto answer1 = std::accumulate(v.begin(), v.end(), 0, [] (int a, const std::string& b) {
        auto parts = split(b, ' ');
        return passphrasesIsValid(parts) ? a + 1 : a; 
    });

    std::cout << "Answer for day 4 is: " << answer1 <<  "\n";

    auto answer2 = std::accumulate(v.begin(), v.end(), 0, [] (int a, const std::string& b) {
        auto parts = split(b, ' ');
        return passphrasesIsValid(parts) && !passphrasesContainsAnagram(parts) ? a + 1 : a; 
    });

    std::cout << "Answer for day 4, part two is: " << answer2 <<  "\n";

    return 0;
}
