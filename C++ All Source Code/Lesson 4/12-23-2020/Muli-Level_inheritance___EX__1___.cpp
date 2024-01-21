// Multi-Level Inheritance
#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
//-----------------------------------------------------
class Student {
	protected:
		int id;
		string gender;
	public:
		void setID(int id)
		{
			this->id = id;
		}
		void setGender(string gender)
		{
			this->gender = gender;
		}
};
//-----------------------------------------------------
// Immediate class: Both base class and derived class
class Exam: public Student {
	protected:
		double khmer, math, english;
	public:
		void setAllScores(double khmer, double math, double english)
		{
			this->khmer = khmer;
			this->math = math;
			this->english = english;
		}
};
//-----------------------------------------------------
//                  Derived Class
class Result: public Exam{
	public:
		double total()
		{
			return khmer+math+english;
		}
		double avg()
		{
			return total()/3;
		}
		void showResult(int n)
		{
			cout << "\nResult " << n << "#:";
			cout << fixed << setprecision(2);
			cout << "\n\t\t Student ID         : " << id << endl;
			cout << "\n\t\t Student Gender     : " << gender << endl;
			cout << "\n\t\t Math's Score       : " << math << endl;
			cout << "\n\t\t Khmer's Score      : " << khmer << endl;
			cout << "\n\t\t English's Score    : " << english << endl;
			cout << "\n\t\t Total Score        : " << total() << endl;
			cout << "\n\t\t Average Score      : " << avg() << endl;
		}
};
//-----------------------------------------------------


int main()
{
	Result R1;
	//set
	R1.setAllScores(99.00, 87.00, 56.00);
	R1.setID(1242);
	R1.setGender("Male");
	
	// output:
	R1.showResult(1);
	
	getch();
	return 0;
}