//
//  list_13_4_tabtenn1.cpp
//  CppPrimerPlus6th
//
//  Created by xxin on 2020/11/2.
//  Copyright © 2020 xxin. All rights reserved.
//

#include "list_13_4_tabtenn1.h"
#include <iostream>

//  TableTennisPlayer
TableTennisPlayer::TableTennisPlayer(const string & fn, const string & ln, bool ht) : firstname(fn), lastname(ln), hasTable(ht) {}

void TableTennisPlayer::Name() const
{
    std::cout << lastname << " " << firstname;
}

/*
 *  RatedPlayer构造函数
 */
RatedPlayer::RatedPlayer(unsigned int r, const string & fn, const string & ln, bool ht) : TableTennisPlayer(fn, ln, ht)
{
    rating = r;
}

RatedPlayer::RatedPlayer(unsigned int r, const TableTennisPlayer & tp) : TableTennisPlayer(tp), rating(r)
{
    
}
