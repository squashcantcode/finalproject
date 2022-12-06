#include "SavingsAccount.h"

void SavingsAccount::withdraw()
{
    cout << "Enter amount to withdraw:" << endl;
    cin >> cashIn;
    savingsAccountBalance =- cashIn;
    cout << "New total:\n" << fixed << setprecision(2) << savingsAccountBalance << endl;
}

void SavingsAccount::deposit()
{
    cout << "Enter amount to deposit:" << endl;
    cin >> cashOut;
    savingsAccountBalance =- cashOut;
    cout << "New total:\n" << fixed << setprecision(2) << savingsAccountBalance << endl;
}

void SavingsAccount::PrintInfo() const
{
    cout << "Savings account balance:\n" << fixed << setprecision(2) << savingsAccountBalance << endl;
}