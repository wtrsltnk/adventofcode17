#include  "library.h"
#include <string>
#include <sstream>
#include <limits>

std::vector<std::vector<int>> readAsVectorOfVectorOfInt(std::istream& file)
{
    std::vector<std::vector<int>> result;

    for(std::string line; getline(file, line); )
    {
        std::vector<int> lineResult;
        std::stringstream ss(line);
        
        int i = 0;
        while (ss >> i)
        {
            lineResult.push_back(i);
        }

        result.push_back(lineResult);
    }

    return result;
}

int differenceBetweenMinMaxPerRow(const std::vector<int>& v)
{
    int min = std::numeric_limits<int>::max();
    int max = std::numeric_limits<int>::min();

    for (auto n : v)
    {
        if (n < min) min = n;
        if (n > max) max = n;
    }

    return max - min;
}

int totalEvenlyDivisibleValuesPerRow(const std::vector<int>& v)
{
    for (auto n : v)
    {
        for (auto o : v)
        {
            if (n == o) continue;

            if (n > o && (n % o) == 0) 
            {
                return n / o;
            }
            if (o > n && (o % n) == 0)
            {
                return o / n;
            }
        }
    }
 
    return 0;
}