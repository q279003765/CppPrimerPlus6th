//
//  list_4_3_instr1.cpp
//  CppPrimerPlus6th
//
//  Created by xxin on 2020/10/26.
//  Copyright © 2020 xxin. All rights reserved.
//

#include "list_4_3_instr1.hpp"
#include <iostream>
#include <cstring>

int instr1();

/*
 *
int main()
{
    instr1();
}
 */

int instr1()
{
    using namespace std;
    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];
    
    cout << "Enter your name:\n";
    cin >> name;
    cout << "Enter your favorite dessert:\n";
    cin >> dessert;
    cout << "I have some delicious " << dessert << " for you, " << name << ".\n";
    
    return 0;
}
