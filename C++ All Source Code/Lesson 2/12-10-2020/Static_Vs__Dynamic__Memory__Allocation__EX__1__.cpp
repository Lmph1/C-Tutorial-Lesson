#include<iostream>
#include<conio.h>
#include "Employee.h"
using namespace std;
//-------------------------------------------------------------
void Demo1()
{
	//             Static Memory Allocation
	// => Normal Variable
	int a;
	float b;
	
	cout << "\nA : " << &a << endl;
	cout << "\nB : " << &b << endl;
	
	// => Normal Object
	Employee A1, A2;//
	
	cout << "\nA1 : " << &A1 << endl;
	cout << "\nA2 : " << &A2 << endl;
	
	// => Array Object
	Employee emp[2];
	
	cout << "\nArray object 1 : " << &emp[0] << endl;
	cout << "\nArray object 2 : " << &emp[1] << endl;
	
	// => Static Pointer Object
	Employee* p1;
	
	cout << "\nStatic Pointer Object : " << &p1 << endl;
}
//-------------------------------------------------------------
void Demo2()
{
	//             Dynamic Memory Allocation
	// => Dynamic Pointer Variable
	int* p1 = new int();
	int* p2 = new int(200);
	
	cout << "\nP1  : " << p1 << endl;
	cout << "\nP2  : " << p2 << endl;
	
	// => Dynamic Pointer Object
	Employee* n1 = new Employee();
	Employee* n2 = new Employee(1001, "Veha", "IT", 200.00);
	
	cout << "\nn1  : " << n1 << endl;
	cout << "\nn2  : " << n2 << endl;
	
	// Free memory address
	delete p1, p2;
}
//-------------------------------------------------------------

int main()
{
	Demo1();
    cout << "\n-------------------\n";
	Demo2();
	
	getch();
	return 0;
}
