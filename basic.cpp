//
//  main.cpp
//  my game
//
//  Created by Есения on 22/04/2020.
//  Copyright © 2020 Есения. All rights reserved.
//

#include <iostream>
#include "elfs/elfs.h"
#include "humanity/humanity.h"
#include "Information/PrintInfo.h"
using namespace std;

int main() {
    PrintInfo info;
    info.Intro();

    elfs player1;
    humanity player2;

    string s1 = "ork";
    string s2 = "scientist";
    string s3 = "lekar";
    string s4 = "covalier";

    player1.Addelf(s1);
    player1.Addelf(s3);
    player1.Addelf(s4);
    player2.Addhumanity(s2);
    player2.Addhumanity(s3);
    player2.Addhumanity(s4);

    player1.Info();
    player2.Info();
}
