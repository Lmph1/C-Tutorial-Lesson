// Style of Creating Object
#include<iostream>
#include<conio.h>
#include<iomanip>
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
			cout << " Create Object by Default Constructor" << endl;
		}
		// => Parameterized Constructor
		Employee(int id, string name, const char* position, double salary)
		{
			cout << " Create Object by Parameterized Constructor" << endl;
		}
		// => Copy Constructor
		Employee(const Employee& emp)
		{
			cout << " Create Object by Copy Constructor" << endl;
		}	
		// => Destructor
		~Employee()
		{
			cout << "Object is destroy  by Destructor" << endl;
		}
};
//-------------------------------------------------------

// Note: Long-hand: lh, Short-hand: sh
int main()
{
	// Ex1.
	Employee A1 = Employee();//lh
	Employee A2;//sh
	
	// Ex2.
	Employee B1 = Employee(1, "Nita", "Designer", 200.00);
	Employee B2(2, "Tola", "IT", 500.00);
	
	// Ex3.
	Employee C1 = Employee(A1);
	Employee C2(A1);
	Employee C3 = A1;
	
	
	getch();
	return 0;
}
