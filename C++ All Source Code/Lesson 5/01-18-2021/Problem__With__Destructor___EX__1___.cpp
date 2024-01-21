// Runtime Polymorphism: Overriding : Solving Problem With Overriding By virtual function
#include<iostream>
#include<conio.h>
#include<iomanip>
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
		// Virtual Function
		virtual double getArea() const
		{
			return 3.14* radius * radius;
		}
		virtual void Show(int n)
		{
			cout << "\nCircle " << n << "#";
			cout << "\n\t\t Radius   : " << radius << endl;
			cout << "\n\t\t Area     : " << getArea() << endl;
		}	
		virtual ~Circle()
		{
			
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
		// Overriding on Inherited Member Function(Virtual Function)
		virtual void Show(int n)/* Virtual here is optional */
		{
			cout << "\nCylindar " << n << "#";
			cout << fixed << setprecision(2);
			cout << "\n\t\t Radius   : " << radius << endl;
			cout << "\n\t\t Height   : " << height << endl;
			cout << "\n\t\t Area     : " << getArea() << endl;
		}
		virtual double getArea() const/* Virtual here is optional */
		{
			return (2*3.14* radius) * (radius + height);
		}
		
};
//------------------------------------------------
//            Non-Member Function
void Demo1()
{
	//                      Normal Object
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
//------------------------------------------------
void Demo2()
{
	//                      Dynamic Pointer Object Derived Class to Derived Class
	// Ex1.
	// => Derived Class Object
	Cylindar* pB1 = new Cylindar();
	
	//set
	pB1->setRadius(10.00);// Early Biding, Static Binding
	pB1->setHeight(8.4);// Early Biding, Static Binding
	
	// Output:
	pB1->Show(1);// Overriding : Late Binding, Dynamic Biding
	
	delete pB1;
}
//------------------------------------------------
void Demo3()
{
	//                      Static Pointer Object Derived Class to Derived Class
	// Ex1.
	// => Derived Class Object
	Cylindar B1;
	Cylindar* pB1 = &B1;
	
	//set
	pB1->setRadius(10.00);// Early Biding, Static Binding
	pB1->setHeight(8.4);// Early Biding, Static Binding
	
	// Output:
	pB1->Show(1);// Overriding : Late Binding, Dynamic Biding
	

}
//------------------------------------------------
void Demo4()
{
	//                      Reference Object Derived Class to Derived Class
	// Ex1.
	// => Derived Class Object
	Cylindar B1;
	Cylindar& refB1 = B1;
	
	//set
	refB1.setRadius(10.00);// Early Biding, Static Binding
	refB1.setHeight(8.4);// Early Biding, Static Binding
	
	// Output:
	refB1.Show(1);// Overriding : Late Binding, Dynamic Biding
	

}
//------------------------------------------------
void Demo5()
{
	//                      Reference Object Base Class to Derived Class Object
	// Ex1.
	// => Derived Class Object
	Cylindar B1;
	Circle& refB1 = B1;// Problem is solved by Virtual Function in Base Class
	
	//set
	B1.setRadius(10.00);// Early Biding, Static Binding
	B1.setHeight(8.4);// Early Biding, Static Binding
	
	// Output:
	refB1.Show(1);// Overriding : Late Binding, Dynamic Biding
	

}
//------------------------------------------------
void Demo6()
{
	//                      Pointer Object Base Class to Derived Class Object
	// Ex1.
	// => Derived Class Object
	Cylindar B1;
	Circle* pB1 = &B1;// Problem is solved by Virtual Function in Base Class
	
	//set
	B1.setRadius(10.00);// Early Biding, Static Binding
	B1.setHeight(8.4);// Early Biding, Static Binding
	
	// Output:
	pB1->Show(1);// Overriding : Late Binding, Dynamic Biding
	

}
//------------------------------------------------

// Main Program
int main()
{
	Demo1();
	
	cout << "\n__________________________\n";
	
	Demo2();
	
	cout << "\n__________________________\n";
	
	Demo3();
	
	cout << "\n__________________________\n";
	
	Demo4();
	
	cout << "\n__________________________\n";
	
	Demo5();
	
	cout << "\n__________________________\n";
	
	Demo6();
	
	getch();
	return 0;
	
}



		
		
		
		
			   