///      Abstract Type
#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
//-------------------------------------------------
class Shape {// Pure Abstract Base Class
	public:
		virtual ~Shape()
		{
			
		}
		// Pure Virtual Function, Abstract Method
		virtual double getArea() const = 0;
		virtual double getPerimeter() = 0;
};
//-------------------------------------------------
//       Automatic Abstract Type: Using Only Inheritance

class Circle: public Shape {// Derived class
	private:
		double radius;
};
//-------------------------------------------------
//          Congrete Class: Inheritance + Runtime Polymorphism(Overriding)

class Square: public Shape {// Derived Class
	private:
		double side;
	public:
		// Add New Method
		void setSide(double side)
		{
			this->side = side;
		}
		// Overriding on Inherited Member Function
		// Must be overriding on Pure Virtual Function, Abstract Method
		virtual double getArea() const
		{
			return side * side;
		}
		virtual double getPerimeter()
		{
			return side * 4;
		}		
	    // Add New Method
	    void Display(int n)
	    {
	    	cout << "\nSquare " << n << "#:";
	    	cout << fixed << setprecision(2);
	    	cout << "\n\t\t Side      : " << side << endl;
	    	cout << "\n\t\t Area      : " << getArea() << endl;
	    	cout << "\n\t\t Perimeter : " << getPerimeter() << endl;
		}
};
//-------------------------------------------------
//          Congrete Class: Inheritance + Runtime Polymorphism(Overriding)

class Rectangle: public Shape {// Derived Class
	private:
		double width, length;
	public:
		// Add New Method
		void setRectangle(double width, double length)
		{
			this->width = width;
			this->length = length;
		}
		// Overriding on Inherited Member Function
		// Must be overriding on Pure Virtual Function, Abstract Method
		virtual double getArea() const
		{
			return width * length;
		}
		virtual double getPerimeter()
		{
			return (width+length) *2;
		}		
	    // Add New Method
	    void Display(int n)
	    {
	    	cout << "\nRectangle " << n << "#:";
	    	cout << fixed << setprecision(2);
	    	cout << "\n\t\t Width     : " << width << endl;
	    	cout << "\n\t\t Length    : " << length << endl;
	    	cout << "\n\t\t Area      : " << getArea() << endl;
	    	cout << "\n\t\t Perimeter : " << getPerimeter() << endl;
		}
};
//-------------------------------------------------

// Main Program
int main()
{
	//Ex1.
	//Circle A1;// Error: Circle is Abstract Type
	
	// Ex2.
	Square B1;
	//set
	B1.setSide(2.56);
	// output:
	B1.Display(1);
	
	// Ex3.
	Rectangle N1;
	//set
	N1.setRectangle(2.5, 7.2);
	
	/// output:
	N1.Display(1);
	
	// Ex4.
	Rectangle* N2 = new Rectangle();
	//set
	N2->setRectangle(6.52, 2.2);
	
	/// output:
	N2->Display(2);
	
	
	// Free Memory
	delete N2;
	
	getch();
	return 0;

}
