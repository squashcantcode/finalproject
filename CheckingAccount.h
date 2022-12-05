#ifndef CHECKINGACCOUNT.H
#define CHECKINGACCOUNT.H

#include <iostream>

using namespace std;

class CheckingAccount : public BankAccount
{
public:
    void withdraw();
    void deposit();
    void PrintItem() const;
protected:
    double checkingAccountBalance;
};

#endif