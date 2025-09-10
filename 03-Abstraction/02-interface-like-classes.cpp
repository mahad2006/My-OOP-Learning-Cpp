// 03-Abstraction/02-interface-like-classes.cpp
// Demonstrates interface-like behavior using pure virtual functions in C++
#include <iostream>
using namespace std;

// Interface-like class for Payment methods
class IPayment
{
public:
    // Pure virtual functions = no implementation here
    virtual void pay(double amount) = 0;
    virtual void refund(double amount) = 0;

    // Virtual destructor
    virtual ~IPayment() {}
};

// CreditCard class implementing IPayment interface
class CreditCard : public IPayment
{
public:
    void pay(double amount) override
    {
        cout << "Paid $" << amount << " using Credit Card." << endl;
    }

    void refund(double amount) override
    {
        cout << "Refunded $" << amount << " to Credit Card." << endl;
    }
};

// PayPal class implementing IPayment interface
class PayPal : public IPayment
{
public:
    void pay(double amount) override
    {
        cout << "Paid $" << amount << " using PayPal." << endl;
    }

    void refund(double amount) override
    {
        cout << "Refunded $" << amount << " to PayPal." << endl;
    }
};

int main()
{
    // Base class pointer to interface
    IPayment *payment;

    // Pay using Credit Card
    payment = new CreditCard();
    payment->pay(100.0);
    payment->refund(20.0);
    delete payment;

    // Pay using PayPal
    payment = new PayPal();
    payment->pay(200.0);
    payment->refund(50.0);
    delete payment;

    return 0;
}
