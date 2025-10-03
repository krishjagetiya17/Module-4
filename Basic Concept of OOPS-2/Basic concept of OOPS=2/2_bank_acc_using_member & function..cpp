/*2. Define a class to represent a bank account. Include the following members:
~Data Member:
-Name of the depositor
-Account Number
-Type of Account
-Balance amount in the account
~Member Functions
-To assign values
-To deposited an amount
-To withdraw an amount after checking balance
-To display name and balance*/
#include<iostream>
using namespace std;

class Bankaccount{
private:
    		int ac_no,bal;
    		char actype[25],name[35];

public:
    // give values to the bank account from Function
   	void get_bank() 
	{
    	cout<<"\n\n\t Enter Account Number: ";
       	cin>>ac_no;

       	cout<<"\n\n\t Enter Depositor Name: ";
       	cin.ignore(); // To ignore the newline character left by previous input
       	cin.getline(name,40);

       	cout<<"\n\n\t Enter Account Type: ";
       	cin.getline(actype,40);

       	cout<<"\n\n\t Enter Account Balance: ";
       	cin>>bal;
   	}

    // Deposit Funtion
    void deposit() 
	{
        int amount;
        cout<<"\n\n\t Enter Amount to Deposit: ";
        cin>>amount;

        if (amount > 0) {
            bal += amount;
            cout<<"\n\n\t Balance After Depositing Amount: "<<bal<<endl;
        } else {
            cout<<"\n\n\t Deposit amount must be in positive."<<endl;
        }
    }

    // Withdraw Function after checking balance
    void withdraw() 
	{
        int amount;
        cout<<"\n\n\t Enter Amount to Withdraw: ";
        cin>>amount;

        if (amount > 0 && amount <= bal) {
            bal -= amount;
            cout<<"\n\n\t Balance after Withdrawing amount: "<<bal<<endl;
        } else if (amount > bal) {
            cout<<"\n\n\t Insufficient Balance."<<endl;
        } else {
            cout<<"\n\n\t Withdrawal Amount must be in Positive."<<endl;
        }
    }

    // Function to display name and balance
    void display() 
	{
        cout<<"\n\n\t Name: "<<name<<endl;
        cout<<"\n\n\t Balance: "<<bal<<endl;
    }
};

int main() 
{
	
    Bankaccount B;
    B.get_bank();
    B.deposit();
    B.withdraw();
    B.display();

    return 0;
    
}

