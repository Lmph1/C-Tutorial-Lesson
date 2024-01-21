// Check size class 3
#include<iostream>
#include<conio.h>
using namespace std;
//-------------------------------------------------------
class A {
	int a;
	char b;
	double c;

	// Class A: sizeof(a) + sizeof(b) + sizeof(c) = [4+1+3] + 8 = 16
};
//-------------------------------------------------------
class B {
	int a;
	double c;
    char b;
    
	// Class B: sizeof(a) + sizeof(c) + sizeof(b) = [4+4] + 8 +[1+7] = 24
};
//-------------------------------------------------------
class C {
	
	char b;
	short n;
	int a;
	double c;

	// Class C: sizeof(b) + sizeof(n) + sizeof(a) + sizeof(c) = [4+2+1+1] + 8 = 16
};
//-------------------------------------------------------
class D {
	
	char b;
	short n;
	int a;
	int M;
	double c;

	// Class D: sizeof(b) + sizeof(n) + sizeof(a) + sizeof(M)+ sizeof(c) = [4+2+1+1] + [4+4] + 8 = 24
};
//-------------------------------------------------------
// main program
int main()
{

	cout << "\nSize of Class A : " << sizeof(A) << " bytes" << endl;
	cout << "\nSize of Class B : " << sizeof(B) << " bytes" << endl;
	cout << "\nSize of Class C : " << sizeof(C) << " bytes" << endl;
	cout << "\nSize of Class D : " << sizeof(D) << " bytes" << endl;
	
	getch();
	return 0;
}