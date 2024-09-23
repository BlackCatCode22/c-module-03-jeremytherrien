// myThirdLinkedList.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <cstring>

using namespace std; 

struct Node
{
	string dataField; 
	Node* pNext; 

};

void printList(Node* pHead); 

int main()
{
	// Create character array
	char myChar[256];
	
	// Prompt user and get input to fill character array
	cout << "Enter a sentence: "; 
	cin.getline(myChar, 256);

	// Create the new nodes
	Node* pHead = new Node(); 
	Node* pCurrent = new Node(); 

	// Get the length of the string for the "for" loop
	int sLength = strlen(myChar); 

	// Create for loop from 0 to the length of the string then increment
	for (int i = 0; i < sLength; i++)
	{
		// Fill datafield with the characters of the array
		pHead->dataField = myChar[i]; 
		// Create the list by linking the pointers 
		pHead->pNext = pCurrent; 
		// Fill the second datafield with the characters of the array
		pCurrent->dataField = myChar[i]; 
		// Set the end as null
		pCurrent->pNext = nullptr; 
		// Reposition the head
		pHead = pCurrent; 
		
		// Print the list to the screen
		printList(pHead); 
	}

	return 0; 
}
void printList(Node* pHead)
{
	while (pHead != nullptr)
	{
		cout << pHead->dataField; 
		pHead = pHead->pNext; 
	}
}
