#include "library.h"
#include <iostream>
#include <sstream>

std::vector<std::string> readAllLines(std::istream& file)
{
    std::vector<std::string> result;

    std::string str;
    while (std::getline(file, str))
    {
        result.push_back(str);
    }  

    return result;
}

bool lineToProgram(const std::string& line, Program& program)
{
    return false;
}

std::vector<Program> linesToPrograms(const std::vector<std::string>& lines)
{
    auto programs = std::vector<Program>(lines.size());

    for (int i = 0; i < lines.size(); i++)
    {
        if (!lineToProgram(lines[i], programs[i]))
        {
            std::cout << "Error parsing lines " << (i+1) << ": " << lines[i] << "\n";
        }
    }

    return programs;
}

Program* bottomProgram(const std::vector<Program>& programs)
{
    return nullptr;
}