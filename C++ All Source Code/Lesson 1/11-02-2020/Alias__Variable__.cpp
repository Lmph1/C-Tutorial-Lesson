// Reference Variable or Alias Variable
#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	// Ex1.
	int num = 20;// num is original name of variable
	
	// output 1:
	cout << "\nOriginal : " << &num << " => " << num << endl;
	
	
	// Ex2.
	int& r1 = num; // r1 is second name of address of num
	int& r2 = num; // r2 is second name of address of num
	
	// output 2:
	cout << "\nSecond : " << &r1 << " => " << r1 << endl;
	cout << "\nThird  : " << &r2 << " => " << r2 << endl;
	
	getch();
	return 0;
}
