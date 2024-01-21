#include<iostream>
#include<conio.h>
using namespace std;
//-----------------------------------------------------
class Array {
	private:
		int* arr;// pointer to array int
		unsigned int size;
	public:
		// Overloading Subcripting Operator [ ]
		int& operator[](int index)
		{
			return arr[index];
		}
		Array(int elements)
		{
			this->size = elements;
			arr = new int[size];
		}
		~Array()
		{
		    delete [ ]arr;
		}
	    unsigned int getSize() const 
	    {
	    	return this->size;
		}
		
};
//-----------------------------------------------------

int main()
{
	// Ex1.
	Array A1(3);
	//set
	A1.operator [](0) = 10;
	A1.operator [](1) = 45;
	A1.operator [](2) = 21;
	
	// output:
	for(int i = 0; i<A1.getSize(); i++)
	{
		cout << A1.operator[](i) << "\t";
	}
	
	// Ex2.
	Array A2(5);
	// set
	A2[0] = 11;
	A2[1] = 42;
	A2[2] = 99;
	A2[3] = 51;
	A2[4] = 25;
	
	// output:
	cout << "\n--------------------\n";
	for(int i = 0; i<A2.getSize(); i++)
	{
		cout << A2[i] << "\t";
	}
	
	
	getch();
	return 0;
}