#include "BankAccount.h"

BankAccount::BankAccount()
{
    accountHolderName = "";
    accountHolderPassword = "";
    checkingAccountBalance = 0.0;
    creditAccountBalance = 0.0;
    savingAccountBalance = 0.0;
}

BankAccount::BankAccount(string accHolderName, string accHolderPassword, double checkingBalance, double creditBalance, double savingBalance)
{
    SetData(accHolderName, accHolderPassword, checkingBalance, creditBalance, savingBalance);
}

void BankAccount::SetData(string accHolderName, string accHolderPassword, double checkingBalance, double creditBalance, double savingBalance)
{
    accountHolderName = accHolderName;
    accountHolderPassword = accHolderPassword;
    checkingAccountBalance = checkingBalance;
    creditAccountBalance = creditBalance;
    savingAccountBalance = savingBalance;
}