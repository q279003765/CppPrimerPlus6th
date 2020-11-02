//
//  usett0.cpp
//  CppPrimerPlus6th
//
//  Created by xxin on 2020/11/2.
//  Copyright © 2020 xxin. All rights reserved.
//

#include "list_13_3_usett0.h"

#include <iostream>
#include "list_13_1_tabtenn0.h"

int main()
{
    using std::cout;
    
    TableTennisPlayer player1("Chuck", "Blizzard", true);
    TableTennisPlayer player2("Tara", "Boomdea", false);
    
    player1.Name();
    
    if (player1.HasTable())
        cout << ": has a table.\n";
    else
        cout << ": hasn't a table.\n";

    player2.Name();
    if (player2.HasTable())
        cout << ": has a table";
    else
        cout << ": hasn't a table.\n";
    
    return 0;
}
