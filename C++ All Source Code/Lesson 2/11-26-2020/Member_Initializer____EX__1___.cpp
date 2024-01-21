//    Member Initializer by Constructor
#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;

class SaleBook {
	private:
		string bookName, writer;
		double price;
		int yearPrinted;
	public:
		SaleBook();
		SaleBook(string bookName, string writer, double price, int yearPrinted);
		void setBookName(string bookName);
		void setWriter(string writer);
		void setPrice(double price);
		void setYearPrinted(int yearPrinted);
		void displaySaleProfile();
		static void Header();
		static void Footer();
		
};
/////////////////////////////////////////////////////////

int main()
{
	SaleBook A, C;
	SaleBook B = SaleBook("Penthouse", "Kim Mala", 14.50, 2020);
	// Set
	A.setBookName("Positive Think");
	A.setWriter("Mss Yaa");
	A.setPrice(8.50);
	A.setYearPrinted(2019);
	
	// Output
	SaleBook::Header();
	A.displaySaleProfile();
	B.displaySaleProfile();
	C.displaySaleProfile();
	SaleBook::Footer();
	
	getch();
	return 0;
}
/////////////////////////////////////////////////////////////////////////////
// Assign value to field by member initializer
SaleBook::SaleBook(): bookName("No Value"), writer("Not Set"), price(0.00), yearPrinted(0) 
{	
    
}

/////////////////////////////////////////////////////////////////////////////
SaleBook::SaleBook(string bookName, string writer, double price, int yearPrinted)
: bookName(bookName), writer(writer), price(price), yearPrinted(yearPrinted) 
{
		
}

/////////////////////////////////////////////////////////////////////////////
void SaleBook::setBookName(string bookName)
{
	this->bookName = bookName;
}
void SaleBook::setWriter(string writer)
{
	this->writer = writer;
}
void SaleBook::setPrice(double price)
{
	this->price = price;
}
void SaleBook::setYearPrinted(int yearPrinted)
{
	this->yearPrinted = yearPrinted;
}
void SaleBook::displaySaleProfile()
{
	cout<<fixed<<setprecision(2);
	cout<<"\n\t"<<left <<setw(20)<<bookName<<setw(20)<<writer<<"$"<<setw(20)<<price<<setw(20)<<yearPrinted<<endl;
}
void SaleBook::Header()
{
	cout<<"\n\t"<<right<<setw(40)<<"BOOK SALE";
	cout<<"\n=======================================================================================";
	cout<<"\n\t"<<left <<setw(20)<<"BOOK NAME"<<setw(20)<<"WRITER"<<setw(20)<<"PRICE"<<setw(20)<<"YEAR PRINTED"<<endl;
}
void SaleBook::Footer()
{
	cout<<"\n=======================================================================================";
}

