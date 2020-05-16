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
    std::vector <Ecavalier*> cavalier;
    std::vector <ESmag*> mag;
    std::vector <Elekar*> lekar;
    CounterCreator creator;
};
