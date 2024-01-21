// Preventing Object
#include<iostream>
#include<conio.h>
using namespace std;
//---------------------------------------------
// Mode 3:
class Student {
	private:
		int id;
		string name;
	public:
		Student()
        {
        	
		}
		void setAll(int id, string name)
		{
			this->id = id;
			this->name = name;
		}
		void Display(int n)
		{
			cout << "\nStudent " << n << "#: " << id << "\t" << name << endl;
		}
		public:
			Student(const Student& other) = delete;
			Student& operator = (const Student& other) = delete;
};
//---------------------------------------------


int main()
{
	// Ex1.
	Student d1;
	//set
	d1.setAll(1245, "Nita");
	
	// ouput 1:
	d1.Display(1);
	
	// Ex2.
	//Student d2 = d1;
	
	// output 2:
	//d2.Display(2);
	
	// Ex3.
	Student d3;
	
	//d3 = d1;
	
	getch();
	return 0;
}