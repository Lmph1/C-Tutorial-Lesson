// Style of Creating Object
#include<iostream>
#include<conio.h>
#include<iomanip>
#include<string.h>
using namespace std;
//-------------------------------------------------------
class Employee {
	private:
		int id;
		string name;
		char position[25];
		double salary;
		
	public:
		// => Default Constructor
		Employee()
		{
	        this->id = 11111;
	        this->name = "No Value";
	        strcpy(this->position, "Not Set");
	        this->salary = 0.00;
		}
		// => Parameterized Constructor
		Employee(int id, string name, const char* position, double salary)
		{
		    this->id = id;
	        this->name = name;
	        strcpy(this->position, position);
	        this->salary = salary;
		}
		
		// Simple Method
		void display(int n)
		{
			cout << fixed << setprecision(2);
			cout << "\nEmployee "  << n << "#: " << left << setw(15) << id << setw(25) << name << setw(25) << position << setw(18) << salary << endl;
		}
		void setAll(int id, string name, const char* position, double salary)
		{
		    
	        this->id = id;
	        this->name = name;
	        strcpy(this->position, position);
	        this->salary = salary;
		}
		
};
//-------------------------------------------------------

// Note: Long-hand: lh, Short-hand: sh
int main()
{
	// Ex1.
	Employee A1 = Employee();//lh
	Employee A2;//sh
	
	// output 1:
	A1.display(1);
	A2.display(2);
	
	// Ex2.
	Employee A3;
	//set
	A3.setAll(10001, "Veha", "MC", 450.00);
	
	// output 2:
	A3.display(3);
	
	// Ex2.
	Employee B1 = Employee(20001, "Nita", "Designer", 200.00);
	Employee B2(20002, "Tola", "IT", 500.00);
	
	
    // output 3:
	B1.display(4);
	B2.display(5);
	
	
	getch();
	return 0;
}
