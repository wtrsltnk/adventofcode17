#ifndef PROGRAM_H
#define PROGRAM_H

#include <vector>
#include <string>

struct Program
{
    std::string name;
    int weight;
    std::vector<std::string> programNamesAbove;
    std::vector<Program*> programsAbove;
};

bool lineToProgram(const std::string& line, Program& program);
std::vector<Program> linesToPrograms(const std::vector<std::string>& lines);
Program* bottomProgram(const std::vector<Program>& programs);

#endif // PROGRAM_H
