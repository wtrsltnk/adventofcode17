
#include <iostream>
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

    std::ifstream file(argv[1]);

    if (!file.is_open())
    {
        std::cout << "*** ERROR *** Given input file could not be opened: " << argv[1] << "\n";
        return 0;
    }
    
    auto lines = readAllLines(file);

    file.close();

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
