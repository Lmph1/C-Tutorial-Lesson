#ifndef __EMPLOYEE__H
#define __EMPLOYEE__H
//-------------------------------------
#include<iostream>
#include<iomanip>
#include<string.h>
using namespace std;
//*************************************
class Employee {
	private:
		int id;
		string name;
		char position[25];
		double salary;
	public:
		Employee(): id(11111), name(""), salary(0.00)
		{
			strcpy(position, "");
		}
		Employee(int id, string name, const char* position, double salary)
		: id(id), name(name), salary(salary)
		{
			strcpy(this->position, position);
		}
		void setAll(int id, string name, const char* position, double salary)
		{
			strcpy(this->position, position);
			this->name = name;
			this->id = id;
			this->salary = salary;
		}
		void Display(int n)
		{
			cout << "\nEmployee " << n << "#:";
			cout << "\n\t\t ID       : " << this->id << endl;
			cout << "\n\t\t Name     : " << this->name << endl;
			cout << "\n\t\t Position : " << this->position << endl;
			cout << fixed << setprecision(2);
			cout << "\n\t\t Salary   : $" << this->salary << endl;
		}
};
//-------------------------------------
#endif
