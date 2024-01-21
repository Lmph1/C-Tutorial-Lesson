// Check size class 1
#include<iostream>
#include<conio.h>
using namespace std;
//-----------------------------------------------------
class A {

	int qty;
	double price;	
	
	// Class A: sizeof(qty) + sizeof(price) = [4+4] + 8	= 16
};

//-------------------------------------------------------
class B {

	char a;
	double b;	
	
	// Class B: sizeof(a) + sizeof(b) = [1+7] + 8	= 16
};
//-------------------------------------------------------
class C {

	char a;
	short b;	
	
	// Class C: sizeof(a) + sizeof(b) = [1+1] + 2	= 4
};
//-------------------------------------------------------
class Student {

	int id;
	string name;// Depend on Compiler
	
	// 64 bit Compiler:
	// Class Student: sizeof(id) + sizeof(name) = [4+4] + 32	= 40
};
//-------------------------------------------------------
class Employee {

	int id;
	char name[25];
	
	// Class Employee: sizeof(id) + sizeof(name) = 4 + [25+3]	= 32
};
//-------------------------------------------------------
class D {
	int a;
	double c;
	char b;
	// Class D: sizeof(a) + sizeof(b) + sizeof(c) = [4+1+3] + 8 = 16
};

// main program
int main()
{
	cout << "\nSize of Class A : " << sizeof(A) << " bytes" << endl;
	cout << "\nSize of Class B : " << sizeof(B) << " bytes" << endl;
	cout << "\nSize of Class C : " << sizeof(C) << " bytes" << endl;
	cout << "\nSize of Class Student : " << sizeof(Student) << " bytes" << endl;
	cout << "\nSize of Class Employee : " << sizeof(Employee) << " bytes" << endl;
	cout << "\nSize of Class D : " << sizeof(D) << " bytes" << endl;
	
	getch();
	return 0;
}