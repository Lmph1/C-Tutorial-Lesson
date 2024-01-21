// Create Body(Definition) Method inside class Body(Definition)
#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
//------------------------------------------------------------------------------
class Movie {
	private:
		// fields
		string title, genre;
		int duration;
	public:
		// member function As Function Definition(Body)
		void settitle(string title)
		{
			// field = parameter
			//(*this).title = title;
			this->title = title;// require
		   
		}
		void settduration(int d)
		{
			this->duration=d;// optional
		}
		void setgenre(string g)
		{
			genre=g;
		}
		string gettitle() const
		{
			return title;
		}
		int getduration() const
		{
			return duration;
		}
		string getgenre() const
		{
			return genre;
		}
	
};
//------------------------------------------------------------------------------

void display(Movie& mov,int n)
{
	cout << fixed << setprecision(2);
	cout << "\n\t" <<  left << setw(5) << n << setw(25) << mov.gettitle() << setw(30) << mov.getgenre()
	     << setw(15) << mov.getduration()<< endl;	
}
int main()
{
	Movie M1,M2;
	M1.settitle("Avenger");
	M1.settduration(200);
	M1.setgenre("Action");
	
	M2.settitle("Root to Busain");
	M2.settduration(500);
	M2.setgenre("Korea Movie");
	display(M1,1);
	display(M2,2);
	getch();
	return 0;
}
