#include  "library.h"
#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
#include <cmath>

bool operator < (const point& p1, const point& p2)
{
    if (p1.x < p2.x) return true;
    if (p1.x == p2.x && p1.y < p2.y) return true;

    return false;
}

point gridLocationOfIndex(int index)
{
    point p = { 0, 0 };

    // (di, dj) is a vector - direction in which we move right now
    int di = 1;
    int dj = 0;
    // length of current segment
    int segment_length = 1;

    // current position (i, j) and how much of current segment we passed
    int i = 0;
    int j = 0;
    int segment_passed = 0;
    for (int k = 1; k < index; ++k) {
        // make a step, add 'direction' vector (di, dj) to current position (i, j)
        p.x += di;
        p.y += dj;
        ++segment_passed;

        if (segment_passed == segment_length) {
            // done with current segment
            segment_passed = 0;

            // 'rotate' directions
            int buffer = di;
            di = -dj;
            dj = buffer;

            // increase segment length if necessary
            if (dj == 0) {
                ++segment_length;
            }
        }
    }

    return p;
}

int squareValue(const std::map<point, int>& squares, point p)
{
    auto itr = squares.find(p);

    if (itr != squares.end())
    {
        return itr->second;
    }

    return 0;
}

int adjacentSquaresSum(const std::map<point, int>& squares, point p)
{
    auto v =  squareValue(squares, point({ p.x + 1, p.y + 0 }))
            + squareValue(squares, point({ p.x + 1, p.y + 1 }))
            + squareValue(squares, point({ p.x + 0, p.y + 1 }))
            + squareValue(squares, point({ p.x - 1, p.y + 1 }))
            + squareValue(squares, point({ p.x - 1, p.y + 0 }))
            + squareValue(squares, point({ p.x - 1, p.y - 1 }))
            + squareValue(squares, point({ p.x + 0, p.y - 1 }))
            + squareValue(squares, point({ p.x + 1, p.y - 1 }));

    return v;
}

int adjacentSquaresSumOfIndex(int index)
{
    std::map<point, int> pointValues;
    pointValues.insert(std::make_pair(point({ 0, 0 }), 1));
 
    int total = index == 1 ? 1 : 0;
    std::cout << "\n";
    for (int i = 2; i <= index; i++)
    {
        auto p = gridLocationOfIndex(i);
        auto value = adjacentSquaresSum(pointValues, p);
        std::cout << i << " = [" << p.x << "," << p.y << "] = " << value << "\n";
        pointValues.insert(std::make_pair(p, value));
        total = value;
    }

    return total;
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


int firstValueLargerThanInput(int input)
{
    int i = 0;
    int value = 0;
    do
    {
        value = adjacentSquaresSumOfIndex(i++);
    }
    while (value <= input);

    return i;
}
