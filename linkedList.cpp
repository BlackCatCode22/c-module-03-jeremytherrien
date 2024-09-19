// linkedList.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

struct Node
{
	int data; 
	Node* pNext; 
};

void insertEnd(Node** head, int newData); 
void displayList(Node* node); 
int main()
{
	Node* head = nullptr; 
	insertEnd(&head, 1); 
	insertEnd(&head, 2);
	insertEnd(&head, 3);
	displayList(head); 

	return 0; 
}

void insertEnd(Node** head, int newData)
{
	Node* newNode = new Node(); 
	newNode->data = newData; 
	newNode->pNext = nullptr; 

	if (*head == nullptr)
	{
		*head = newNode; 
	}
	else
	{
		Node* last = *head; 

		while (last->pNext != nullptr)
		{
			last = last->pNext; 
		}
		last->pNext = newNode; 
	}
}

void displayList(Node* node)
{
	while (node != nullptr)
	{
		cout << node->data << " ";
		node = node->pNext;
	}
	cout << endl; 
}