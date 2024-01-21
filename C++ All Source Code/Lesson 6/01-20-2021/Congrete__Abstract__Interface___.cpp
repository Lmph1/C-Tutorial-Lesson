#include<iostream>
#include<conio.h>
using namespace std;
//---------------------------------------------------
class Person {// Congrete Class
	protected:
		int id;
		string name;
	public:
		virtual ~Person()
		{
			
		}
		void setData(int id, string name)
		{
			this->id = id;
			this->name = name;
		}	
		//Virtual Function
		//virtual void show();
	
};
//---------------------------------------------------
class Human {// Abstract Class
	protected:
		int id;
		string name;
	public:
		virtual ~Human()
		{
			
		}
		void setData(int id, string name)
		{
			this->id = id;
			this->name = name;
		}
		// Pure Virtual Function or Abstract Method
		virtual void show() = 0;		
};
//---------------------------------------------------
class MyInterface {// Pure Abstract Class, Interface
	public:
		virtual ~MyInterface()
		{
			
		}
		// Pure Virtual Function or Abstract Method
		virtual void display1() = 0;
		virtual void display2() = 0;	
		virtual void display3(int n) = 0;			
};
//---------------------------------------------------


int main()
{
	// Ex1.
	Person p1;// Ok: Person is Normal Type of Class, Congrete Class
	
	// Ex2.
	Human h1;// Error: Human is Abstract Type
	
	// Ex3.
	MyInterface A;// Error: MyInterface is Abstract Type
	
	
	getch();
	return 0;	
}