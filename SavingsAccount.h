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
        SavingsAccount(double defaultBalance);
        void withdraw() override;
        void deposit() override;
        double CalculateInterest();
        void PrintInfo() const override;
    protected:
        double savingsAccountBalance;
        const double APY = 0.05;
        double annualCompoundInterest;
        int compoundingPeriods = 5; //  As in 5 years.

};

#endif