#ifndef BANKACCOUNT.H
#define BANKACCOUNT.H
#include <iostream>
#include <string>

using namespace std;

class BankAccount
{
    public:
        BankAccount();
        virtual void withdraw();
        virtual void deposit();
    protected:
        string accountUsername;
        string accountPassword;
        double cashIn;
        double cashOut;
};

class AccountCredentials : public BankAccount
{
    public:
        void PromptCredentials();
};

#endif