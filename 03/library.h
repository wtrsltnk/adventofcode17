#ifndef PROGRAM_H
#define PROGRAM_H

#include <fstream>
#include <map>

struct point
{
    int x;
    int y;
};

bool operator < (const point& p1, const point& p2);

bool is_positive_number(const std::string& s);
point gridLocationOfIndex(int index);
int manhattanDistance(point p);

int squareValue(const std::map<point, int>& squares, point p);
int adjacentSquaresSum(const std::map<point, int>& squares, point p);
int adjacentSquaresSumOfIndex(int index);

#endif // PROGRAM_H
