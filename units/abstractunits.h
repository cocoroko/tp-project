#pragma once
#include <string>

struct Weapon {
    std::string name;
    int damage;
};

class Unit {
public:
    int healthPoints;
    Weapon weapon;
};

class mag : public Unit {
public:
    int magic;
};

class covalier : public Unit {
public:
    Weapon revolver;
};

class lekar : public Unit {
public:
    virtual void heal() {};
};
