#pragma once
#include "../сreator/сreators.h"
#include <iostream>
#include <vector>
#include <string>

class elfs {
public:
    elfs() = default;
    ~elfs() = default;
    virtual void Addelfs(std::string type);
    virtual void Info();
    virtual int GetDamage();

private:
    std::vector <ork*> ork;
    std::vector <Elekar*> Elekar;
    std::vector <Ecovalier*> Ecovalier;
    ECreator creator;
};

