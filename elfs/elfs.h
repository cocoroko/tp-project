#pragma once
#include "../Creator/Creators.h"
#include <iostream>
#include <vector>
#include <string>

class elfs {
public:
    elfs() = default;
    ~elfs() = default;
    void Addelfs(std::string type);
    void Info();

private:
    std::vector <ork*> ork;
    std::vector <Elekar*> hlekar;
    std::vector <Ecovalier*> hcovalier;
    ECreator creator;
};

