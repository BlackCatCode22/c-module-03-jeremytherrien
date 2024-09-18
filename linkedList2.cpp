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
	Node* next; 
};

// Create a function that will print the linked list 
void printList(Node* pHead); 

int main()
{
	Node* head = new Node(); 
	Node* second = new Node(); 
	Node* last = new Node(); 

	// fill the data structure link the pointers
	head->data = "z";
	head->next = second; 
	second->data = "b";
	second->next = last; 
	last->data = "c";
	last->next = nullptr; 

	printList(head); 
}

void printList(Node* pHead)
{
	while (pHead != nullptr)
	{
		cout << pHead->data << endl; 
		pHead = pHead->next; 
	}
}