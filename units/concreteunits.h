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
    
    int UnitDamage() override  {
        return weapon.damage;
    }

    void Upgrade() override {};
};


class scientist : public Unit {
public:
    virtual void possibility2() {};
    scientist() {
        weapon.name = "f";
        weapon.damage = 40;
        healthPoints = 80;
    }
    
    int UnitDamage() override {
        return weapon.damage;
    }

    void Upgrade() override {};
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
    
     int UnitDamage() override  {
        return weapon.damage + covalierRiffle.damage;
    }

    void Upgrade() override {};
};

class Elekar : public lekar {
public:
    Elekar() {
        healthPoints = 40;
        weapon.name = "lek";
        weapon.damage = 30;
    }
    virtual void heal() override {};
    
     int UnitDamage() override  {
        return weapon.damage;
    }

    void Upgrade() override {};
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
    
     int UnitDamage() override  {
        return weapon.damage + covalierRiffle.damage;
    }

    void Upgrade() override {};
};


class Hlekar : public lekar {
public:
    Hlekar() {
        healthPoints = 40;
        weapon.name = "lek";
        weapon.damage = 30;
    }
    virtual void heal() override {};
    
     int UnitDamage() override  {
        return weapon.damage;
    }

    void Upgrade() override {};
};
