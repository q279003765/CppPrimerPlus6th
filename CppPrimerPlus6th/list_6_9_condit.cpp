//
//  list_6_9_condit.cpp
//  CppPrimerPlus6th
//
//  Created by xxin on 2020/10/26.
//  Copyright © 2020 xxin. All rights reserved.
//

#include "list_6_9_condit.hpp"
#include <iostream>

int condit();

/*
 *
int main()
{
    condit();
}
 */

int condit()
{
    using namespace std;
    int a,b;
    
    cout << "Enter two integers:";
    cin >> a >> b;
    cout << "The larger of " << a << " and " << b;
    int c = a > b ? a : b;  // c = a if a > b, else c = b
    cout << " is " << c << endl;
    
    return 0;
}
