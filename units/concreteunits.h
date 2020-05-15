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


class Ecavalier : public cavalier {
public:
    Tcavalier() {
        healthPoints = 210;
        weapon.name = "raketa";
        weapon.damage = 30;
        grenades = 5;
    }
};


class Emag : public mag {
public:
    Tmag() {
        weapon.name = "magic";
        weapon.damage = 10;
        healthPoints = 50;
        magRiffle.name = "l";
        magRiffle.damage = 90;
    }
};


class Elekar : public lekar {
public:
    Tlekar() {
        healthPoints = 40;
        weapon.name = "lek";
        weapon.damage = 30;
    }
    virtual void heal() override {};
};


class Hcavalier : public cavalier {
public:
    Tcavalier() {
        healthPoints = 250;
        weapon.name = "raketa";
        weapon.damage = 20;
        grenades = 3;
    }
};


class Hmag : public mag {
public:
    Tmag() {
        weapon.name = "magic";
        weapon.damage = 20;
        healthPoints = 40;
        magRiffle.name = "l";
        magRiffle.damage = 90;
    }
};


class Hlekar : public lekar {
public:
    Tlekar() {
        healthPoints = 40;
        weapon.name = "lek";
        weapon.damage = 30;
    }
    virtual void heal() override {};
};
