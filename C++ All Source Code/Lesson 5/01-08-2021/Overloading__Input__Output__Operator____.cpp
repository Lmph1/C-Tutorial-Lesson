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
		// Prototype of Friend Function
		friend ostream& operator << (ostream& out, const Double& other);
		friend istream& operator >> (istream& in, Double& other);
			
};
//-------------------------------------------------
//       Overloading Non-Memer Function Operator
///////////////////////////////////////////////////
ostream& operator << (ostream& out, const Double& other)
{
	out << other.data ;
	
	return out;
}
//************************************************
istream& operator >> (istream& in, Double& other)
{
	in >> other.data;
	
	return in;
}
//************************************************

// Main Program
int main()
{
	// Ex1.
	double A1 = 2.5;
	double A2;
	//set
	A2 = 10.4;
	
	// output 1:
	cout << A1 << "\t" << A2 << endl;

	// Ex2.
	Double M1 = 10.5;// Constructor
	Double M2;
	//set
	M2 = 45.1;
	
	// output 2:
	cout << M1 << "\t" << M2 << endl;
	
	////////////////////////////////////////////////
	cout << "\nEnter value : "; /*operator >> (cin, M1); */ cin>>M1;
	
	// output 3:
	cout << M1 << "\t" << M2 << endl;
	
	

	getch();
	return 0;	
}
