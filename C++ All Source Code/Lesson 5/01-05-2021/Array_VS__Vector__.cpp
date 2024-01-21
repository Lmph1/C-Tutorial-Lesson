#include<iostream>
#include<vector>// Class Template: C++ 
#include<conio.h>
using namespace std;

int main()
{
	// Ex1.
	int num[4];// Array : 5 Elements
	//set
	num[0] = 20;
	num[1] = 40;
	num[2] = 10;
	num[3] = 90;
	
	cout << "\n_____Array____\n";
	for(int i = 0; i<4; i++)
	{
		cout << num[i] << "\t";
	}
	
	// Ex2.
	// vector<Type> objName;
	vector<int> vn;// Empty
	//set
	vn.push_back(20);// position 0
	vn.push_back(40);// position 1
	vn.push_back(10);// position 2
	vn.push_back(90);// position 3
	
	cout << "\n_____Vector____\n";
	for(int i = 0; i<vn.size(); i++)
	{
		cout << vn[i] << "\t";
	}
	
	
	getch();
	return 0;
}