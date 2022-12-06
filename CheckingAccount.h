#ifndef CHECKINGACCOUNT_H
#define CHECKINGACCOUNT_H

#include <iostream>
#include "BankAccount.h"

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