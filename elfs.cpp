//
//  elfs.cpp
//  qwerty
//
//  Created by Есения on 23/04/2020.
//  Copyright © 2020 Есения. All rights reserved.
//

//эльфы

#include <stdio.h>
#include <iostream>
#include "basic.cpp"

using std ::cout;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class stormtrooperElfs : public stormtrooper{
public:
    void improve(){
        Health = maxHealth;
        maxSorcery = maxSorcery * 1.05;
        sorcery = maxSorcery;
    }
    stormtrooperElfs(){
        Health = 40;
        maxHealth = 40;
        sorcery = 30;
        maxSorcery = 40;
        damage = 10;
    }
    ~stormtrooperElfs(){}
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class wizardElfs : public wizard{
public:
    void improve(){
        Health = maxHealth;
        sorcery = maxSorcery;
        damage = damage * 1.1;
}
    wizardElfs(){
        Health = 60;
        maxHealth = 60;
        sorcery = 100;
        maxSorcery = 100;
        damage = 5;
    }
    ~wizardElfs(){}
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class doctorElfs : public doctor{
public:
    void improve(){
        Health = maxHealth;
        sorcery = maxSorcery;
    }
    doctorElfs(){
        Health = 20;
        maxHealth = 20;
        sorcery = 20;
        maxSorcery = 20;
        damage = 2;
    }
    ~doctorElfs(){}
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class cavalierElfs : public cavalier{
public:
    void improve(){
        Health = maxHealth;
        sorcery = maxSorcery;
        maxSorcery = maxSorcery * 1.05;
        damage = damage * 1.2;
    }
    cavalierElfs(){
        Health = 100;
        maxHealth = 100;
        sorcery = 0;
        maxSorcery = 0;
        damage = 7;
    }
    ~cavalierElfs(){}
};
