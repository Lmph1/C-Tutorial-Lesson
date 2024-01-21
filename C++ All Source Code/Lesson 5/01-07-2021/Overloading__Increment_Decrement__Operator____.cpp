#include<iostream>
#include<conio.h>
using namespace std;
//------------------------------------------
class Integer {
	private:
		int data;
	public:
		Integer& operator = (int a)
		{
			data = a;
			return *this;
		}
		Integer(int data = 0)
		{
			this->data = data;
		}
		void Display(int n)
		{
			cout << "\nObject " << n << "#:";
			cout << "\n\t\tData  : " << this->data << endl;
		}
		//////////////////////////////////////////////////////////
		/// Overloading Prefix Increment Operator : ++ Obj
		Integer& operator ++ ()
		{
			++(this->data);
			
			return *this;
		}
		/// Overloading Prefix Decrement Operator : -- Obj
		Integer& operator -- ()
		{
			--(this->data);
			
			return *this;
		}
		
		//////////////////////////////////////////////////////////
		/// Overloading Postfix Increment Operator :  Obj ++
		Integer operator ++ (int)
		{
			Integer tmp;
			tmp.data = (this->data)++;
			
			return tmp;
		}
		/// Overloading Prefix Decrement Operator :  Obj --
		Integer operator -- (int)
		{
			Integer tmp;
			tmp.data = (this->data)--;
			
			return tmp;
		}
};

// Main Program
int main()
{
	Integer A1 = 10;
    Integer A2, A3;
    //set
    A2 = 71;
    A3 = 68;
    
    // output 1:
    A1.Display(1);
    A2.Display(2);
    A3.Display(3);
    cout << "\n         _____________________________ \n";
    
    // Calculate 1:
    ++A1;
    --A2;
    
    // output 2:
    A1.Display(1);
    A2.Display(2);
    A3.Display(3);
     cout << "\n         _____________________________ \n";
     
    // Calculate 2:
    A1++;
    A2--;
    
    // output 2:
    A1.Display(1);
    A2.Display(2);
    A3.Display(3);
     cout << "\n         _____________________________ \n";
     
    /////////////////////////////////////
    A3 = A1++;// => A3 = Right Operater ++ ; A3 = A1; => A1 = A1 + 1;
    
	 // output 2:
    A1.Display(1);//  13
    A2.Display(2);
    A3.Display(3);// store value of right operator ++ :  12
    cout << "\n         _____________________________ \n"; 
    
    
    getch();
    return 0;
}

