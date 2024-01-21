// File: contain difinition of Declarations
#include "myHeader.h"// Optional 
#include<iostream>
using namespace std;
//---------------------------------------------------------------
double power(double M, int n)// Calculate M^n
{
	double f = 1;
	for(int e = 1; e<=n; e++)
	{
		f *= M;
	}
	return f;
}
//---------------------------------------------------------------
void show(const char* text)
{
	cout << text << endl;
}
//---------------------------------------------------------------