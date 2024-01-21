// Public Data Member
#include<iostream>
#include<conio.h>
#include<iomanip>
#include<string.h>
using namespace std;
//--------------------------------------------------
// 1st: Create Class
class Employee {
	public: 
	// Data Members, Fields, ....
	    int id;
	    string name;
	    char position[30];
	    double salary;	
}; 
//--------------------------------------------------


// Main Program
int main()
{
	// Ex1.
	// 2nd: Create Object
	Employee A1;// id, name, position, salary
	
	// 3rd: Set & get for public
	// => Set
	A1.id = 1280;
	A1.name = "Veha";
	strcpy(A1.position, "Designer");
	A1.salary = 260.00;
	
	// => Get
	cout << fixed << setprecision(2);
	cout << "\n\t" << left << setw(15) <<  A1.id  << setw(25) << A1.name << setw(30) << A1.position << setw(18) << A1.salary << endl;
	
	
	// Ex2.
	// 2nd: Create Object
	Employee A2;// id, name, position, salary
	
	// 3rd: Set & get for public
	// => Set
	cout << "\nInput Employee # ";
	cout << "\n\t\tID       : "; cin>>A2.id; fflush(stdin); cin.clear();
	cout << "\n\t\tName     : "; getline(cin, A2.name); fflush(stdin);
	cout << "\n\t\tPosition : "; cin.get(A2.position, 30); fflush(stdin);
	cout << "\n\t\tSalary   : $"; cin>>A2.salary; fflush(stdin); cin.clear();
	 
	// => Get
	cout << "\n\t" << left << setw(15) <<  A2.id  << setw(25) << A2.name << setw(30) << A2.position << setw(18) << A2.salary << endl;
	
	
	getch();
	return 0;
}


