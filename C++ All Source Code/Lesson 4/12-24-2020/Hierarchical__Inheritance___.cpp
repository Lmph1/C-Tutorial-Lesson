// Hierarchical Inheritance
#include<iostream>
#include<conio.h>
using namespace std;
//----------------------------------------------------------------
class Person {// Parent Class
	protected:
		string fullname;
		string address;
	    string gender;
	public:
		void setFullName(string fullname)
		{
			this->fullname = fullname;
		}
		void setAddress(string address)
		{
			this->address = address;
		}
		void setGender(string gender)
		{
			this->gender = gender;
		}
		void setNameAddressGender(string name, string address, string gender)
		{
			this->setAddress(address);
			this->setFullName(name);
			this->setGender(gender);
		}
};
//----------------------------------------------------------------
class Customer:/*Dariwaytion*/ public Person {// Child Class
    private:
    	int cusId;
    public:
    	void setCustomerId(int id)
    	{
    		this->cusId = cusId;
		}
		void show(int n)
		{
			cout << "\nCustomer " << n << "#";
			cout << "\n\t\t ID        : " << cusId << endl;
			cout << "\n\t\t FullName  : " << fullname << endl;
			cout << "\n\t\t Gender    : " << gender << endl;
			cout << "\n\t\t Address   : " << address << endl;
		}	
};
//----------------------------------------------------------------
class Employee: public Person {// Child Class
	 private:
    	int empId;
    	string position;
    	double salary;
    public:
    	void setEmployeeId(int empId)
    	{
    		this->empId = empId;
		}
		void setPosition(string position)
		{
			this->position = position;
		}
		void setSalary(double salary)
		{
			this->salary = salary;
		}
		void show(int n)
		{
			cout << "\nEmployee " << n << "#";
			cout << "\n\t\t ID        : " << empId << endl;
			cout << "\n\t\t FullName  : " << fullname << endl;
			cout << "\n\t\t Gender    : " << gender << endl;
			cout << "\n\t\t Address   : " << address << endl;
			cout << "\n\t\t Position  : " << position << endl;
			cout << "\n\t\t Salary    : " << salary << endl;
		}
};
//----------------------------------------------------------------


int main()
{
	// => Object of Customer 
	Customer A1;
	//set
	A1.setNameAddressGender("Keo Seyha", "Koh Kong", "Male");
	A1.setCustomerId(1000111);
	//output:
	A1.show(1);
	
	// => Object of Employee
	Employee B1;
	//set
	B1.setEmployeeId(1241);
	B1.setFullName("Mean Nita");
	B1.setGender("Female");
	B1.setAddress("Phnom Penh");
	B1.setPosition("Designer");
	B1.setSalary(1350.00);
	
	// output:
	B1.show(1);
	
	
	getch();
	return 0;
	
	
	
}
