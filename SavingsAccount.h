#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H
#include <cmath>
#include <iostream>
#include <iomanip>
#include "BankAccount.h"

using namespace std;

class SavingsAccount : public BankAccount
{
    public:
        void withdraw();
        void deposit();
        double CalculateAPY(double interest);
        void PrintInfo() const override;
    protected:
        double savingsAccountBalance;
        double APY;

};

#endif
// Create APY 
// Implement projected balance based on APY