#include<iostream>
#include<conio.h>
#include<iomanip>// setw
#include<string.h>// strcpy
#include "Employee.h"
#include<antheaderPlusPlus.h>
using namespace std;
//-------------------------------------------------------------------------------------
void show(Employee& em, int y)
{
	cout << fixed << setprecision(2);
	//cout << "     " << left << setw(10) << em.id << setw(20) << em.name << setw(25) << em.position << right << setw(15) <<  em.salary << " $" << endl;
	
	gotoxy(6, y); cout << em.id ;
	gotoxy(16, y); cout << em.name;
	gotoxy(36, y); cout << em.position;
	gotoxy(61, y); cout << "$ " << em.salary;
}
//------------------------------------------------------------------------------------


int main()                        
{
	struct Employee A1, A2;
	struct Employee A3 = {1111, "Nita", "Designer", 240.00 };
	
	// set:
	A1.id = 2222;
	strcpy(A1.name, "Veha");
	A1.position = "MC";
	A1.salary = 700.00;
	
	A2.id = 3333;
	strcpy(A2.name, "John");
	A2.position = "Manager";
	A2.salary = 2200.00;

	// output 1:
	show(A1, 2);
	show(A2, 3);
	show(A3, 4);
	
	
	getch();
	return 0;
}
