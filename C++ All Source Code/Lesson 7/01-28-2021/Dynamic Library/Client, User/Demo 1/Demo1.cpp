// Demo: Dynamic Library
#include<iostream>
#include<conio.h>
#include "MyMath.h"
using namespace std;

int main()
{
	MyMath A;
	
	cout << A.Add(1.5, 6) << endl;
	cout << A.power(2, 6) << endl;
	
	getch();
	return 0;
}