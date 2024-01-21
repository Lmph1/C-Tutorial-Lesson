#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
//-------------------------------------------------------
string Month[12] = {"January","February","March","April","May","June","July","August",
					"September","October","November","December"};
//-------------------------------------------------------
class Date{
	private:
		int month,day,year;
	public:
		void setDate(int month,int day,int year);
		void setMonth(int month);
		void setDay(int day);
		void setYear(int year);
		void display1();
		void display2();
		void display3();
		static void Header(int n);
};
//-------------------------------------------------------
//**********************************************************************
void Date::setDate(int month,int day,int year){
	
	this->month=month;
	
	this->day=day;
	
	this->year=year;
	
}
void Date::setMonth(int month){
	
	this->month=month;
}
	void Date::setDay(int day){
		
	this->day=day;
}
	void Date::setYear(int year){
		
	this->year=year;
}
void Date::Header(int n)
{
	cout << "\n//////////////////// Show Date " << n << " ////////////////////\n";
}
          /////////////////display1///////////////////////////
void Date::display1()
{
	if(day>=1&&day<=31&&month>=1&&month<=12&&year>0)
	{
		cout<<"\n\t" << this->month << "/" << this->day << "/" << this->year << endl; 
	}
	else
	{
		if(!(month>=1&&month<=12))
		{
			cout << "\nError: Invalid Month!!!" << endl;
		}
		else if(!(day>=1&&day<=31))
		{
			cout << "\nError: Invalid Day!!!" << endl;
		}
		else cout << "\nError: Invalid Year!!!" << endl;
	}
	
}
         /////////////////display2///////////////////////////
void Date::display2()
{
	if((month>=1)&&(month<=12)&& (day>0 )&&( day<32) && (year>0))
	{	
		cout<<"\n\t" << Month[this->month-1] << " " << this->day << ", " << this->year << endl; 
	}
	else cout << "\nError: Invalid Date" << endl;
	
}
       /////////////////display3///////////////////////////
void Date::display3()
{
	if((month>=1)&&(month<=12)&& (day>0 )&&( day<32) && (year>0))
	{	
		cout<<"\n\t" << this->day << " " <<  Month[this->month-1] << " " << this->year << endl; 
	}
	else cout << "\nError: Invalid Date" << endl;
}
//**********************************************************************

int main()
{
    Date d1, d2, d3;
    // 
	d1.setDate(12,13,2007);
	
	d2.setDay(30);
	d2.setMonth(2);
	d2.setYear(2004);
	
	d3.setDay(25);
	d3.setMonth(15);
	d3.setYear(-2012);
	
	cout<<setw(70)<<"ShOW ALL THE INFO OF DATE "<<endl<<endl;
	
	Date::Header(1);
	d1.display1();
	d1.display2();
	d1.display3();
	
	Date::Header(2);
	d2.display1();
	d2.display2();
	d2.display3();
	
	Date::Header(3);
	d3.display1();
	d3.display2();
	d3.display3();
		
	getch();
	return 0;
}
