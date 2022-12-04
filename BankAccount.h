#ifndef BANKACCOUNT.H
#define BANKACCOUNT.H
#include <iostream>
#include <string>

using namespace std;

class BankAccount
{
    public:
        BankAccount();
        BankAccount(string accHolderName, string accHolderPassword);
        virtual void withdraw();
        virtual void deposit();
        virtual void PrintInfo() = 0;

    protected:
        string accountHolderName;
        string accountHolderPassword;
        double cashIn;
        double cashOut;
};

#endif