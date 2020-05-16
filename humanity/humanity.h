#pragma once
#include "../Creator/Creators.h"
#include <iostream>
#include <vector>
#include <string>

class humanity {
public:
    humanity() = default;
    ~humanity() = default;
    void Addhumanity(std::string type);
    void Info();

private:
    std::vector <scientist*> scientist;
    std::vector <Hlekar*> hlekar;
    std::vector <Hcovalier*> hcovalier;
    HCreator creator;
};
