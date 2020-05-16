#pragma once
#include "../creator/creators.h"
#include <iostream>
#include <vector>
#include <string>

class humanity {
public:
    humanity() = default;
    ~humanity() = default;
    virtual void Addhumanity(std::string type);
    virtual void Info();
    virtual int GetDamage();

private:
    std::vector <scientist*> scientist;
    std::vector <Hlekar*> Hlekar;
    std::vector <Hcovalier*> Hcovalier;
    HCreator creator;
};
