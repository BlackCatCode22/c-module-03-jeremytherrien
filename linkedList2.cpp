// linkedList2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// Jeremy Therrien 9/18/24

#include <iostream>

using namespace std; 

// Create the Node structure
// The data that will be put into the structure will be "data"
// which is a string 
// Node* next is a pointer to use to point to the next node
struct Node
{
	string data; 
	Node* pNext; 
};

// Create a function that will print the linked list 
void printList(Node* pHead); 

int main()
{
	Node* pHead = new Node(); 
	Node* pSecond = new Node(); 
	Node* pThird = new Node(); 

	// fill the data structure and link the pointers
	pHead->data = "z";
	pHead->pNext = pSecond; 
	pSecond->data = "b";
	pSecond->pNext = pThird; 
	pThird->data = "c";
	pThird->pNext = nullptr; 

	// Call the printList function
	printList(pHead); 


	// Add a few nodes to my linked list 
	Node* pCurrent = new Node(); 
	pCurrent->data = "d";
	pCurrent->pNext = pHead; 

	// reposition head of the list 
	pHead = pCurrent; 

	// Test by calling printList
	cout << "Printing the new list" << endl; 
	printList(pHead); 




}

void printList(Node* pHead)
{
	while (pHead != nullptr)
	{
		cout << pHead->data << endl;
		pHead = pHead->pNext; 
	}
}