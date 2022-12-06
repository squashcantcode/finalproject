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
    CheckingAccount* userAccount1 = new CheckingAccount(500);
    CreditAccount* userAccount2 = new CreditAccount(500);
    SavingsAccount* userAccount3 = new SavingsAccount(500);
    accounts.push_back(userAccount1);
    accounts.push_back(userAccount2);
    accounts.push_back(userAccount3);
}

void destroyVector(vector<BankAccount*>& accounts)
{
    for(int i = 0; i < accounts.size(); i++)
    {
        delete accounts.at(i);
        accounts.erase(accounts.begin()+i);
    }
}

int main()
{
    vector<BankAccount*> accounts;
    createVector(accounts);
    for(int i = 0; i < accounts.size(); i++)
    {
        cout << "List all the information about your accounts" << endl;
        accounts[i]->PrintInfo();
        cout << "Withdraw any money you may need" << endl;
        accounts[i]->withdraw();
        cout << "Deposit any money for future spending or investing" << endl;
        accounts[i]->deposit();
    }
    destroyVector(accounts);
    return 0;
}