#ifndef BANKACCOUNT.H
#define BANKACCOUNT.H
#include <iostream>
#include <string>

using namespace std;

class BankAccount
{
    public:
        BankAccount();
        BankAccount(string accHolderName, string accHolderPassword, double checkingBalance, double creditBalance, double savingBalance);
        void SetData(string accHolderName, string accHolderPassword, double checkingBalance, double creditBalance, double savingBalance);
        virtual void withdraw(double cashO);
        virtual void deposit(double cashI);
        virtual void PrintInfo() = 0;

    protected:
        string accountHolderName;
        string accountHolderPassword;
        double cashIn;
        double cashOut;
};

#endif