#include <memory>
#include <iostream>

class AccountBalance {
public:
    int balance;
    AccountBalance(int initialBalance) : balance(initialBalance) {}
};

class BankAccount {
private:
    std::unique_ptr<AccountBalance> accountBalance;

public:
    BankAccount(int initialBalance) {
        accountBalance = std::make_unique<AccountBalance>(initialBalance);
    }

    void deposit(int amount) {
        accountBalance->balance += amount;
    }

    void withdraw(int amount) { 
        accountBalance->balance -= amount;
    }

    int getBalance() {
        return accountBalance-> balance;
    }
};

int main() {
    BankAccount account(100); 

    std::cout << "Initial balance: " << account.getBalance() << std::endl;

    account.deposit(50); // Deposit 50
    std::cout << "Balance after deposit: " << account.getBalance() << std::endl;

    account.withdraw(20); // Withdraw 20
    std::cout << "Balance after withdrawal: " << account.getBalance() << std::endl;

    return 0;
}

/*
Task:

Create a simple BankAccount class that uses unique_ptr to manage a dynamically allocated AccountBalance object. The BankAccount class should have the following methods:

    deposit(int amount): adds the specified amount to the account balance
    withdraw(int amount): subtracts the specified amount from the account balance
    getBalance(): returns the current account balance

Constraints:

    Use unique_ptr to manage the AccountBalance object.
    Implement the deposit and withdraw methods to update the account balance correctly.
    Ensure that the AccountBalance object is properly deleted when the BankAccount object is destroyed.

Starting code:

cpp

#include <memory>


class AccountBalance {

public:

    int balance;

    AccountBalance(int initialBalance) : balance(initialBalance) {}

};


class BankAccount {

private:

    // TODO: declare a unique_ptr to manage the AccountBalance object

    // ...


public:

    BankAccount(int initialBalance) {

        // TODO: initialize the unique_ptr with a new AccountBalance object

        // ...

    }


    void deposit(int amount) {

        // TODO: implement deposit method

        // ...

    }


    void withdraw(int amount) {

        // TODO: implement withdraw method

        // ...

    }


    int getBalance() {

        // TODO: implement getBalance method

        // ...

    }

};

Your task:

Complete the implementation of the BankAccount class using unique_ptr to manage the AccountBalance object. Make sure to implement the deposit, withdraw, and getBalance methods correctly.
*/