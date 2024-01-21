// Demo Static Library
#include<iostream>
#include<conio.h>
#include<iomanip>
#include "myHeader.h"
using namespace std;


// Main Program
int main()
{
	// Ex1.
	show("Good Afternoon!");
	
	// Ex2.
	cout << fixed << setprecision(2);
	cout << "\n10^6 = " << power(10, 6) << endl;
	
	
	getch();
	return 0;
}