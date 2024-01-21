#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
//-----------------------------------------------------------------------------
class Student {
	private:
		int id;
		string name;
		double math, khmer, english;
	public:
		void setIdName(int id, string name)
		{
			this->id = id;
			this->name = name;
		}
		void setScore(double math, double khmer, double english)
		{
			this->math = math;
			this->khmer = khmer;
			this->english = english;
		}
		void Display(int n)
		{
			cout << "\nStudent " << n << "#:";
			cout << "\n\t\t ID   : " << this->id << endl;
			cout << "\n\t\t Name : " << this->name << endl;
			cout << "\n\t\t Score #:";
			cout << fixed << setprecision(2);
			cout << "\n\t\t\t Math    : " << this->math << endl;
			cout << "\n\t\t\t Khmer   : " << this->khmer << endl;
			cout << "\n\t\t\t English : " << this->english << endl;
		}
};
//-----------------------------------------------------------------------------


int main()
{
	// Ex1.
	Student A1, A2, A3, A4;
	//set
	A1.setIdName(1231, "Nita");
	A1.setScore(90.00, 67.00, 79.00);
	
	A2.setIdName(1312, "Tola");
	A2.setScore(99.00, 63.00, 80.00);
	
	A3.setIdName(1623, "Veha");
	A3.setScore(90.00, 67.00, 79.00);
	
	A4.setIdName(1561, "Bopha");
	A4.setScore(99.00, 63.00, 80.00);
	
	
	// output :
	A1.Display(1);
	A2.Display(2);
	A3.Display(3);
	A4.Display(4);
	
	
	
	getch();
	return 0;
}