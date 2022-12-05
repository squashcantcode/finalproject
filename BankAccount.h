#ifndef BANKACCOUNT.H
#define BANKACCOUNT.H
#include <iostream>
#include <string>

using namespace std;

class BankAccount
{
    public:
        BankAccount();
        void withdraw();
        void deposit();
        virtual void PrintInfo() const = 0;
    protected:
        double cashIn;
        double cashOut;
};

class AccountCredentials : public BankAccount
{
    public:
        void PromptCredentials();
        AccountCredentials();
    protected:
        string accountUsername;
        string accountPassword;
};

#endif