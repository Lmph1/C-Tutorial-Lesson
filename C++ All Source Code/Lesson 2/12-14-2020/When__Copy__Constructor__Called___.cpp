#include<iostream>
#include<conio.h>
using namespace std;
//----------------------------------------
class Demo {
	public:
		Demo()
		{
			cout << "\nDefault Constructor was called\n";
		}
		Demo(const Demo& other)
		{
			cout << "\n____Copy Constructor was called____\n";
		}
};
//----------------------------------------
void showObject(Demo other)
{
	
}
//----------------------------------------
Demo getObject(Demo other)
{
	return other;
}
//----------------------------------------

int main()
{
	Demo demo;
	
	// Mode 1:
	Demo d1 = demo;
	
	// Mode 2:
	Demo d2 = Demo(demo);// Long-hand
	Demo d3(demo);// Short-hand
	
	// Mode 3:
	showObject(demo);
	
	// Mode 4:
	cout << "\n--------------\n";
	getObject(demo);// duplicate to calling constructor
	
	
	getch();
	return 0;
}