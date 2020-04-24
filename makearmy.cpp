//
//  makearmy.cpp
//  qwerty
//
//  Created by Есения on 24/04/2020.
//  Copyright © 2020 Есения. All rights reserved.
//

//абстрактная фабрика

#include <stdio.h>
#include "orks.cpp"
#include "humanity.cpp"
#include "zombie.cpp"
#include "elfs.cpp"


class AbstractFactory {
public:
    virtual stormtrooper* CreateStormtrooper() = 0;
    virtual doctor* CreateDoctor() = 0;
    virtual wizard* CreateWizard() = 0;
    virtual cavalier* CreateCavalier() = 0;
    virtual ~AbstractFactory(){}
};


class ElfsArmyFactory : public AbstractFactory{
public:
    stormtrooper* CreateStormtrooper(){
        return new stormtrooperElfs;
    }
    doctor* CreateDoctor(){
        return new doctorElfs;
    }
    wizard* CreateWizard(){
        return new wizardElfs;
    }
    cavalier* CreateCavalier(){
        return new cavalierElfs;
    }
};


class HumanityArmyFactory : public AbstractFactory{
public:
    stormtrooper* CreateStormtrooper(){
        return new stormtrooperHumanity;
    }
    doctor* CreateDoctor(){
        return new doctorHumanity;
    }
    wizard* CreateWizard(){
        return new wizardHumanity;
    }
    cavalier* CreateCavalier(){
        return new cavalierHumanity;
    }
};


class OrksArmyFactory : public AbstractFactory{
public:
    stormtrooper* CreateStormtrooper(){
        return new stormtrooperOrks;
    }
    doctor* CreateDoctor(){
        return new doctorOrks;
    }
    wizard* CreateWizard(){
        return new wizardOrks;
    }
    cavalier* CreateCavalier(){
        return new cavalierOrks;
    }
};


class ZombieArmyFactory : public AbstractFactory{
public:
    stormtrooper* CreateStormtrooper(){
        return new stormtrooperZombie;
    }
    doctor* CreateDoctor(){
        return new doctorZombie;
    }
    wizard* CreateWizard(){
        return new wizardZombie;
    }
    cavalier* CreateCavalier(){
        return new cavalierZombie;
    }
};

