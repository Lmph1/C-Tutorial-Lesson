// Aggregate Class
#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
//------------------------------------------------------------------------------
class Author { // Normal Class
	private:
		string name;
		string tel;
	public:
		Author(){
			
		}
		Author(string name,string tel)
		{
			this->name=name;
			this->tel=tel;
		}
		// Getter 
		string Getname() const {return name;
		}
		string Gettel() const { return tel;
		}	
};
//------------------------------------------------------------------------------
class Book { // Aggregate Class
	private:
		string name; 
		Author author; // author is Aggregate Object
		int yearPrint;
	public:
		void setData(string name,int yearPrint,Author& author)
		{
			this->name=name;
			this->yearPrint=yearPrint;
			this->author=author;
		}
		void Display()
		{
			cout << "\t\t" << left << setw(15) << name << setw(20) << yearPrint << setw(20) << this->author.Getname() 
			      << setw(15) << this->author.Gettel() << endl;
		}
		static void Header()
		{
			cout << "\t=============================Book Info=========================================" << endl;
			cout << "\t\t" << left << setw(15) << "Name" << setw(20) << "Yearprint" << setw(20) 
			     << "Author_Name" << setw(15) << "Author_tel" << endl;
		    cout << "\t===============================================================================" << endl;
		}
};

//------------------------------------------------------------------------------
class Song { // Aggregate Class
	private:
		string title, singer; 
		Author author; // author is Aggregate Object
	public:
		void setData(string title,string singer,Author& author)
		{
			this->title=title;
			this->singer=singer;
			this->author=author;
		}
		void Display()
		{
			cout << "\t\t" << left << setw(15) << title << setw(20) << singer << setw(20) << this->author.Getname() 
			      << setw(15) << this->author.Gettel() << endl;
		}
		static void Header()
		{
			cout << "\t=============================Song Info=========================================" << endl;
			cout << "\t\t" << left << setw(15) << "Tile" << setw(20) << "Singer" << setw(20) 
			     << "Author_Name" << setw(15) << "Author_tel" << endl;
		    cout << "\t===============================================================================" << endl;
		}
};
//------------------------------------------------------------------------------------------------------------

int main()
{
	// Ex1.
	// set value for constructor of Noraml Class
	Author a1("kok dara","0972345678"); // sort-hand
	Author a2 = Author("chan chan","0962345423");// long-hand
	
	// Ex2.
	// create object for Aggregate class
	Book N1,N2;
	Book::Header();
	N1.setData("strong man",2002,a1);
	N2.setData("The power",2010,a2);
	N1.Display();
	N2.Display();
	
	
	// Ex3.
	Song A1, A2;
	//set
	A1.setData("ABC", "Unknown", a2);
	A2.setData("YOU", "Unknown", a2);
	
	// output:
	Song::Header();
	A1.Display();
	A2.Display();
	
	
	getch();
	return 0;
}




