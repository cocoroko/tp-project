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
    virtual int UnitDamage() = 0;
    virtual void Upgrade() = 0;
};

class covalier : public Unit {
public:
    Weapon revolver;
};

class lekar : public Unit {
public:
    virtual void heal() {};
};
