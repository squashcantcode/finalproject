#ifndef SAVINGSACCOUNT.H
#define SAVINGSACCOUNT.H
#include <cmath>

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