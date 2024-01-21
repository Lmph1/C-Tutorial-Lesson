// Runtime Polymorphism: Overriding
#include<iostream>
#include<conio.h>
using namespace std;
//------------------------------------------------
class Circle {// Compile time : Overloading
	protected:
		double radius;
	public:
		void setRadius(double radius)
		{
			this->radius = radius;
		}
		double getArea() const
		{
			return 3.14* radius * radius;
		}
		void Show(int n)
		{
			cout << "\nCircle " << n << "#";
			cout << "\n\t\t Radius   : " << radius << endl;
			cout << "\n\t\t Area     : " << getArea() << endl;
		}	
};
//------------------------------------------------

class Cylindar: public Circle {// Compile time : Overloading + Runtime : Overriding
	private:
		double height;
	public:
		void setHeight(double height)
		{
			this->height = height;
		}
//		// Overriding on Inherited Member Function
		void Show(int n)
		{
			cout << "\nCylindar " << n << "#";
			cout << "\n\t\t Radius   : " << radius << endl;
			cout << "\n\t\t Height   : " << height << endl;
			cout << "\n\t\t Area     : " << getArea() << endl;
		}
		
		
};
//------------------------------------------------

// Main Program
int main()
{
	// Ex1.
	// => Base Class Object
	Circle A1;
	//set
	A1.setRadius(2.65);
	// output:
	A1.Show(1);
	
	// Ex2.
	// => Derived Class Object
	Cylindar B1;
	//set
	B1.setRadius(10.00);
	B1.setHeight(8.4);
	
	// Output:
	B1.Show(1);// Overriding 
	
	
	
}



		
		
		
		
			   