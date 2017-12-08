
#include <iostream>
#include <utils.h>
#include "library.h"

int main(int argc, char* argv[])
{
    std::cout << "Advent of Code - 2017\n";
    std::cout << "--- Day 7: Recursive Circus ---\n";

    if (argc < 2)
    {
        std::cout << "*** ERROR *** No input file location given, please provide the path to the input file.\n";
        return 0;
    }

    Lines lines;

    lines.readFromFile(argv[1]);

    auto programs = linesToPrograms(lines);
    auto foundBottomProgram = bottomProgram(programs);

    if (foundBottomProgram == nullptr)
    {
        std::cout << "*** ERROR *** No bottom program found\n";
        return 0;
    }

    std::cout << "Answer for day 7 is: " << foundBottomProgram->name <<  "\n";

    return 0;
}
