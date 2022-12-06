#include <iostream>
#include <vector>
#include <string>
#include "BankAccount.h"
#include "CheckingAccount.h"
#include "CreditAccount.h"
#include "SavingsAccount.h"

using namespace std;

void createVector(vector<BankAccount*>& accounts)
{
    BankAccount* privateAccount;
    CheckingAccount* userAccount1 = new CheckingAccount;
    CreditAccount* userAccount2 = new CreditAccount;
    SavingsAccount* userAccount3 = new SavingsAccount;
    accounts.push_back(userAccount1);
    accounts.push_back(userAccount2);
    accounts.push_back(userAccount3);
}

int main()
{
    vector<BankAccount*> accounts;

    for(int i = 0; i < accounts.size(); i++)
    {
        h;
    }
}