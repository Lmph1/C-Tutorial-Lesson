// Single Inheritance
#include<iostream>
#include<conio.h>
using namespace std;
//------------------------------------------
//              Base Class
class Circle {
	protected://Inherited
		double radius;
	    static const double PI;
	public:
		void setRadius(double radius)
		{
			this->radius = radius;
		}
		double getRadius() const
		{
			return radius;
		}
		double getArea()
		{
			return PI * radius * radius;
		}
		void showCircle(int n)
		{
			cout << "\nCircle " << n << "#:";
			cout << "\n\t\t Radius  : " << radius << " units" << endl;
			cout << "\n\t\t Area    : " << getArea() << " units" << endl;
		}
};
//////////////////////////////////////////////////////////////////////////

// Assign First Initialize value  to static field
const double Circle::PI = 3.14;

/////////////////////////////////////////////////////////////////////////
//------------------------------------------
//             Derived Class
//    Access Mode is public
class Cylindar: public Circle {// Inherited Members not change Accessor Modifier in Derived class
// New Member of Derived Class
	private:
         double height;
    public:
    	void setHeight(double height)
    	{
    		this->height = height;
    		
		}
		double getArea()
		{
			return (2*PI*radius ) * (radius + height);
		}
		void showCylindar(int n)
		{
			cout << "\nCylindar " << n << "#:";
			cout << "\n\t\t Radius  : " << radius << " units" << endl;
			cout << "\n\t\t Height  : " << height << " units" << endl;
			cout << "\n\t\t Area    : " << getArea() << " units" << endl;
		}
		// Overloading Constructor
		Cylindar()  { }
		Cylindar(double radius, double height)
		{
			this->radius = radius;
			this->height = height;	
		}
		Cylindar(Circle& c, double height)
		{
			this->radius = c.getRadius();
			this->height = height;	
		}
		// Normal Method
		void setAll(double radius, double height)
		{
			this->radius = radius;
			this->height = height;	
		}
		void setData(Circle& c, double height)
		{
			this->radius = c.getRadius();
			this->height = height;		
		}
		
		
};
//------------------------------------------

// Main Program
int main()
{
	// Ex1.
	// => Object of Derived class
	Cylindar A1;
	//set by Inherited Member
	A1.setRadius(2.5);// OK: public in Base Class, but public in Derived Class
	// set Own Method
	A1.setHeight(12.00);
	
	// output1:
	A1.showCylindar(1);
	
	// Ex2.
	// => Object of Base Class
	Circle B1;
	//set
	B1.setRadius(4.5);
	// output 2:
	B1.showCircle(1);
	
	// Ex3.
	// => Object of Derived Class
	Cylindar D1 = Cylindar(3.2, 8.5);
	
	// output 3:
	D1.showCylindar(2);
	
	// Ex4.
	Cylindar D2;
	//set
	D2.setAll(4.1, 5.7);
	
	// output 4:
	Circle M1;
	//set
	M1.setRadius(2.2);
	//------------
	D2.showCylindar(3);
	
	// Ex4.1.
	Cylindar D3 = Cylindar(M1, 7.2);
	
	// output 5:
	D3.showCylindar(4);
	
	// Ex4.2.
	Cylindar D4;
	//set
	D4.setData(M1, 7.2);
	
	// output 5:
	D4.showCylindar(5);
	
	getch();
	return 0;
}
