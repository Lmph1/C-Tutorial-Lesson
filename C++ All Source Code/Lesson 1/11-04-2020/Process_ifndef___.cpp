#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	#ifndef A
	#define A
	    cout << "\nHeader File is included\n";
	#endif
	
	#ifndef A
	    cout << "\nHeader File is included\n";
	#endif
	
	getch();
	return 0;
}
