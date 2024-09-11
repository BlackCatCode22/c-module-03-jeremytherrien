// pointersArePowerful.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// Jeremy Therrien 09/11/24

#include <iostream>

using namespace std; 

int main()
{
	int x = 0; 
	int* p = &x; 

	cout << "Enter any value: "; 
	cin >> x; 

	cout << "The address stored in p is: " << p << endl; 
	cout << "The value of x using p is: " << *p << endl; 

	cout << "Enter another value: ";
	cin >> *p; 

	cout << "The new value of x is: " << x << endl; 

	int myArray[5] = { 1, 2, 3, 4, 5};
	int* myPtr = myArray; 

	for (int i = 0; i < 5; i++)
	{
		cout << "Address of myArray[" << i << "]" << " is " << (myPtr + i) << endl;
		cout << "Value of myArray[" << i << "]" << " is " << (*myPtr + i) << endl; 
	}
	
	return 0; 
}
