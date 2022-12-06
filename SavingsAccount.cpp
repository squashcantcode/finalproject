#include "SavingsAccount.h"

SavingsAccount::SavingsAccount(double defaultBalance)
{
    savingsAccountBalance = defaultBalance;
}

void SavingsAccount::withdraw()
{
    cout << "Enter amount to withdraw:" << endl;
    cin >> cashIn;
    savingsAccountBalance =- cashIn;
    SavingsAccount::CalculateInterest();
}

void SavingsAccount::deposit()
{
    cout << "Enter amount to deposit:" << endl;
    cin >> cashOut;
    savingsAccountBalance =- cashOut;
    SavingsAccount::CalculateInterest();
}

double SavingsAccount::CalculateInterest()
{
    annualCompoundInterest = savingsAccountBalance*(pow(1+APY,compoundingPeriods)-savingsAccountBalance);
    savingsAccountBalance = annualCompoundInterest;
    cout << "Expected projection after annual compound interest with 5-year compounding period: " << fixed << setprecision(2) << savingsAccountBalance << endl;
}

void SavingsAccount::PrintInfo() const
{
    cout << "Savings account balance:\n" << fixed << setprecision(2) << savingsAccountBalance << endl;
}