#include <iostream>

using namespace std;
class BankAccount
{
    public:
    int accountNumber;
    double balance;
    BankAccount(int accountNumber, double balance)
    {
        this->accountNumber = accountNumber;
        this->balance = balance;
    };
    ~BankAccount()
    {
        cout << "object destroyed" << endl;
    };
    double deposit(double amount)
    {
       balance += amount;
       cout << "sukces, stan konta to " << balance << endl;
       return balance;
    };
    double withdraw(double amount)
    {
        if(balance >= amount){
       balance -= amount; 
       cout << "sukces, stan konta to " << balance << endl;
        }
        else{
            cout << "brak wystarczających środków" << endl;
        }
       return balance;
    };
    
    double getBalance()
    {
        return balance;
    }
    
};

int main() {
    BankAccount account1(1234, 1000.0);
    account1.deposit(500.0);
    account1.withdraw(200.0);
    std::cout << "Balance: " << account1.getBalance() << std::endl;

    BankAccount account2(5678, 500.0);
    account2.withdraw(1000.0); 

    return 0;
}

/*
`````````````````````````````````````````````````````````````````````````````````````````````
Create a class called BankAccount that represents a bank account. The class should have the following attributes:

    accountNumber: an integer that represents the account number
    balance: a double that represents the current balance of the account

The class should have the following methods:

    A constructor that takes an integer accountNumber and a double initialBalance as parameters, and initializes the object with these values.
    A destructor that prints a message indicating that the object is being destroyed.
    A method deposit that takes a double amount as a parameter and adds it to the balance.
    A method withdraw that takes a double amount as a parameter and subtracts it from the balance if there are sufficient funds.
    A method getBalance that returns the current balance.

Constraints:

    The constructor should initialize the accountNumber and balance attributes.
    The destructor should print a message to the console indicating that the object is being destroyed.
    The deposit method should add the amount to the balance and print a message to the console indicating that the deposit was successful.
    The withdraw method should subtract the amount from the balance if there are sufficient funds, and print a message to the console indicating that the withdrawal was successful. If there are insufficient funds, it should print an error message.
    The getBalance method should return the current balance.

Example usage:

cpp

int main() {

    BankAccount account1(1234, 1000.0);

    account1.deposit(500.0);

    account1.withdraw(200.0);

    std::cout << "Balance: " << account1.getBalance() << std::endl;


    BankAccount account2(5678, 500.0);

    account2.withdraw(1000.0); // should print an error message


    return 0;

}

Your task:

Implement the BankAccount class with the specified attributes and methods. Make sure to follow the constraints and example usage provided.

Hint:

You can use the std::cout statement to print messages to the console. For example:

cpp

std::cout << "Account created with account number " << accountNumber << " and initial balance " << initialBalance << std::endl;

Good luck!