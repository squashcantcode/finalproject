#ifndef CREDITACCOUNT_H
#define CREDITACCOUNT_H
#include <iostream>
#include <iomanip>
#include "BankAccount.h"

class CreditAccount : public BankAccount
{
    public:
        CreditAccount(double defaultBalance);
        void withdraw();
        void deposit();
        void PrintInfo() const override;
    protected:
        double creditAccountBalance;
};

#endif