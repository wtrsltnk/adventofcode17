#ifndef PROGRAM_H
#define PROGRAM_H

#include <fstream>
#include <vector>

std::vector<std::vector<int>> readAsVectorOfVectorOfInt(std::istream& file);
int differenceBetweenMinMaxPerRow(const std::vector<int>& v);
int totalEvenlyDivisibleValuesPerRow(const std::vector<int>& v);

#endif // PROGRAM_H
