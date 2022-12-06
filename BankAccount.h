#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class BankAccount
{
    public:
        virtual void withdraw();
        virtual void deposit();
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