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
};
//---------------------------------------------------------------


// main program
int main()
{
	// Ex1.
	Student A1, A2;
	//set
	A1.setData("Tola");
	A1.setData(2341, "Phnom Penh");
	//output:
	//A1.Display(1);
	
	// set
	A2.setData(2512, "Nita", "Battambang");
	//output:
	A2.Display(2);
	
	
	getch();
	return 0;
}