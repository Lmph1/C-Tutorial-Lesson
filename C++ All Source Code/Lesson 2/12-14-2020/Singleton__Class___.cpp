// Singleton Class
#include<iostream>
#include<conio.h>
using namespace std;
//--------------------------------------------------
class PM {// PM mean Prime Minister
    private:
    	string name;
    private:
    	PM(): name("Unknown")  { }
    	PM(const PM& other);
    	PM& operator = (const PM& other);
    public:
    	void setName(string name)
    	{
    		this->name = name;
		}
		void Display()
		{
			cout << "\nThe Prime Minister's Name is " << name << endl;
		}
		// Static Method
		static PM& getObject()
		{
			static PM tmp;// static Object
			
			return tmp;
		}
};
//--------------------------------------------------


int main()
{
	// Ex1.
	PM& p1 = PM::getObject();// Reference Object
	
	//set
	p1.setName("Techo Yort");
	
	//output 1:
	cout << &p1 << endl;
	p1.Display();	
	
	
	// Ex2.
	PM& p2 = PM::getObject();// Reference Object
	
	//output 2:
	cout << &p2 << endl;
	p2.Display();
	
	
	getch();
	return 0;

}