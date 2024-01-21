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
		/*        Object & Object      */
		// Overloading Addition Operator: +
		Line operator +(Line& other)
		{
			Line tmp;
			tmp.length = this->length + other.length;
			
			return tmp;
		}
		
		// Overloading Multiplication Operator: *
		Line operator *(Line& other)
		{
			Line tmp;
			tmp.length = this->length * other.length;
			
			return tmp;
		}
		
		/*         Object & Other Value       */
		// Overloading Addition Operator: +
		Line operator +(double data)
		{
			Line tmp;
			tmp.length = this->length + data;
			
			return tmp;
		}
		
		/////////////////////////////////////////////
		// => Overloading Assignment Operator: =
		Line& operator = (double length)
		{
			this->length = length;
			
			return *this;
		}
		
		////////////////////////////////////////////
		/*        Object & Object      */
		// Overloading Compound Addition Operator: +=
		Line& operator +=(Line& other)
		{
			//this->length = this->length + other.length;
			this->length += other.length;
			
			return *this;
		}
		// Overloading Compound Multiplication Operator: *=
		Line& operator *=(Line& other)
		{
			//this->length = this->length * other.length;
			this->length *= other.length;
			
			return *this;
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
	A3 = A1 + A2 ;// short-hand
	
	// output 1:
	A1.show(1);
	A2.show(2);
	A3.show(3);
	
	// Calculate 2:
	A3 = A1.operator +(A2);// long-hand
	
	// output 2:
	A1.show(1);
	A2.show(2);
	A3.show(3);
	
	// Ex3.
	Line A4;
	
	// Calculate 3:
	A4 = A3.operator *(A2);// => A4 = A3 * A2;
	
	// output 3:
	A4.show(4);
	
	
	// Ex4.
	Line A5;
	// Calculate 4:
	A5 = A4.operator +(1000.00);// A5 = A4 + 1000.00;
	
	// output 4:
	A5.show(5);
	
	
	///////////////////////////////////////////////////////////////////////
	//Ex5.
	Line A6, A7, A8, A9;
	//set
	A6.operator = (15.1);// Long-hand
	A7 = 2.89;// Short-hand 
	A8 = A9 = A6;// Copy Object by Shallow Copy
	
	// output 5:
	A6.show(6);
	A7.show(7);
	A8.show(8);
	A9.show(9);
	
	//////////////////////////////////////
	// Ex6.
	A6 = A6 + A7;// => A6 += A7;
	// output 6:
	A6.show(6);
	
	//////////////////////
	// Ex7.
	A8 += A7;// => A8 = A8 + A7;
	
	// output 7:
	A8.show(8);
	
	
	getch();
	return 0;
}




