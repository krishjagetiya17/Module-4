/*4. Write a C++ program to implement a class called Bank Account that hasprivate member variables for account number
and balance. Include member functions to deposit and withdraw money from the account.*/
#include <iostream>
using namespace std;

class BankAccount {
private:
    int acc_no;
    double bal;

public:
    // Function to initialize the bank account
    void get_bankaccount() {
        cout<< "\n\n\t Enter Account Number: ";
        cin>> acc_no;
        cout<< "\n\n\t Enter Account Balance: ";
        cin>> bal;
    }

    // Function to deposit money into the account
    void deposit(double amount) {
        if (amount > 0) {
            bal += amount;
            cout << "\n\n\t Deposited: $"<<amount<<endl;
        } else {
            cout << "\n\n\t Invalid Deposit Amount."<<endl;
        }
    }

    // Function to withdraw money from the account
    void withdraw(double amount) {
        if (amount > 0 && amount <= bal) {
            bal -= amount;
            cout << "\n\n\t Withdraw: $" <<amount<<endl;
        } else if (amount > bal) {
            cout << "\n\n\t Insufficient Funds." <<endl;
        } else {
            cout << "\n\n\t Invalid Withdrawal Amount." <<endl;
        }
    }

    // Function to display the account details
    void display() const {
        cout << "\n\n\t Account Number: " <<acc_no<<endl;
        cout << "\n\t Balance: $" <<bal<<endl;
    }
};

int main() {
    BankAccount account;
    account.get_bankaccount();

    char choice;
    double amount;

    cout << "\n\n\t Choose an option:" <<endl;
    cout << "\t D - Deposit" <<endl;
    cout << "\t W - Withdraw" <<endl;
    cout << "\t Enter Your Choice: ";
    cin >> choice;

    switch (choice) {
        case 'D':
        case 'd':
            cout << "\n\n\t Enter Amount to Deposit: ";
            cin >> amount;
            account.deposit(amount);
            break;

        case 'W':
        case 'w':
            cout << "\n\n\t Enter Amount to Withdraw: ";
            cin >> amount;
            account.withdraw(amount);
            break;

        default:
            cout << "\n\n\t Invalid Choice. Please run the program again." <<endl;
            return 1;
    }

    account.display();
    return 0;
}