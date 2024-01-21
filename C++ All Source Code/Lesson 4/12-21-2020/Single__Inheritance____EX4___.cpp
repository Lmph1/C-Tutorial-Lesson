// Single Inheritance
#include<iostream>
#include<conio.h>
using namespace std;
//------------------------------------------
//              Base Class
class Circle {
	protected:// Inherited
		double radius;
	    static const double PI;
	public:
		void setRadius(double radius)
		{
			this->radius = radius;
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
};
//------------------------------------------

// Main Program
int main()
{
	// => Object of Derived class
	Cylindar A1;
	//set by Inherited Member
	A1.setRadius(2.5);// OK: public in Base Class, but public in Derived Class
	// set Own Method
	A1.setHeight(12.00);
	
	// output1:
	A1.showCylindar(1);
	
	// => Object of Base Class
	Circle B1;
	//set
	B1.setRadius(4.5);
	// output 2:
	B1.showCircle(1);
	
	
	
	
	getch();
	return 0;
}
