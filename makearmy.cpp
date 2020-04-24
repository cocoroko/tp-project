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
    stormtrooper* makeStormtrooper(){
        return new stormtrooperElfs;
    }
    doctor* makeDoctor(){
        return new doctorElfs;
    }
    wizard* makeWizard(){
        return new wizardElfs;
    }
    cavalier* makeCavalier(){
        return new cavalierElfs;
    }
};


class HumanityArmyFactory : public AbstractFactory{
public:
    stormtrooper* makeStormtrooper(){
        return new stormtrooperHumanity;
    }
    doctor* makeDoctor(){
        return new doctorHumanity;
    }
    wizard* makeWizard(){
        return new wizardHumanity;
    }
    cavalier* makeCavalier(){
        return new cavalierHumanity;
    }
};


class OrksArmyFactory : public AbstractFactory{
public:
    stormtrooper* makeStormtrooper(){
        return new stormtrooperOrks;
    }
    doctor* makeDoctor(){
        return new doctorOrks;
    }
    wizard* makeWizard(){
        return new wizardOrks;
    }
    cavalier* makeCavalier(){
        return new cavalierOrks;
    }
};


class ZombieArmyFactory : public AbstractFactory{
public:
    stormtrooper* makeStormtrooper(){
        return new stormtrooperZombie;
    }
    doctor* makeDoctor(){
        return new doctorZombie;
    }
    wizard* makeWizard(){
        return new wizardZombie;
    }
    cavalier* makeCavalier(){
        return new cavalierZombie;
    }
};

