#ifndef PROGRAM_H
#define PROGRAM_H

#include <fstream>

struct point
{
    int x;
    int y;
};


bool is_positive_number(const std::string& s);
point gridLocationOfIndex(int index);
int manhattanDistance(point p);

#endif // PROGRAM_H
