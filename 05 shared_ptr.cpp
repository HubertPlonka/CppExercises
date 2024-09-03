#include <memory>
#include <vector>
#include <iostream>

class Account {
public:
    int accountId;
    double balance;

    Account(int id, double initialBalance) : accountId(id), balance(initialBalance) {}
};

class Transaction {
public:
    int fromAccountId;
    int toAccountId;
    double amount;

    Transaction(int from, int to, double amt) : fromAccountId(from), toAccountId(to), amount(amt) {}
};

class Bank {
public:
    std::vector<std::shared_ptr<Account>> accounts;
    std::vector<std::shared_ptr<Transaction>> transactions;

    void transfer(std::shared_ptr<Account> from, std::shared_ptr<Account> to, double amount) {
        if(from->balance >= amount){
            from->balance -= amount;
            to->balance += amount;
            transactions.push_back(std::make_shared<Transaction>(from->accountId, to->accountId, amount));
        } else {
            std::cout << "Amount bigger than balance" << std:: endl;
        }
    }

    void printTransactions() {
        for (const auto& transaction : transactions){
        std::shared_ptr<Account> fromAccount;
        std::shared_ptr<Account> toAccount;
        
        for(const auto& account : accounts){
            if(account->accountId == transaction->fromAccountId){
                fromAccount = account;
            }
            if(account->accountId == transaction->toAccountId){
                toAccount = account;
            }
        }
            std::cout << "From " << fromAccount->accountId <<
                 " to " << toAccount->accountId << " amount of " << transaction->amount << std::endl;
        
        }
    }
};

int main() {
    Bank bank;

    // Create some accounts
    bank.accounts.push_back(std::make_shared<Account>(1, 100.0));
    bank.accounts.push_back(std::make_shared<Account>(2, 200.0));
    bank.accounts.push_back(std::make_shared<Account>(3, 300.0));

    // Perform some transactions
    bank.transfer(bank.accounts[0], bank.accounts[1], 50.0);
    bank.transfer(bank.accounts[1], bank.accounts[2], 75.0);
    bank.transfer(bank.accounts[0], bank.accounts[2], 25.0);

    // Print out all transactions
    bank.printTransactions();

    return 0;
}

/*
Create a simple banking system that manages accounts and transactions. You'll need to use std::shared_ptr and std::unique_ptr to manage the memory of accounts and transactions.

Requirements:

    Create a Bank class that manages a list of Account objects using std::shared_ptr.
    Create an Account class that has a unique identifier (e.g., accountId) and a balance.
    Create a Transaction class that represents a transaction between two accounts.
    Implement a transfer method in the Bank class that takes two Account objects and a transaction amount as input. This method should:
        Create a new Transaction object using std::unique_ptr.
        Update the balances of the two accounts involved in the transaction.
        Add the transaction to a list of transactions using std::shared_ptr.
    Implement a printTransactions method in the Bank class that prints out all transactions.

Constraints:

    Use std::shared_ptr to manage the list of accounts in the Bank class.
    Use std::unique_ptr to manage the Transaction objects.
    Ensure that the Account objects are not deleted until all transactions involving them are completed.

Starting code:

cpp

#include <memory>

#include <vector>

#include <iostream>


class Account {

public:

    int accountId;

    double balance;


    Account(int id, double initialBalance) : accountId(id), balance(initialBalance) {}

};


class Transaction {

public:

    int fromAccountId;

    int toAccountId;

    double amount;


    Transaction(int from, int to, double amt) : fromAccountId(from), toAccountId(to), amount(amt) {}

};


class Bank {

public:

    std::vector<std::shared_ptr<Account>> accounts;

    std::vector<std::shared_ptr<Transaction>> transactions;


    void transfer(std::shared_ptr<Account> from, std::shared_ptr<Account> to, double amount) {

        // Implement me!

    }


    void printTransactions() {

        // Implement me!

    }

};


int main() {

    Bank bank;


    // Create some accounts

    bank.accounts.push_back(std::make_shared<Account>(1, 100.0));

    bank.accounts.push_back(std::make_shared<Account>(2, 200.0));

    bank.accounts.push_back(std::make_shared<Account>(3, 300.0));


    // Perform some transactions

    bank.transfer(bank.accounts[0], bank.accounts[1], 50.0);

    bank.transfer(bank.accounts[1], bank.accounts[2], 75.0);

    bank.transfer(bank.accounts[0], bank.accounts[2], 25.0);


    // Print out all transactions

    bank.printTransactions();


    return 0;

}

Your task is to complete the transfer and printTransactions methods in the Bank class. Good luck!