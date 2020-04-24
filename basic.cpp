//
//  main.cpp
//  my game
//
//  Created by Есения on 22/04/2020.
//  Copyright © 2020 Есения. All rights reserved.
//

#include <iostream>

//Базовый класс
class basicUnit{
public:
    double Health = 0;
    double maxHealth = 0;
    double sorcery = 0;
    double maxSorcery = 0;
    double damage = 0;
    virtual void improve() = 0;
    virtual ~basicUnit(){}
};


//Базовые типы

//штурмовик
class stormtrooper : protected basicUnit{
public:
    int grenades; //у него помимо всего есть еще гранаты
    virtual void improve() = 0;
    virtual ~stormtrooper(){}
};

//маг
class wizard : protected basicUnit{
public:
    int potion; //помиио всего у него еще есть зелье
    virtual void improve() = 0;
    virtual ~wizard(){}
};


//лекарь
class doctor : protected basicUnit{
public:
    virtual void improve() = 0;
    virtual ~doctor(){}
};


//ковалерия
class cavalier : protected basicUnit{
public:
    virtual void improve() = 0;
    virtual ~cavalier(){}
};



