// Passing By Value
#include<iostream>
#include<conio.h>
using namespace std;
//------------------------------------------------
void show(int data)/* Value Type Parameter */
{
	cout << "\nValue = " << data << endl;
}
//------------------------------------------------
void display(int data = 999)/* Default Value Type Parameter */
{
	cout << "\nData = " << data << endl;
}
//------------------------------------------------

int main()
{
	//******************************************************************************************
	//                   Using Argument As Constant Value
	//******************************************************************************************
	// Ex1.
	show(20);// Passing By Value
	show(62);// Passing By Value
	
	// Ex2.
	display();// Passing By Value: Default Value is 999
	display(120);// Passing By Value
	
	
	//******************************************************************************************
	//                   Using Argument As Value of Variable
	//******************************************************************************************
	int a = 200;
	int b = 5;
	// Ex1.
	show(a);// Passing By Value
	show(a);// Passing By Value
	
	// Ex2.
	display();// Passing By Value: Default Value is 999
	display(a);// Passing By Value
	
	// Ex3.
	show(a+b);// Passing By Value
	display(a*b-5);// Passing By Value
	
	
	// Ex4.
	int n;
	cout << "\nEnter number : "; cin>>n; fflush(stdin); cin.clear();
	
	// pass n to parameter 
	show(n);
	display(n);
	
	

	
	getch();
	return 0;
}
