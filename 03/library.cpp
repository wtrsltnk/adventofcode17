#include  "library.h"
#include <string>
#include <algorithm>
#include <cctype>
#include <cmath>

point gridLocationOfIndex(int index)
{
    point p = { 0, 0 };

    

    return p;
}

// Git this one from https://stackoverflow.com/a/4654718
bool is_positive_number(const std::string& s)
{
    return !s.empty() && std::find_if(s.begin(), 
        s.end(), [](char c) { return !std::isdigit(c); }) == s.end();
}

int manhattanDistance(point p)
{
    return std::abs(p.x) + std::abs(p.y);
}
