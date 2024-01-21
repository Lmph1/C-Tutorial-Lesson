// Create Body(Definition) Method Outside class Body(Definition)
#include<iostream>
#include<conio.h>
#include<iomanip>
#include<string.h>
using namespace std;
//------------------------------------------------------------------------------
class Movie {
	private:
		// field
		string title;
		char genre[25];
		int duration;
	public:
		// Member functions As Prototype Function
		void setTitle(string title);
		void setGenre(const char* genre);
		void setDuration(int duration);
		string getTitle() const;
		const char* getGenre() const;
		int getDuration() const;
		
};
//------------------------------------------------------------------------------
void display(Movie& mov, int n);// Prototype of Non-Member Function


// Main Program
int main()
{
	// Ex1.
	Movie M1,M2;
	// => set
	
	M1.setTitle("Avenger");
	M1.setDuration(200);
	M1.setGenre("Action");
	
	M2.setTitle("Train to Busan");
	M2.setDuration(500);
	M2.setGenre("Korea Movie");
	
	// Output:
	display(M1,1);
	display(M2,2);


	getch();
	return 0;
}/* End Main */
///////////////////////////////////////////////////////////////////////////////////////////
//            Implement Body(Definition) Method Outside class Body(Definition)
//****************************************************************************************
// => Setter
//-------------------------------------------------------------
void Movie::setTitle(string title)
{
	this->title = title;
}
//-------------------------------------------------------------
void Movie::setDuration(int duration)
{
	this->duration = duration;
}
//-------------------------------------------------------------
void Movie::setGenre(const char* genre)
{
	strcpy(this->genre, genre);
}
//-------------------------------------------------------------
// => Getter
//-------------------------------------------------------------
string Movie::getTitle() const
{
	return title;
}
//-------------------------------------------------------------
int Movie::getDuration() const
{
	return duration;
}
//-------------------------------------------------------------
const char* Movie::getGenre() const
{
	return genre;
}
//-------------------------------------------------------------

//*********************************************************************************
//                        Implement body of Non-Member Function
//*********************************************************************************
void display(Movie& mov,int n)
{
	cout << fixed << setprecision(2);
	cout << "\n\t" <<  left << setw(5) << n << setw(25) << mov.getTitle() << setw(30) << mov.getGenre()
	     << setw(15) << mov.getDuration()<< endl;	
}
//$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
