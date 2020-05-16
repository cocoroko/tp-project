//
//  makearmy.cpp
//  qwerty
//
//  Created by Есения on 24/04/2020.
//  Copyright © 2020 Есения. All rights reserved.
//

#pragma once
#include "../Units/ConcreteUnits.h"

class elfsCreator {
public:
    ork* Createork() {
        return new ork;
    }
    Ecavalier* CreateEcavalier() {
        return new Ecavalier;
    }
    Elekar* CreateElekar() {
        return new Elekar;
    }
};

class humanityCreator {
public:
    scientist* Createscientist() {
        return new scientist;
    }
    Hcavalier* CreateHcavalier() {
        return new Hcavalier;
    }
    Hlekar* CreateHlekar() {
        return new Hlekar;
    }
};
