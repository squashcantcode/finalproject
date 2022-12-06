#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H

#include <cmath>
#include <iostream>
#include "BankAccount.h"

using namespace std;

class SavingsAccount : public BankAccount
{
    public:
        void withdraw();
        void deposit();
        double CalculateAPY(double interest);
        void PrintItem() const;
    protected:
        double savingsAccountBalance;
        double APY;

};

#endif
// Create APY 
// Implement projected balance based on APY