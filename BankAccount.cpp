#include "BankAccount.h"

BankAccount::BankAccount()
{
    accountHolderName = "";
    accountHolderPassword = "";
}

BankAccount::BankAccount(string accName, string accPassword)
{
    accountHolderName = accName;
    accountHolderPassword = accPassword;
}

void BankAccount::deposit()
{
    cashIn = 0;
}

void BankAccount::withdraw()
{
    cashOut = 0;
}

void BankAccount::PrintInfo()
{
    cout << BankAccount::BankAccount(string accName, string accPassword) << endl;
}