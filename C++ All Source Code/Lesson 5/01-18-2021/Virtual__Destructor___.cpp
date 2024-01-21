#include<iostream>
#include<conio.h>
using namespace std;
//--------------------------------------------------------
class Parent {
	public:
		Parent()
		{
			cout << "\n________Parent Constructor________\n";
		}
		// Virtual Destructor
		virtual ~Parent()
		{
			cout << "\n________Parent Destructor________\n";
		}
};
//--------------------------------------------------------
class Child: public Parent {
	public:
		Child()
		{
			cout << "\nChild Constructor...\n";
		}
		 ~Child()
		{
			cout << "\nChild Destructor...\n";
		}
};
//--------------------------------------------------------
void Demo1()
{
	// Parent A1;
	
	//Child B1;
	
	Child* p1 = new Child();
	
	
	
	// Free Memory Address
	delete p1;
}
//--------------------------------------------------------
void Demo2()
{
	Parent* p2 = new Child();
	
	
	// Free Memory Address
	delete p2;
}
//--------------------------------------------------------

// Main Program
int main()
{

	Demo2();
	
	
	return 0;
}