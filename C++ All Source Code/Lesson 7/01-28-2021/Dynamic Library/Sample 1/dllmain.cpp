// File contains defintion of library file
#include<iostream>
#include "MyMath.h"// Required
using namespace std;
///////////////////////////////////////////////////////////////
MyMath::~MyMath()
{
	
}
//////////////////////////////////////////////////////////////
MyMath::MyMath()
{
	
}
//////////////////////////////////////////////////////////////
double MyMath::Add(double a, double b)
{
	return (a+b);
}
//////////////////////////////////////////////////////////////
double MyMath::power(double M, int n)
{
	double f = 1;
	for(int e = 1; e<=n; e++) f *= M;
	return f;
}
//////////////////////////////////////////////////////////////