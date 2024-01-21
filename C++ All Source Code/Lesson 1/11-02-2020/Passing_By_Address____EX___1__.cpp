// Passing By Reference(Address)
#include<iostream>
#include<conio.h>
using namespace std;
//------------------------------------------------
int sumArrayInt(int arr[], int N)/* Pointer Type Parameter: int arr[] */
{
	int sum = 0;
	for(int i = 0; i<N; i++) sum += arr[i];
	
	return sum;
}
//------------------------------------------------
void displayArrayInt(int* arr, int N)/* Pointer Type Parameter: int* arr */
{
	for(int i = 0; i<N; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
//------------------------------------------------

int main()
{
	int num[5] = {10, 45, 23, 11, 65};
	
    //Ex1.
    displayArrayInt(&num[0], 4);// Pass by Address: &num[0]
	displayArrayInt(&num[0], 5);
	
	 //Ex2.
    displayArrayInt(num, 4);// Pass by Address: num
	displayArrayInt(num, 5);
	
	
	// Ex3.
    cout << "\nSum first 3 Elements = " << sumArrayInt(num, 3) << endl;
    cout << "\nSum All Elements = " << sumArrayInt(num, 5) << endl;
	
	getch();
	return 0;
}
