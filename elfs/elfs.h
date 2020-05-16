#pragma once
#include "../Creator/Creators.h"
#include <iostream>
#include <vector>
#include <string>

class elfs {
public:
    elfs() = default;
    ~elfs() = default;
    void Addelf(std::string type);
    void Info();

private:
    std::vector <ork*> ork;
    std::vector <Elekar*> Elekar;
    std::vector <Ecovalier*> Ecovalier;
    ECreator creator;
};

