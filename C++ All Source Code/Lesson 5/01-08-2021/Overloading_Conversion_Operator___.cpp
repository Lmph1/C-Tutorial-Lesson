#include<iostream>
#include<conio.h>
using namespace std;
//-------------------------------------------------
class Double {
	private:
		double data;
	public:
		Double(double data = 0.00)
		{
			this->data = data;
		}
		Double& operator = (double data)
		{
			this->data = data;
			return *this;
		}
		// Overloading Conversion Operator
		operator double()
		{
			return data;
		}
	operator int()
		{
			return data;
		}
			
};
//-------------------------------------------------


// Main Program
int main()
{

	// Ex2.
	Double M1 = 10.5;// Constructor
	Double M2;
	//set
	M2 = 45.1;
	
	// output 2:
	cout << M1.operator double()  << "\t" << M2.operator double() << endl;
	

	
	

	getch();
	return 0;	
}