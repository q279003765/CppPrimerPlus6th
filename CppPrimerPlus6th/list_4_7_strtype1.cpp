//
//  list_4_7_strtype1.cpp
//  CppPrimerPlus6th
//
//  Created by xxin on 2020/10/26.
//  Copyright © 2020 xxin. All rights reserved.
//

#include "list_4_7_strtype1.hpp"
#include <iostream>
#include <string>

int strtype1();

/*
 *
int main()
{
    strtype1();
}
 */

int strtype1()
{
    using namespace std;
    char charr1[20];
    char charr2[20] = "jaguar";
    string str1;
    string str2 = "panther";
    
    cout << "Enter a kind of feline: ";
    cin >> charr1;
    cout << "Enter another kind feline: ";
    cin >> str1;
    cout << "Here are some felines:\n" << charr1 << " " << charr2 << " " << str1 << " " << str2 << endl;
    cout << "The third letter in " << charr2 << " is " << charr2[2] << endl;
    cout << "The third letter in " << str2 << " is " << str2[2] << endl;
    
    return 0;
}
