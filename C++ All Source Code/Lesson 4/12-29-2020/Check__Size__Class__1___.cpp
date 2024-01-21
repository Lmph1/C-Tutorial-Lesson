// Check size class 1
#include<iostream>
#include<conio.h>
using namespace std;
//-----------------------------------------------------
class A {
	private:
		// Non-Static Data Member, Instance Data Member
		int qty;
		float price;
		// Static Data Member
		static string text[100];
		static const double pi;
	public:
		// Member Function
		double total()
		{
			return qty*price;
		}
	    void setQty(int qty)
		{
		   this->qty = qty;
		} 		
};
//-----------------------------------------------------


// main program
int main()
{
	cout << "\nSize of Class A : " << sizeof(A) << " bytes" << endl;
	
	getch();
	return 0;
}