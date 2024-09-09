// arraysAreEasy.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// Jeremy Therrien 9/9/24
// An array is a fixed-size, data structure, that must contain the same data types

#include <iostream>

using namespace std; 

int main()
{
	cout << "\n Arrays are easy and fun (up until the third dimension)" << endl;

	// Our first array
	int luckyNums[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }; 

	cout << "\n the value in luckyNums[4] is: " << luckyNums[4] << endl; 

	// To find the size of our array, as in the number of elements
	// we can divide the memory size of our array by the memory size of
	// our array's datatype

	cout << "\n the (memory) zise of our array is: " << sizeof(luckyNums) << endl; 
	cout << "\n the size of an int is: " << sizeof(int) << endl; 

	int numOfElementsInLuckyNums = sizeof(luckyNums) / sizeof(int); 

	cout << "\n the number of elements in luckyNums is: " << numOfElementsInLuckyNums << endl; 

	// Create an int array with 100 elements
	int myIntArrayWith100Elements[100]; 

	// fill the array using a for loop
	for (int i = 0; i < 100; i++)
	{
		myIntArrayWith100Elements[i] = rand() % 100; 
	}

	// display all elements of the array with a for loop
	for (int i = 0; i < 100; i++)
	{
		cout << "myIntArrayWith100Elements[" << i << "] is " << myIntArrayWith100Elements[i] << endl; 
	}

	// create a 2d array of 3 rows and 4 columns
	int my2dArray[3][4]; 

	// fill the array witha  nested for loop
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			my2dArray[i][j] = rand() % 100; 
		}
	}

	// Output our 2d array
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << "my2dArray[" << i << "][" << j << "] is " << my2dArray[i][j] << endl; 
		}
	}
	
	// Create a 3d int array 
	int my3dArray[5][3][4]; 

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			for (int k = 0; k < 4; k++)
			{
				my3dArray[i][j][k] = rand() % 100;
			}
		}
	}

	// Output our 3d array
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			for (int k = 0; k < 4; k++)
			{
				cout << "my3dArray[" << i << "][" << j << "][" << k << "] is " << my3dArray[i][j][k] << endl; 
			}
		}
	}
	return 0; 
}


