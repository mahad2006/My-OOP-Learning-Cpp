// 03-Abstraction/03-data-hiding-example.cpp
// Demonstrates data hiding using private variables and public methods in C++
#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
private:
    string accountHolder; // hidden: can't be accessed directly
    double balance;       // hidden: secure data

public:
    // Constructor
    BankAccount(string name, double initialBalance)
        : accountHolder(name), balance(initialBalance) {}

    // Public method to deposit money (controlled access)
    void deposit(double amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << amount << " deposited successfully." << endl;
        }
        else
        {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    // Public method to withdraw money with checks
    void withdraw(double amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
            cout << amount << " withdrawn successfully." << endl;
        }
        else
        {
            cout << "Invalid or insufficient funds!" << endl;
        }
    }

    // Public method to view balance (controlled access)
    double getBalance() const
    {
        return balance;
    }
};

int main()
{
    BankAccount acc("John Doe", 500.0);

    acc.deposit(200.0);
    acc.withdraw(100.0);
    cout << "Current balance: $" << acc.getBalance() << endl;

    // Can't do: acc.balance = 9999; // Error: private member

    return 0;
}
