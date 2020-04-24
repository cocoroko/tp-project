//
//  humanity.cpp
//  qwerty
//
//  Created by Есения on 23/04/2020.
//  Copyright © 2020 Есения. All rights reserved.
//


//люди
#include <stdio.h>
#include <iostream>
#include "basic.cpp"

using std ::cout;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class stormtrooperHumanity : public stormtrooper{
public:
    void improve(){
        Health = maxHealth;
        sorcery = maxSorcery;
        damage = damage * 1.5;
    }
    stormtrooperHumanity(){
        Health = 10;
        maxHealth = 10;
        sorcery = 5;
        maxSorcery = 15;
        damage = 5;
    }
    ~stormtrooperHumanity(){}
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class wizardHumanity : public wizard{
public:
    void improve(){
        Health = maxHealth;
        maxSorcery = maxSorcery * 1.5;
        sorcery = maxSorcery;
}
    wizardHumanity(){
        Health = 15;
        maxHealth = 15;
        sorcery = 50;
        maxSorcery = 50;
        damage = 2;
    }
    ~wizardHumanity(){}
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class doctorHumanity : public doctor{
public:
    void improve(){
        Health = maxHealth;
        sorcery = maxSorcery;
        damage = damage * 2;
    }
    doctorHumanity(){
        Health = 50;
        maxHealth = 50;
        sorcery = 10;
        maxSorcery = 10;
        damage = 2;
    }
    ~doctorHumanity(){}
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class cavalierHumanity : public cavalier{
public:
    void improve(){
        Health = maxHealth;
        sorcery = maxSorcery;
    }
    cavalierHumanity(){
        Health = 30;
        maxHealth = 30;
        sorcery = 0;
        maxSorcery = 0;
        damage = 3;
    }
    ~cavalierHumanity(){}
};
