#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
//---------------------------------------------------------------------
class Circle {
	private:
		// Non-Static field
		double radius;
	    // Static field
	    static const double pi;
	public:
		// Non-Static Method
		void show(int n)
		{
			cout << "\nCircle " << n << "#:";
			cout << fixed << setprecision(2);
			cout << "\n\t\tRadius : " << radius << endl;
			cout << "\n\t\tPI     : " << pi << endl;
		}
		void setRadius(double radius)
		{
			this->radius = radius;
		}
		
		static double getPI()
		{
			return pi;
		}
};
//---------------------------------------------------------------------
// We have to initialize value to static field
//   Datatype ClassName::static_field = value;
const double Circle::pi = 3.14;

int main()
{
	
	// Ex1.
	Circle A1, A2, A3;
	//set
	A1.setRadius(5.00);
	A2.setRadius(20.00);
	A3.setRadius(5.00);
	
	
	// output:
	A1.show(1);
	A2.show(2);
	A3.show(3);
	
	// output:
	cout << A1.getPI() << "\t" << A1.getPI() << "\t" << Circle::getPI() << endl;
	
	
	// Ex2.
	// Array Object, Array of class
	Circle cr[3];
	//set
	cr[0].setRadius(15.00);
	cr[1].setRadius(120.00);
	cr[2].setRadius(15.00);
	
	// output 1:
	cr[0].show(1);
	cr[1].show(2);
	cr[2].show(3);
	
	// output 2:
	cout << "\n-------------------------\n";
	for(int i = 0; i<3; i++) 	cr[i].show(i+1);
	
	
	getch();
	return 0;
}