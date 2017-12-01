#ifndef PROGRAM_H
#define PROGRAM_H

#include <fstream>
#include <vector>

std::vector<int> readAsVectorOfInt(std::ifstream& file);
int totalSumOfMatchingNextDigit(const std::vector<int>& v);
int totalSumOfMatchingHalfWayRoundDigit(const std::vector<int>& v);

#endif // PROGRAM_H
