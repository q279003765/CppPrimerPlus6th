//
//  list_3_14_typecast.cpp
//  CppPrimerPlus6th
//
//  Created by xxin on 2020/10/23.
//  Copyright © 2020 xxin. All rights reserved.
//

#include "list_3_14_typecast.hpp"
#include <iostream>

int typecast();

/*
 *
int main()
{
    typecast();
}
 */

int typecast()
{
    using namespace std;
    int auks, bats ,coots;

    auks = 19.99 + 11.99;
    
    bats = (int) 19.99 + (int) 11.99;
    coots = int (19.99) + int (11.99);
    
    cout << "auks = " << auks << ", bats = " << bats << ", coots = " << coots << endl;
    
    char ch = 'Z';
    cout << "The code for " << ch << " is ";
    cout << int(ch) << endl;
    cout << "Yes, the code is ";
    cout << static_cast<int>(ch) << endl;
        
    return 0;
}
