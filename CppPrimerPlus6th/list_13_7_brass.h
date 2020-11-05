//
//  list_13_7_brass.h
//  CppPrimerPlus6th
//
//  Created by xxin on 2020/11/4.
//  Copyright © 2020 xxin. All rights reserved.
//

#ifndef LIST_13_7_BRASS_H
#define LIST_13_7_BRASS_H

#include <string>

//  Brass Account Class
class Brass
{
private:
    std::string fullName;
    long acctNum;
    double balance;
public:
    Brass(const std::string &s = "Nullbody",long an = -1, double bal = 0.0);
    void Deposit(double amt);
    virtual void Withdraw(double amt);
    double Balance() const;
    virtual void ViewAcct() const;
    virtual ~Brass(){}
};

//  Brass Plus Account Class
class BrassPlus : public Brass
{
private:
    double maxLoan;
    double rate;
    double owesBank;
public:
    BrassPlus(const std::string &s = "Nullbody", long an = -1, double bal  = 0.0, double ml = 500, double r = 0.11125);
    BrassPlus(const Brass & ba, double ml =500, double r = 0.11125);
    
    virtual void ViewAcct() const;
    virtual void Withdraw(double amt);
    void ResetMax(double m){maxLoan = m;};
    void ResetRate(double r){rate = r;};
    void ResetOwes(){owesBank = 0;};
};

#endif
