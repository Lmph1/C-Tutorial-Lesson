// Single Inheritance
#include<iostream>
#include<conio.h>
using namespace std;
//------------------------------------------
//              Base Class
class Circle {
	private:// Not Inherited
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
//     Default Access Mode is private
class Cylindar: private Circle {
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
		}
};
//------------------------------------------

// Main Program
int main()
{
	
	getch();
	return 0;
}
