#ifndef CREDITACCOUNT_H
#define CREDITACCOUNT_H
#include <iostream>
#include "BankAccount.h"

class CreditAccount : public BankAccount
{
    public:
        void withdraw();
        void deposit();
        virtual void PrintItem() const;
    protected:
        double creditAccountBalance;
};

#endif