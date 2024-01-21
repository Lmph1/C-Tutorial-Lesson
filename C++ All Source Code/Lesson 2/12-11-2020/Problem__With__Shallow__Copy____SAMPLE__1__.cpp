// Copy Object by
// Shalllow Copy Have Problem
#include<iostream>
#include<conio.h>
using namespace std;
//------------------------------------------------------------------
class Demo {
	private:
		string text;
		int *value;// Pointer
	public:
		void setAll(int value, string text)
		{
			this->text = text;
			*(this->value) = value;
		}
		void show(int n)
		{
			cout << "\nObject " << n << "#:";
			cout << "\n\t\t Text  : " << &text << " -> " << text << endl;
			cout << "\n\t\t Value : " << value << " -> " << *value << endl;
		}
};
//------------------------------------------------------------------
void showObject(Demo d, int n)// Using Copy Constructor
{
	d.show(n);
}
//------------------------------------------------------------------
int main()
{
	// Ex1.
	Demo demo;
	//set
	demo.setAll(200, "ABC");
	
	// output 1:
	demo.show(1);
	
	// Ex2.
	// 1. Shallow Copy by Copy Constructor
	Demo d1 = demo;
	
	// output 2:
	d1.show(2);
	
	// Ex3.
	Demo d2;
	// 2. Shllow Copy by Copy Assignment Operator
	d2 = demo;
	
	// output 3:
	d2.show(3);
	
	// Ex4.
	// 3. Shallow Copy By Non-Member Function
	showObject(demo, 4);
	
	
	getch();
	return 0;
}

