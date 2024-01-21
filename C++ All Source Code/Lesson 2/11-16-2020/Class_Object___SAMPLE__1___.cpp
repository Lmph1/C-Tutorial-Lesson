// OOP : Class & Object
#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
//--------------------------------------------------------------------------------
// 1st:
class Customer { // => Data Encapsulation
    private:
    	// Data Member, Field
	    int id;
	    string name, gender;
	    char address[30];
	    char tel[25];	
	public:
		// Member Function, Method
		void input()/* Sender */
		{
			cout << "\nInput Customer # ";
			cout << "\n\t\tID      : "; cin>>id; fflush(stdin); cin.clear();
			cout << "\n\t\tName    : "; getline(cin, name); fflush(stdin);
			cout << "\n\t\tGender  : "; getline(cin, gender); fflush(stdin);
			cout << "\n\t\tAddress : "; cin.get(address, 30); fflush(stdin);
			cout << "\n\t\tTel     : "; cin.get(tel, 25); fflush(stdin);
			
		}
		//--------------------------------------------------
		void display()/* Receiver */
		{
			cout << fixed << setprecision(2);
			cout << "\n\t" << left << setw(15) <<  id  << setw(25) << name << setw(30) << setw(35)<< gender <<setw(40)<< address  << setw(18) << tel << endl;
		}
}; 
//--------------------------------------------------------------------------------




// Main Program
int main()
{
	// 2nd:
	Customer A1, A2;// id, name, gender, tel, address, input(), display()
	
	//3rd:
	// set
	A1.input();// Message Passing, Data Abstraction
	A2.input();
	
	// get
	A1.display();// Message Passing, Data Abstraction
	A2.display();// Message Passing, Data Abstraction
	
	
	getch();
	return 0;
}
