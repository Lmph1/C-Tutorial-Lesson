// Friend Function and friend Class
#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
//---------------------------------------------------------------
class Student {
	private:
		int id;
	protected:
		string name, address;
	public:
		Student() 
		{
		 
		}
		Student(int id, string name, string address)
		{
			this->id = id;
			this->name = name;
			this->address = address;
		}
		void setAll(int id, string name, string address)
		{
			this->id = id;
			this->name = name;
			this->address = address;
		}
		// Prototype of friend function(Non-Member function)
		friend void showStudentInfo(Student& stu);
		// Class Declaration of Friend Class
		friend class Demo;
		
		//friend void setData(Student& stu, int id);
			
};
//--------------------------------------------------------------
//              Non-Member Function
//--------------------------------------------------------------
void showStudentInfo(Student& stu )
{
	cout << "\n\t" << left << setw(15) << stu.id << setw(25) << stu.name << setw(30) << stu.address << endl;
}
//#############################################################
//                       Other Class
//------------------------------------------------------------
class Demo {
	private:
		int a;
	public:
		void setA(int a)
		{
			this->a = a;
		}
		void Display(Student& stu)
		{
			cout << "\n\t" <<a<< left << setw(15) << stu.id << setw(25) << stu.name << setw(30) << stu.address << endl;
		}
		
};
//------------------------------------------------------------

// Main Program
int main()
{
	// Ex1.
	Student A1 = Student(1245, "Nita", "Phnom Penh");
	Student B1, B2;
	// set
	B1.setAll(2311, "Tola", "Kampot");
	B2.setAll(2341, "Veha", "Battambang");
	
		
	// output 1:
	showStudentInfo(A1);// Non-Member Function
	showStudentInfo(B1);
	showStudentInfo(B2);
	
	// output 2:
	cout << "\n---------------------------\n";
	Demo D;
	D.setA(15);
	
	D.Display(A1);
	D.Display(B1);
	D.Display(B2);
	
	getch();
	return 0;
}

