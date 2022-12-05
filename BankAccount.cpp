#include "BankAccount.h"

BankAccount::BankAccount()
{
    accountUsername = "";
    accountPassword = "";
}

void BankAccount::deposit()
{
    cashIn = 0;
}

void BankAccount::withdraw()
{
    cashOut = 0;
}

void AccountCredentials::PromptCredentials()
{
    cout << "Enter your username and password password below:" << endl;
    cin >> accountUsername;
    cout << endl;
    cin >> accountPassword;
}