#ifndef PROGRAM_H
#define PROGRAM_H

#include <fstream>
#include <vector>

std::vector<int> readAllLinesAsIntegers(std::istream& file);

int countStepsFromInstructions(std::vector<int>& intructions);
int countStepsFromInstructionsPartTwo(std::vector<int>& intructions);

#endif // PROGRAM_H
