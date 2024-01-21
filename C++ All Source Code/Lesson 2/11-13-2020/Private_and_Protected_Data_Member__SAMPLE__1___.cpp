// Private and Protected Data Member
#include<iostream>
#include<conio.h>
#include<iomanip>
#include<string.h>
using namespace std;
//--------------------------------------------------
// 1st: Create Class
class Employee {
	// Data Members, Fields, ....
	    int id;// Default Access Modifer is private
	private:    
	    string name;
	protected:
	    char position[30];
	    double salary;	
}; 
//--------------------------------------------------
//        Non-Member Function      
//--------------------------------------------------
void input(Employee& emp)
{
	cout << "\nInput Employee # ";
	cout << "\n\t\tID       : "; cin>>emp.id; fflush(stdin); cin.clear();
	cout << "\n\t\tName     : "; getline(cin, emp.name); fflush(stdin);
	cout << "\n\t\tPosition : "; cin.get(emp.position, 30); fflush(stdin);
	cout << "\n\t\tSalary   : $"; cin>>emp.salary; fflush(stdin); cin.clear();
	
}
//--------------------------------------------------
void showEmployee(Employee& emp)
{
	cout << fixed << setprecision(2);
	cout << "\n\t" << left << setw(15) <<  emp.id  << setw(25) << emp.name << setw(30) << emp.position << setw(18) << emp.salary << endl;
}
//--------------------------------------------------

// Main Program
int main()
{
	Employee a1, a2;
	//set
	input(a1);
	input(a2);
	
	// output:
	showEmployee(a1);
	showEmployee(a2);
	
	
	getch();
	return 0;
}


