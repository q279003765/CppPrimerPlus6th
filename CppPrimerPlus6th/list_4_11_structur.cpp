//
//  list_4_11_structur.cpp
//  CppPrimerPlus6th
//
//  Created by xxin on 2020/10/26.
//  Copyright © 2020 xxin. All rights reserved.
//

#include "list_4_11_structur.hpp"
#include <iostream>

struct inflatable
{
    char name[20];
    float volume;
    double price;
};

int structur();

/*
 *
int main()
{
    structur();
}
 */

int structur()
{
    using namespace std;
    inflatable guest =
    {
        "Glorious Gloria",
        1.88,
        29.99
    };
    
    inflatable pal =
    {
        "Audacious Arthur",
        3.12,
        32.99
    };
    
    cout << "Expand your guest list with " << guest.name << " and " << pal.name << "!\n" << "You can have both for $" << guest.price + pal.price << ".\n";
    
    return 0;
}
