// Multiple Inheritance
#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
//-----------------------------------------------------
class Homework {
	protected:
		double mark;
	public:
		void setMark(double mark)
		{
			this->mark = mark;
		}
};
//-----------------------------------------------------
class Assignment {
	protected:
		double mark;
	public:
		void setMark(double mark)
		{
			this->mark = mark;
		}
};
//-----------------------------------------------------
//                  Derived Class
class Result: public Homework, public Assignment {
	public:
		double total()
		{
			return Homework::mark + Assignment::mark;
		}
		double avg()
		{
			return total()/2;
		}
		void showResult(int n)
		{
			cout << "\nResult " << n << "#:";
			cout << fixed << setprecision(2);
			cout << "\n\t\t Homework's Score   : " << Homework::mark << endl;
			cout << "\n\t\t Assignment's Score : " << Assignment::mark << endl;
			cout << "\n\t\t Total Score        : " << total() << endl;
			cout << "\n\t\t Average Score      : " << avg() << endl;
		}
};
//-----------------------------------------------------

// main program
int main()
{
	Result R1, R2;
	//set r1
	R1.Homework::setMark(99.00);
	R1.Assignment::setMark(93.00);
	
	//set r2
	R2.Homework::setMark(68.00);
	R2.Assignment::setMark(96.00);
	
	// output:
	R1.showResult(1);
	R2.showResult(2);
	
	getch();
	return  0;
	
}