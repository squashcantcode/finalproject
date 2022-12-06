#include "BankAccount.h"

void BankAccount::deposit()
{
    cashIn = 0;
}

void BankAccount::withdraw()
{
    cashOut = 0;
}

AccountCredentials::AccountCredentials()
{
    accountUsername = "";
    accountPassword = "";
}

void AccountCredentials::PromptCredentials()
{
    cout << "Enter your username and password below:" << endl;
    cin >> accountUsername;
    cout << endl;
    cin >> accountPassword;
}