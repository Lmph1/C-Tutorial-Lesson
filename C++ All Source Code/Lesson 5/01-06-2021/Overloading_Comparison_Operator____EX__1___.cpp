#include<iostream>
#include<conio.h>
using namespace std;
//------------------------------------------------
class Square {
	private:
		double side;
	public:
		Square& operator = (double side)
		{
			this->side = side;
			return *this;
		}
		double getSide() const
		{
			return side;
		}
		// Overloading > Operator
		bool operator >(Square& sq)
		{
			return (this->side > sq.side);
		}
		// Overloading = Operator
		bool operator ==(Square& sq)
		{
			return (this->side == sq.side);
		}
};
//------------------------------------------------


int main()
{
	// Ex1.
	Square A1, A2;
	//set
	A1 = 170;
	A2 = 160;
	
	// Condition 1
	if(A1.getSide() > A2.getSide())
	{
		cout << "\nSide Square A is longer than Side Square B" << endl;
	}
	else if(A1.getSide() == A2.getSide())
	{
		cout << "\nBoth Side Square A and Side Square B are equally" << endl;
	}
	else
	{
		cout << "\nSide Square B is longer than Side Square" << endl;
	}
	
	// Condition 2: Overloading Operator with Object & Object
	if(A1 > A2)
	{
		cout << "\nSide Square A is longer than Side Square B" << endl;
	}
	else if(A1 == A2 )
	{
		cout << "\nBoth Side Square A and Side Square B are equally" << endl;
	}
	else 
	{
		cout << "\nSide Square B is longer than Side Square" << endl;
	}
	
	
	getch();
	return 0;
}
