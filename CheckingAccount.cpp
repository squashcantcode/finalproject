#include "CheckingAccount.h"

void CheckingAccount::withdraw()
{
    cout << "Enter amount to withdraw:" << endl;
    cin >> cashIn;
    checkingAccountBalance =- cashIn;
    cout << "New total:\n" << fixed << setprecision(2) << checkingAccountBalance << endl;
}

void CheckingAccount::deposit()
{
    cout << "Enter amount to deposit:" << endl;
    cin >> cashOut;
    checkingAccountBalance =- cashOut;
    cout << "New total:\n" << fixed << setprecision(2) << checkingAccountBalance << endl;
}

void CheckingAccount::PrintInfo() const
{
    cout << "Checking account balance:\n" << fixed << setprecision(2) << checkingAccountBalance << endl;
}