// Compile time polymorphism: Overloading function
#include<iostream>
#include<conio.h>
using namespace std;
//---------------------------------------------------------------
class Student {
	private:
		int id;
		string name, from;
	public:
		// Overloading function
		void setData(int id)
		{
			this->id = id;
		}
		void setData(string name)
		{
			this->name = name;
		}
		void setData(int id, string from)
		{
			this->id = id;
			this->from = from;
		}
		void setData(int id, string name, string from)
		{
			this->id = id;
			this->name = name;
			this->from = from;
		}	
		void Display(int n)
		{
			cout << "\nStudent " << n << "#:";
			cout << "\n\t\t ID    : " << id << endl;
			cout << "\n\t\t Name  : " << name << endl;
			cout << "\n\t\t From  : " << from << endl;
		}	
		string getFrom() const 
		{
			return from;
		}
};
//---------------------------------------------------------------


// main program
int main()
{
	// Ex1.
	Student A[4];
	//set
	A[0].setData("Tola");
	A[0].setData(2341, "Phnom Penh");
	// set
	A[1].setData(2512, "Nita", "Battambang");
	A[2].setData(2611, "Bopha", "Battambang");
	A[3].setData(2632, "Seyha", "Kampot");
	//output:
	for(int i = 0; i<4; i++)
	{
		if(A[i].getFrom() == "Battambang")
		{
			A[i].Display(i+1);
		}
	}
		
	
	getch();
	return 0;
}