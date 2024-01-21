// Passing By Value
#include<iostream>
#include<conio.h>
#include<antheaderPlusPlus.h>
using namespace std;
//------------------------------------------------
void show(int color)/* Value Type Parameter */
{
	foreColor(color);
	cout << "Hello" << endl;
}
//------------------------------------------------
void display(int color = 4)/* Default Value Type Parameter */
{
	foreColor(color);
	cout << "Welcome" << endl;
}
//------------------------------------------------

int main()
{
	// Ex1.
	show(2);// Passing By Value
	show(6);// Passing By Value
	
	// Ex2.
	display();// Passing By Value: Default Value is 4
	display(7);// Passing By Value
	
	
	getch();
	return 0;
}
