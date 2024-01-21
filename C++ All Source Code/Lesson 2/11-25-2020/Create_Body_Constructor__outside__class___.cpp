// Create body Constructor and Other Method outside Class
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
		Employee();
		// => Parameterized Constructor
		Employee(int id, string name, const char* position, double salary);	
		// Simple Method
		void display(int n);
		void setAll(int id, string name, const char* position, double salary);
			
};
//-------------------------------------------------------


int main()
{
	// Ex1.
	Employee A1, A2;
	Employee B1(2001, "Nita", "Designer", 200.00);
	Employee B2 = Employee(2002, "Tola", "Teacher", 100.00);
	
	//set A1 & A2
	A1.setAll(1001, "Veha", "IT", 150.00);
	A2.setAll(1002, "Kanha", "Engineer", 300.00);
	
	// output:
	cout << "ID    Name";
	A1.display(1);
	A2.display(2);
	B1.display(3);
	B2.display(4);
	
	cout << "\n____________________________________\n";
	
	
	getch();
	return 0;
}/* End Main */
///////////////////////////////////////////////////////////////////////////
//=> Constructor
Employee::Employee()  {   }
Employee::Employee(int id, string name, const char* position, double salary)
{
    this->id = id;
    this->name = name;
    strcpy(this->position, position);
    this->salary = salary;
}
//////////////////////////////////////////////////////////////////////////
// =>Simple Method
void Employee::display(int n)
{
	cout << fixed << setprecision(2);
	cout << "\nEmployee "  << n << "#: " << left << setw(15) << id << setw(25) << name << setw(25) << position << setw(18) << salary << endl;
}
void Employee::setAll(int id, string name, const char* position, double salary)
{
    
    this->id = id;
    this->name = name;
    strcpy(this->position, position);
    this->salary = salary;
}






