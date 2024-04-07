#include <iostream>
#include <vector>
#include <string>

class BankAccount {

    public:

        void Deposit(float fund)
        {
            accountBalance += fund;
        }
        void Withdraw(float fund)
        {
            accountBalance -= fund;
        }
        int GetAccountNumber()
        {
            return accountNumber;
        }
        std::string GetAccountHolder()
        {
            return accountHolderName;
        }
        std::string GetAccountType()
        {
            return accountType;
        }
        int GetAccountBalance()
        {
            return accountBalance;
        }
        void DisplayAccountInfo()
        {
            std::cout<<"Account number: "<<accountNumber<<" Account name: "<<accountHolderName<<" AccountType: "<<accountType<<" Account balance: "<<accountBalance<<std::endl;
        }   
    private:
        int accountNumber;
        std::string accountHolderName;
        std::string accountType;
        float accountBalance;
};


class Bank {
    public:
        void AddAccount(BankAccount accout)
        {
            BankAccounts.emplace_back(accout);
        }
        float GetTotalBalance()
        {
            float Accounts = 0;
            std::vector<BankAccount>::iterator it = BankAccounts.begin();
            for(auto account : BankAccounts)
            {
                Accounts += account.GetAccountBalance();
            }
            return Accounts;
        }

    private:
        std::vector<BankAccount> BankAccounts;
};



int main()
{   
    BankAccount b1, b2 ;
    b1.Deposit(30);
    b2.Deposit(39);
    Bank B1 ;
    B1.AddAccount(b1);
    B1.AddAccount(b2);
    float no = B1.GetTotalBalance();
    std::cout<< no <<std::endl;
    return 0;
}