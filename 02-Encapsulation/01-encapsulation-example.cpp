/*
    02-Encapsulation/01-encapsulation-example.cpp
    Example demonstrating encapsulation in C++
    Encapsulation is the concept of bundling data and methods that operate on that data within a single unit (class).
    It also restricts direct access to some of the object's components, which is a means of information hiding.
*/

#include <iostream>
#include <string>

using namespace std;

// Class representing a Bank Account
class BankAccount
{
private:
    // Private data members (encapsulated)
    string accountHolder;
    double balance;

public:
    // Constructor to initialize account
    BankAccount(const string &name, double initialBalance)
        : accountHolder(name), balance(initialBalance) {}

    // Public method to deposit money
    void deposit(double amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << "Deposited $" << amount << " successfully.\n";
        }
        else
        {
            cout << "Invalid deposit amount.\n";
        }
    }

    // Public method to withdraw money
    void withdraw(double amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
            cout << "Withdrew $" << amount << " successfully.\n";
        }
        else
        {
            cout << "Invalid withdrawal amount or insufficient funds.\n";
        }
    }

    // Public method to get current balance
    double getBalance() const
    {
        return balance;
    }

    // Public method to get account holder's name
    string getAccountHolder() const
    {
        return accountHolder;
    }
};

int main()
{
    // Create a BankAccount object
    BankAccount account("Alice", 1000.0);

    // Display initial details
    cout << "Account Holder: " << account.getAccountHolder() << "\n";
    cout << "Initial Balance: $" << account.getBalance() << "\n";

    // Perform deposit and withdrawal
    account.deposit(250.0);
    account.withdraw(100.0);

    // Display updated balance
    cout << "Updated Balance: $" << account.getBalance() << "\n";

    // Attempt invalid operations
    account.deposit(-50.0);
    account.withdraw(2000.0);

    return 0;
}