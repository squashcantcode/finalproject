#include "CheckingAccount.h"

CheckingAccount::CheckingAccount(double defaultBalance)
{
    checkingAccountBalance = defaultBalance;
}

void CheckingAccount::withdraw()
{
    cout << "Enter amount to withdraw:" << endl;
    cin >> cashIn;
    checkingAccountBalance -= cashIn;
    cout << "New total:\n" << fixed << setprecision(2) << checkingAccountBalance << "\n" << endl;
}

void CheckingAccount::deposit()
{
    cout << "Enter amount to deposit:" << endl;
    cin >> cashOut;
    checkingAccountBalance += cashOut;
    cout << "New total:\n" << fixed << setprecision(2) << checkingAccountBalance << "\n" << endl;
}

void CheckingAccount::PrintInfo() const
{
    cout << "Checking account balance:\n" << fixed << setprecision(2) << "$" << checkingAccountBalance << "\n" << endl;
}