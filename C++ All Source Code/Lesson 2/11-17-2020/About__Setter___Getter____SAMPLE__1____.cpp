// setter & getter
#include<iostream>
#include<conio.h>
#include<iomanip>
#include<string.h>//strcpy
using namespace std;
//---------------------------------------------------------------
class Product {
	private:
		string name;
		char companyName[30];
		int qty;
		double price;
	public:
		// Member Functions
		// => Mutator, Setter
		void setProductName(string n)
		{
			name = n;
		}
		void setProductCompanyName(const char* company)
		{
			strcpy(companyName, company);
		}
		void setQty(int q)
		{
			qty = q;
		}
		void setPrice(double p)
		{
			price = p;
		}
		// => Accessor, Getter : Constant Function Member
		string getProductName() const 
		{
			return name;
		}
		const char* getProductCompanyName() const
		{
			return companyName;
		}
		int getQty() const
		{
			return qty;
		}
		double getPrice() const 
		{
			return price;
		}
		// => Simple Member Function
		double getTotal() const
		{
			return qty*price;
		}		
};
//---------------------------------------------------------------
//                    Non-Member Function
//*****************************************************************************
void showProductProfile(Product& pro)
{
	cout << fixed << setprecision(2);
	cout << "\n\t" << left << setw(25) << pro.getProductName() << setw(30) << pro.getProductCompanyName()
	     << setw(15) << pro.getQty() << setw(16) << pro.getPrice() << setw(18) << pro.getTotal() << endl;
}

//*****************************************************************************

// Main Program
int main()
{
	// Ex1.
	Product A1;
	//set by Setter
	A1.setProductName("Iphone 12 Pro Max");
	A1.setProductCompanyName("Apple");
	A1.setQty(20);
	A1.setPrice(1700.00);
	
	// get By Geter
	cout << fixed << setprecision(2);
	cout << "\n\t" << left << setw(25) << A1.getProductName() << setw(30) << A1.getProductCompanyName()
	     << setw(15) << A1.getQty() << setw(16) << A1.getPrice() << setw(18) << A1.getTotal() << endl;
	
	// output again:
	showProductProfile(A1);
	
	//Ex2.
	Product p2;
	//set
    p2.setProductName("Galaxy Note 20 Ultra");
	p2.setProductCompanyName("Samsung");
	p2.setQty(15);
	p2.setPrice(1300.00);
	
	// output:
	cout << fixed << setprecision(2);
	cout << "\n\t" << left << setw(25) << p2.getProductName() << setw(30) << p2.getProductCompanyName()
	     << setw(15) << p2.getQty() << setw(16) << p2.getPrice() << setw(18) << p2.getTotal() << endl;
	
	// output again:
	showProductProfile(p2);
	
	
		
	getch();
	return 0;
}
