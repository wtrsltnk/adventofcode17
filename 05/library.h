#ifndef PROGRAM_H
#define PROGRAM_H

#include <fstream>
#include <string>
#include <vector>

std::vector<std::string> readAllLines(std::istream& file);
std::vector<std::string> split(const std::string &s, char delim);

#endif // PROGRAM_H
