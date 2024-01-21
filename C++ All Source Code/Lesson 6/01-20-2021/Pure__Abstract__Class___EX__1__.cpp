#include<iostream>
#include<conio.h>
using namespace std;
//-------------------------------------------------
class Shape {// Pure Abstract Base Class
	public:
		virtual ~Shape
		{
			
		}
		// Pure Virtual Function, Abstract Method
		virtual double getArea() const = 0;
		virtual double getPerimeter() = 0;
};
//-------------------------------------------------

