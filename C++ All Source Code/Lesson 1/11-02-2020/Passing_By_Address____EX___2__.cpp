// Passing By Reference(Address)
#include<iostream>
#include<conio.h>
using namespace std;
//------------------------------------------------
int show(int& param)/* Reference Type Parameter */
{
    cout << param << endl;
}
//------------------------------------------------


int main()
{
	int arg = 20;
	
	show(arg);// Passing by address
	 
	 
	
	getch();
	return 0;
}
