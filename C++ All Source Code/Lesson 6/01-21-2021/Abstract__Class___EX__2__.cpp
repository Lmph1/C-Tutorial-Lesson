///      Abstract Type
#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
//-------------------------------------------------
class BankAccount {// Abstract Base Class
    protected:
    	int accNumber;
    	string accName;
    	double balance;
	public:
		virtual ~BankAccount()
		{
			
		}
		void CreateAccount(int accNumber, string accName, double balance)
		{
			this->accName = accName;
			this->accNumber = accNumber;
			this->balance = balance;
		}
		// Pure Virtual Function, Abstract Method
		virtual void deposit(double amount) = 0;
		virtual void showAccount() = 0;
};
//-------------------------------------------------
//          Congrete Class: Inheritance + Runtime Polymorphism(Overriding)

class SavingsAccount: public BankAccount {// Derived Class
	private:
		float interestRate;
	public:
		// Add New Method
		void setInterestRate(float interestRate)
		{
			this->interestRate = interestRate;
		}
		// Overriding on Inherited Member Function
		// Must be overriding on Pure Virtual Function, Abstract Method
		virtual void deposit(double amount)
		{
			if(amount>0)
			{
				balance += amount;
			}
			else
			{
				cout << "\nERROR: Invalid Currency!!!" << endl;
			}
		}
		virtual void showAccount()
	    {
	    	cout << "\nSavings Account " << "#:";
	    	cout << "\n\t\t Number        : " << accNumber << endl;
	    	cout << "\n\t\t Name          : " << accName << endl;
	    	cout << fixed << setprecision(2);
	    	cout << "\n\t\t Balance       : $" << balance << endl;
	    	cout << "\n\t\t Interest Rate : " << interestRate << " %" << endl;
		}
};
//-------------------------------------------------


// Main Program
int main()
{
	//Ex1.
	SavingsAccount A1;
	//set
	A1.CreateAccount(1000217, "Keo Nita", 5000);
	A1.setInterestRate(2.75);
	//output:
	A1.showAccount();
	
	// Deposit : 12000
	A1.deposit(12000); 
	
	//output:
	A1.showAccount();
	
	getch();
	return 0;

}