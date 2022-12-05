#ifndef CREDITACCOUNT.H
#define CREDITACCOUNT.H

class CreditAccount : public BankAccount
{
    public:
        void withdraw();
        void deposit();
        void PrintItem() const;
    protected:
        double creditAccountBalance;
};

#endif