#include  "library.h"
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>

std::vector<std::string> readAllLines(std::istream& file)
{
    std::vector<std::string> result;

    std::string str;
    while (std::getline(file, str))
    {
        result.push_back(str);
    }  

    return result;
}

std::vector<std::string> split(const std::string &s, char delim)
{
    std::stringstream ss(s);
    std::string item;
    std::vector<std::string> elems;
    while (std::getline(ss, item, delim))
    {
        elems.push_back(item);
    }
    return elems;
}
