// Type of Member Functions
#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
//---------------------------------------------------------------------------------------
class Student {
	private:
		int id;
		string name;
	public:
		// Member function As Function Definition(Have Body), they become inline automatically.
		//----------------------------------------------------------------------------
		// 1. Simple Method and Auto Inline Method
		void setAll(int id, string name)
		{
			this->id = id;
			this->name = name;
		}
		void show()
		{
			cout << "\n\t\t" << left << setw(15) << id << setw(25) << name << endl;
		}
		// 2. Static Method and Auto Inline Method
		static void Header()
		{
			cout << "\n\t\t" << left << setw(15) << "ID" << setw(25) << "NAME" << endl;
		}
		// 3. Constant Method and Auto Inline Method
		int getId() const 
		{
			return id;
		}
		// 4. Inline Method
		inline string getName() const
		{
			return name;
		}
		inline int sum(int a, int b)
		{
			return a+b;
		}
		
		// Note:  Functions Member As Function Prototype, it not inline
		void Loop(int n);
		static void Test(int n);
		double getSquareArea(double n);
			
};
//---------------------------------------------------------------------------------------
// Implement body og Prototype Functions Member
//*********************************************************
void Student::Loop(int n)// Simple Method, Not Inline
{
	for(int a = 1; a<=n; a++)
	{
		cout << a << "\t";
	}
	cout << endl;
}
//*********************************************************
void Student::Test(int n)// Static Method, Not Inline
{
	for(int a = 1; a<=n; a++)
	{
		cout << a * a << "\t";
	}
	cout << endl;
}
//*********************************************************
inline double Student::getSquareArea(double n)// Inline Method
{
	return n * n;
}
//*********************************************************


// Main Program
int main()
{
	// => Non-Static Method(Instance Method) : Calling by Object
	Student A1;
	//set
	A1.setAll(1280, "Nita");
    //get
    A1.show();
    
    // output:
    A1.Loop(10);
    
    
    // => Static Method:
    // Mode 1 : Calling by Object
    A1.Test(5);
    
    // Mode 2 : Calling By ClassName
    Student::Test(5);
    
    
    
    // Note
    // Output:
    Student::Header();
    A1.show();
    
	
	getch();
	return 0;
}



