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
	class MyDemo {
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
/////////////////////////////////////////////////////////////////////////////////////
// Mode 2: using namespace NamespaceName;
using namespace ns1;
using namespace school;


// Main Program
int main()
{

	// Ex1.
	cout << PI << endl;
	
	// Ex2.
	for(int i = 0; i<sizeof(weeks)/sizeof(string); i++)
	{
		cout << weeks[i] << "\t";
	}
	
	// Ex3.
	show("Hello Namespace!!!");
	
	// Ex4.
	cout << Math::pow(2, 5) << endl;
	
	// Ex5.
	// Create Object
	MyDemo  M;
	// Calling
	cout << M.pow(10, 4) << endl;
	
	
	getch();
	return 0;
}