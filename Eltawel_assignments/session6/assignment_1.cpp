#include <iostream>


class BankAcount
{
    public:
        void deposit(double amount)
        {
            balance += amount;
        }
        void withdraw(double amount)
        {
            balance -= amount;
        }
        void displayInfo()
        {
            std::cout<<"Account no : "<<accountNumber<<" balance: "<<balance<<std::endl;
        }


    protected:
        int accountNumber;
        double balance;

};

class SavingAccount : public BankAcount {
    public:
        double calculateInterest()
        {
            balance = balance + interestRate* balance;
            return balance;
        }

        void displayInfo()
        {
            std::cout<<"Account no : "<<accountNumber<<" balance: "<<balance<<" interest rate: "<<interestRate<< std::endl;
        }        
    private:
        double interestRate;
};

class CheckingAccount : public BankAcount{

    public:
        double detectTransactionFee()
        {
            balance -= transactionFee;
            return balance;
        }
        void displayInfo()
        {
            std::cout<<"Account no : "<<accountNumber<<" balance: "<<balance<<" transation fee: "<<transactionFee<< std::endl;
        }  
    private:
        double transactionFee;
};