#include "CreditAccount.h"

CreditAccount::CreditAccount(double defaultBalance)
{
    creditAccountBalance = defaultBalance;
}

void CreditAccount::withdraw()
{
    cout << "Enter amount to withdraw:" << endl;
    cin >> cashIn;
    creditAccountBalance =- cashIn;
    cout << "New total:\n" << fixed << setprecision(2) <<  creditAccountBalance << endl;
}

void CreditAccount::deposit()
{
    cout << "Enter amount to deposit:" << endl;
    cin >> cashOut;
    creditAccountBalance =- cashOut;
    cout << "New total:\n" << fixed << setprecision(2) << creditAccountBalance << endl;
}

void CreditAccount::PrintInfo() const
{
    cout << "Credit account balance:\n" << fixed << setprecision(2) << creditAccountBalance << endl;
}