//
//  orks.cpp
//  qwerty
//
//  Created by Есения on 23/04/2020.
//  Copyright © 2020 Есения. All rights reserved.
//


//орки 

#include <stdio.h>
#include <iostream>
#include "basic.cpp"

using std ::cout;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class stormtrooperOrks : public stormtrooper{
public:
    void improve(){
        Health = maxHealth;
        sorcery = maxSorcery;
        damage = damage * 1.1;
    }
    stormtrooperOrks(){
        Health = 40;
        maxHealth = 40;
        sorcery = 30;
        maxSorcery = 40;
        damage = 10;
    }
    ~stormtrooperOrks(){}
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class wizardOrks : public wizard{
public:
    void improve(){
        Health = maxHealth;
        sorcery = maxSorcery;
}
    wizardOrks(){
        Health = 20;
        maxHealth = 20;
        sorcery = 80;
        maxSorcery = 100;
        damage = 5;
    }
    ~wizardOrks(){}
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class doctorOrks : public doctor{
public:
    void improve(){
        Health = maxHealth;
        maxSorcery = maxSorcery * 1.2;
        sorcery = maxSorcery;
    }
    doctorOrks(){
        Health = 30;
        maxHealth = 30;
        sorcery = 30;
        maxSorcery = 30;
        damage = 1;
    }
    ~doctorOrks(){}
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class cavalierOrks : public cavalier{
public:
    void improve(){
        Health = maxHealth;
        sorcery = maxSorcery;
        damage = damage * 1.2;
    }
    cavalierOrks(){
        Health = 120;
        maxHealth = 120;
        sorcery = 0;
        maxSorcery = 0;
        damage = 4;
    }
    ~cavalierOrks(){}
};
