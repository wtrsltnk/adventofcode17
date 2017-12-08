#include "utils.h"
#include <fstream>
#include <iostream>

bool Lines::readFromFile(const std::string& filename)
{
    std::ifstream file(filename);

    if (!file.is_open())
    {
        std::cout << "*** ERROR *** Given input file could not be opened: " << filename << "\n";
        return false;
    }
    
    std::string str;

    while (std::getline(file, str))
    {
        this->push_back(str);
    }  

    file.close();

    return true;
}
