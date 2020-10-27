//
//  list_4_2_string.cpp
//  CppPrimerPlus6th
//
//  Created by xxin on 2020/10/26.
//  Copyright © 2020 xxin. All rights reserved.
//

#include "list_4_2_string.hpp"
#include <iostream>
#include <cstring>

int string();

/*
 *
int main()
{
    string();
}
 */

int string()
{
    using namespace std;
    const int Size = 15;
    
    char name1[Size];
    char name2[Size] = "C++owboy";
    
    cout << "Howdy! I'm " << name2 << "! What's your name?\n";
    
    cin >> name1;
    
    cout << "Well, " << name1 << ", your name has " << strlen(name1) << " letters and is stored\n" << "in an array of " << sizeof(name1) << " bytes.\n";
    cout << "Your initial is " << name1[0] << ".\n";

    name2[3] = '\0';    // set to null character
    cout << "Here are first 3 characters of my name: " << name2 << endl;
    
    return 0;
}
