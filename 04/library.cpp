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

bool passphrasesIsValid(const std::vector<std::string>& passphrase)
{
    for (auto itr = passphrase.begin(); itr != passphrase.end(); ++itr)
    {
        if (std::find(itr + 1, passphrase.end(), *itr) != passphrase.end())
        {
            return false;
        }
    }

    return true;
}

bool passphrasesContainsAnagram(const std::vector<std::string>& passphrase)
{
    auto sortedParts = std::vector<std::string>();

    for (auto part : passphrase)
    {
        std::string p = part;
        std::sort(p.begin(), p.end());
        sortedParts.push_back(p);
    }

    return !passphrasesIsValid(sortedParts);
}
