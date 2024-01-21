// Namespace
#include<iostream>
#include<conio.h>
using namespace std;
//-------------------------------------------------
namespace ns1 
{
	// Variable
	const double PI = 3.14;
	// Array
	string weeks[] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};
	// Non-Member Function
	void show(string text)
	{
		cout << endl;
	}
	// Class
	class Math {
		public:
			static double pow(double X, int n)
			{
				int f = 1;
			    for(int i = 1; i<=n; i++)
			    {
			    	f *= X;
				}
				
				return f;
			}
	};	
}
//-------------------------------------------------
namespace school 
{
	// Class
	class Math {
		public:
		    double pow(double X, int n)
			{
				int f = 1;
			    for(int i = 1; i<=n; i++)
			    {
			    	f *= X;
				}
				
				return f;
			}
	};
}
//-------------------------------------------------
namespace school 
{
	int b;
}
//-------------------------------------------------

// Main Program
int main()
{
	// Mode 1: NamespaceName::Member
	// Ex1.
	cout << ns1::PI << endl;
	
	// Ex2.
	for(int i = 0; i<sizeof(ns1::weeks)/sizeof(string); i++)
	{
		cout << ns1::weeks[i] << "\t";
	}
	
	// Ex3.
	ns1::show("Hello Namespace!!!");
	
	// Ex4.
	cout << ns1::Math::pow(2, 5) << endl;
	
	// Ex5.
	// Create Object
	school::Math  M;
	// Calling
	cout << M.pow(10, 4) << endl;
	
	
	getch();
	return 0;
}