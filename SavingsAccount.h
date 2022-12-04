#ifndef SAVINGSACCOUNT.H
#define SAVINGSACCOUNT.H
#include <cmath>

class SavingsAccount : public BankAccount
{
public:
    double CalculateAPY(double interest);
protected:
    double savingsAccountBalance;
    double APY;

};

#endif
// Create APY 
// Implement projected balance based on APY