//
//  zombie.cpp
//  qwerty
//
//  Created by Есения on 23/04/2020.
//  Copyright © 2020 Есения. All rights reserved.
//

//зомби

#include <stdio.h>
#include <iostream>
#include "basic.cpp"

using std ::cout;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class stormtrooperZombie : public stormtrooper{
public:
    void improve(){
        Health = maxHealth;
        maxSorcery = maxSorcery * 1.2;
        sorcery = maxSorcery;
    }
    stormtrooperZombie(){
        Health = 100;
        maxHealth = 100;
        sorcery = 10;
        maxSorcery = 50;
        damage = 8;
    }
    ~stormtrooperZombie(){}
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class wizardZombie : public wizard{
public:
    void improve(){
        Health = maxHealth;
        maxSorcery = maxSorcery * 1.1;
        sorcery = maxSorcery;
}
    wizardZombie(){
        Health = 10;
        maxHealth = 10;
        sorcery = 60;
        maxSorcery = 60;
        damage = 2;
    }
    ~wizardZombie(){}
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class doctorZombie : public doctor{
public:
    void improve(){
        Health = maxHealth;
        sorcery = maxSorcery;
    }
    doctorZombie(){
        Health = 5;
        maxHealth = 5;
        sorcery = 40;
        maxSorcery = 40;
        damage = 5;
    }
    ~doctorZombie(){}
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class cavalierZombie : public cavalier{
public:
    void improve(){
        Health = maxHealth;
        damage = damage * 1.2;
        sorcery = maxSorcery;
    }
    cavalierZombie(){
        Health = 80;
        maxHealth = 80;
        sorcery = 0;
        maxSorcery = 0;
        damage = 7;
    }
    ~cavalierZombie(){}
};
