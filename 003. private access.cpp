#include <iostream>
#include <vector>
#include <string>
#include <memory>

using namespace std;

class BankAccount
{
    public:
    string owner_;
    BankAccount(long accountNumber, string owner) 
    : accountNumber(accountNumber), owner_(owner), balance_(0.0f){}
    void deposit(double amount){
        balance_ += amount;
    }
    void withdraw(double amount){
        if(balance_ >= amount){
        balance_ -= amount;
        } else {
            cout << "Brak tylu środków" << endl;
        }
    }
    double getBalance(){
        return balance_;
    }
    void setOwner(string owner){
        owner_ = owner;
    }
    long getAccountNumber() {
        return accountNumber;
    }
    
    private:
    double balance_;
    long accountNumber;
    
};

class Bank
{
    public:
    void createAccount(long accountNumber, string owner){
        unique_ptr<BankAccount> account = make_unique<BankAccount>(accountNumber, owner);
        accounts.push_back(move(account));
    }
    
    void displayAccounts() {
        for (const auto& account : accounts) {
            cout << "Numer konta: " << account->getAccountNumber() << ", Właściciel: " << account->owner_ << ", Środki: " << account->getBalance() << endl;
        }
    }
    
    
    private:
    vector<unique_ptr<BankAccount>> accounts;
};

int main()
{
    Bank bank;
    bank.createAccount(123456, "Jan Kowalski");
    bank.createAccount(789012, "Paweł Nowak");
    bank.displayAccounts();
    return 0;
}

/*
````````````````````````````````````````````````````````````
Create a BankAccount class with the following attributes:

balance (account balance) - should be private

accountNumber (account number) - should be protected

owner (account owner) - should be public

The BankAccount class should have the following methods:

deposit (deposit) - should be public, should increase the account balance by the given amount

withdraw (withdrawal) - should be public, should decrease the account balance by the given amount, if there is sufficient funds in the account

getBalance (get account balance) - should be public, should return the current account balance

getAccountNumber (get account number) - should be protected, should return the account number

setOwner (set account owner) - should be public, should set the account owner

Also, create a Bank class with the following attributes:

accounts (list of accounts) - should be private

The Bank class should have the following methods:

createAccount (create account) - should be public, should create a new account and add it to the list of accounts

getAccount (get account) - should be public, should return the account with the given account number, if it exists

printAccounts (print accounts) - should be public, should print the list of all accounts

Requirements:

The BankAccount class should be designed to prevent access to private attributes from outside the class.

The Bank class should be designed to prevent access to the private list of accounts from outside the class.

The methods of the BankAccount class should be designed to prevent access to private attributes from outside the class.

The methods of the Bank class should be designed to prevent access to the private list of accounts from outside the class.

Instruction:

Write a C++ code that implements the above requirements. Include the appropriate access modifiers (public, private, protected) for the attributes and methods of the classes.

Good luck!