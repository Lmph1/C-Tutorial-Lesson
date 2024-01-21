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
		// Overloading Minus Operator: -Obj
		Square operator -()
		{
			Square tmp;
		    tmp.side = -(this->side);
			
			return tmp;
		}
		
		void show(int n)
		{
			cout << "\nSquare " << n << "#:";
			cout << "\n\t\t Side : " << side << " units" << endl;
		}
		
};
//------------------------------------------------
class Demo {
	private:
		int* ptr;
	public:
		Demo()
		{
			ptr = new int();
		}
		~Demo()
		{
			delete ptr;
		}
		void operator =(int Data)
		{
			*(this->ptr) = Data;
		}
		// Overloading Dereference Operator: *obj
		int operator *()
		{
			return *ptr;
		}
};


int main()
{
	// Ex1.
	Square A1, A2;
	//set
	A1 = 20;
    A2 = -A1;
    	
	// output:
	A1.show(1);
	A2.show(2);
	
	// Ex2.
	Demo D1;
	//set
	D1 = 250;
	
	cout << D1.operator *() << "\t" << *D1 << endl;
	

	getch();
	return 0;
}