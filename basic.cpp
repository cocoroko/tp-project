//
//  main.cpp
//  my game
//
//  Created by Есения on 22/04/2020.
//  Copyright © 2020 Есения. All rights reserved.
//

#include <iostream>
#include "humanity/humanity.h"
#include "elfs/elfs.h"
#include "Information/PrintInfo.h"
using namespace std;

int main() {
    PrintInfo info;
    info.Intro();

    elfs player1;
    humanity player2;

    string s1 = "cavalier";
    string s2 = "mag";
    string s3 = "lekar";


    player1.Addelfs(s1);
    player1.Addelfs(s2);
    player1.Addelfs(s3);
    
    player2.Addhumanity(s1);
    player2.Addhumanity(s2);
    player2.Addhumanity(s3);
    
    
    player1.Info();
    player2.Info();
}

