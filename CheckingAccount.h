#ifndef CHECKINGACCOUNT_H
#define CHECKINGACCOUNT_H
#include <iostream>
#include <string>
#include <iomanip>
#include "BankAccount.h"

using namespace std;

class CheckingAccount : public BankAccount
{
    public:
        CheckingAccount(double defaultBalance);
        void withdraw() override;
        void deposit() override;
        void PrintInfo() const override;
    protected:
        double checkingAccountBalance;
};

#endif