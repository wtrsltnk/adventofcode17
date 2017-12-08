#ifndef UTILS_H
#define UTILS_H

#include <string>
#include <vector>

class Lines : public std::vector<std::string>
{
public:
    bool readFromFile(const std::string& filename);
};

#endif // UTILS_H