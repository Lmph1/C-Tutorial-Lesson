// Nested Namespace
#include<iostream>
#include<conio.h>
using namespace std;
//---------------------------------------------------------------
namespace outer 
{
	///////////////////////////////////////////////
	namespace myfunc
	{
		void show(string text)
		{
			cout << text << endl;
		}
	}
	
	//////////////////////////////////////////////
	namespace myVar
	{
	    const double PI = 3.14;
	}
	
	//////////////////////////////////////////////
	
	string weeks[] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};
}
//---------------------------------------------------------------

int main()
{
	// Ex1.
	// For Inner Namespace =>  outer::inner::Member;
	outer::myfunc::show("Hello Inner Namespace!!!");
	
	cout << outer::myVar::PI << endl;
	
	// Ex2.
	for(int i = 0; i<7; i++)
	{
		cout << outer::weeks[i] << "\t";
	}
	
	
    getch();
    return 0;
}