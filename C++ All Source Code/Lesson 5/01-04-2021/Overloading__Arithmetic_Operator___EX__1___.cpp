// Compile time Polymorphism: overloading operator
// Overloading Arithmetic Operator: +, -, *, /, %
#include<iostream>
#include<conio.h>
using namespace std;
//---------------------------------------------------
class Line {
	private:
		double length;
	public:
		void setData(double length)
		{
			this->length = length;
		}
		void show(int n)
		{
			cout << "\nObject " << n << "#:";
			cout << "\n\t\t Length of Line : " << length << " units" << endl;
		}
		// Overloading Addition Operator: +
		Line operator +(Line& other)
		{
			
		}
};
//---------------------------------------------------

// Main Program
int main()
{
	// Ex1.
	double a, b, c;
	//set
	a = 2.5;
	b = 1.25;
	c = a + b;
	
	cout << a << "\t" << b << "\t" << c << endl;
	
	// Ex2.
	Line A1, A2, A3;// Object
	//set
	A1.setData(2.5);
	A2.setData(1.25);
	
	// Calculate 1:
	A1 + A2 + A3;// short-hand
	
	// Calculate 2:
	(A1.operator +(A2)).operator +(A3);// long-hand
	
}




