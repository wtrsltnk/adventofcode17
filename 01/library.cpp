#include  "library.h"

std::vector<int> readAsVectorOfInt(std::ifstream& file)
{
    std::vector<int> result;

    char c;
    while (file.get(c))
    {
        if (!std::isdigit(c))
        {
            break;
        }

        result.push_back(c - '0');
    }

    return result;
}

int totalSumOfMatchingNextDigit(const std::vector<int>& v)
{
    int total = 0;

    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == v[(i + 1) % v.size()])
        {
            total += v[i];
        }
    }

    return total;
}

int totalSumOfMatchingHalfWayRoundDigit(const std::vector<int>& v)
{
    int total = 0;

    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == v[(i + (v.size() / 2)) % v.size()])
        {
            total += v[i];
        }
    }

    return total;
}
