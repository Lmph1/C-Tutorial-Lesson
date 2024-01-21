// Copy Object by
// Shalllow Copy Have Problem :
// Solve this problem by Deep Copy
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
		// Default Constructor
		Demo()
		{
			value = new int();
		}
		// Destructor
		~Demo()
		{
			delete value;
		}
		// => Copy Constructor
		Demo(const Demo& other)
		{
			value = new int();
			
			// Copy Only Value
			this->text = other.text;
			*(this->value) = *(other.value);
			
			//cout << "\nCopy Constructor";	
		}
		// => Copy Assignment Operator
		Demo& operator =(const Demo& other)
		{	
			// Copy Only Value
			this->text = other.text;
			*(this->value) = *(other.value);
			
			//cout << "\nCopy Assignment Operator";
			
			return *this;
		}
};
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
	// 1. Deep Copy by Copy Constructor
	Demo d1 = demo;
	
	// output 2:
	d1.show(2);
	
	// Ex3.
	Demo d2;
	// 2. Deep Copy by Copy Assignment Operator
	d2 = demo;
	
	// output 3:
	d2.show(3);
	
	// Ex4.
	Demo d3, d4;
	
	d3 = d4 = d2;
	
	// output 4:
	d3.show(4);
	d4.show(5);
	
	
	getch();
	return 0;
}

