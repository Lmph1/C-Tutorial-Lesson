// Nested Class
#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
//-----------------------------------------------------------------------------
class Student {// Outer Class
	//****************************************
	public:
		class Score {// Inner Class
			private:
			    double math, khmer, english;
			public:
				void setScore(double math, double khmer, double english)
				{
					this->math = math;
					this->khmer = khmer;
					this->english = english;
				}
				// Getter
				double getMath() const { return math; }
				double getKhmer() const {return khmer; }
				double getEnglish() const { return english; }		
		};
	
	//****************************************
	private:
		int id;
		string name;
		Score score;// score is object : math, khmer, english
	public:
		void setStudentInfo(int id, string name, Score& score)
		{
			this->id = id;
			this->name = name;
			this->score = score;// Copy Object
		}
	
		void Display(int n)
		{
			cout << "\nStudent " << n << "#:";
			cout << "\n\t\t ID   : " << this->id << endl;
			cout << "\n\t\t Name : " << this->name << endl;
			cout << "\n\t\t Score #:";
			cout << fixed << setprecision(2);
			cout << "\n\t\t\t Math    : " << this->score.getMath() << endl;
			cout << "\n\t\t\t Khmer   : " << this->score.getKhmer() << endl;
			cout << "\n\t\t\t English : " << this->score.getEnglish() << endl;
		}
};
//-----------------------------------------------------------------------------


int main()
{
	
	// => Object of InnerClass
	Student::Score N1, N2;
	// set
	N1.setScore(90.00, 67.00, 79.00);
	N2.setScore(99.00, 63.00, 80.00);
	
	// => Object of OuterClass
	Student A1, A2, A3, A4;
	//set
	A1.setStudentInfo(1231, "Nita", N1);
	A2.setStudentInfo(1312, "Tola", N2);
	A3.setStudentInfo(1623, "Veha", N1);
	A4.setStudentInfo(1561, "Bopha", N2);
	
	
	// output :
	A1.Display(1);
	A2.Display(2);
	A3.Display(3);
	A4.Display(4);
	
	
	
	getch();
	return 0;
}