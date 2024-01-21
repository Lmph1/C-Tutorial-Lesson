// Using Structure in C/C++
#include<iostream>
#include<iomanip>
#include<conio.h>
#include<string.h>// strcpy(CharArray, Value );
using namespace std;
//------------------------------------------------------------------
// Step 1:
struct Student {
	// Members, fields
	int id;
	char name[25];// Char Array
	string from;
};

//------------------------------------------------------------------
void Demo1()
{
	struct Student stu;// One student
	// input
	cout << "\nEnter Student ID   : "; cin>>stu.id; fflush(stdin); cin.clear();
	cout << "\nEnter Student Name : "; cin.get(stu.name, 25); fflush(stdin);
	cout << "\nEnter Student From : "; getline(cin, stu.from);
	
	
	// output :
	cout << stu.id << "\t" << stu.name << "\t" << stu.from << endl;
	
}
//------------------------------------------------------------------

int main()
{
	// Ex1.
	// Step 2:
	Student A1;// .cpp
	struct Student A2;// .c, .cpp
	struct Student a3 = { 2312, "Veha", "Kampot" };
	Student A4 = { 2371, "Nita", "Phnom Penh" };
	
	// Step 3:
	// output 1:
	cout << a3.id << "\t" << a3.name << "\t" << a3.from << endl;
	cout << A4.id << "\t" << A4.name << "\t" << A4.from << endl;
	
	// set Value to A1 & A2
	A1.id = 1240;
	strcpy(A1.name, "Kanha");// Only Char Array
	A1.from = "Battambang";
	
	A2.id = 1280;
	A2.from = "Koh Kong";
	strcpy(A2.name, "Soriya");// Only Char Array
	
	// output 2:
	cout << A1.id << "\t" << A1.name << "\t" << A1.from << endl;
	cout << A2.id << "\t" << A2.name << "\t" << A2.from << endl;
	
	/////////////////////////////////////////////////////////////////////
	// Ex2.
	 Demo1();
	 
	 
	
	getch();
	return 0;
	
}
