#pragma once
#include "AbstractUnits.h"
using namespace std;


class ork : public Unit {
public:
    virtual void possibility1() {};
    ork() {
        weapon.name = "f";
        weapon.damage = 40;
        healthPoints = 60;
    }
};

class scientist : public Unit {
public:
    virtual void possibility2() {};
    scientist() {
        weapon.name = "f";
        weapon.damage = 40;
        healthPoints = 80;
    }
};



class Hcavalier : public cavalier {
public:
    Hcavalier() {
        weapon.name = "revolver";
        weapon.damage = 10;
        healthPoints = 50;
        magRiffle.name = "l";
        magRiffle.damage = 90;
    }
};

class Elekar : public lekar {
public:
    Elekar() {
        healthPoints = 40;
        weapon.name = "lek";
        weapon.damage = 30;
    }
    virtual void heal() override {};
};

class Ecavalier : public cavalier {
public:
    Ecavalier() {
        weapon.name = "revolver";
        weapon.damage = 20;
        healthPoints = 40;
        magRiffle.name = "l";
        magRiffle.damage = 90;
    }
};


class Hlekar : public lekar {
public:
    Hlekar() {
        healthPoints = 40;
        weapon.name = "lek";
        weapon.damage = 30;
    }
    virtual void heal() override {};
};
