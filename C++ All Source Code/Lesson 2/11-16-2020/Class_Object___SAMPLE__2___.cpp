// OOP : Class & Object
#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
//--------------------------------------------------------------------------------
// 1st:
class Course {// => Data Encapsulation
	private:
		// Data Members, fields
		string name;
		double price;
		int discount;
	public:
		// Member functions, Method
		void setCourse(string n, double p, int d)/* Sender */
		{
			// field = parameter
			 name = n;
			 price = p;
			 discount = d;
		}
		void input()/* Sender */
		{
			cout << "\nEnter Course #";
			cout << "\n\t\t Name        : "; getline(cin, name); 
			cout << "\n\t\t Price       : $"; cin>>price; fflush(stdin); cin.clear();
			cout << "\n\t\t Discount(%) : ";  cin>>discount; fflush(stdin); cin.clear();
		}
		double getPayment()/* Receiver */
		{
			return price-price*discount/100;
		}
		void showCourse(int n)/* Receiver */
		{
			cout << "\n_________Course " << n << "____________\n";
			cout << "\nCourse Name : " << name << endl;
			cout << fixed << setprecision(2);
			cout << "\nPrice       : $" << price << endl;
			cout << "\nDiscount    : " << discount << " %" << endl;
			cout << "\nPayment     : $" << getPayment() << endl;
		}
		
};
//--------------------------------------------------------------------------------




// Main Program
int main()
{
	// Ex1.
    Course A1, A2;
    //set
    A1.setCourse("C++ OOP", 65.00, 15);// Indirectly
    A2.setCourse("C/C++", 59.00, 10);
    
    // output 1:
    A1.showCourse(1);
	A2.showCourse(2);   
	
	
	// Ex2.
	Course A3;
	//set
	A3.input();
	
	// output 2:
	A3.showCourse(3); 
    
    
	getch();
	return 0;
}
