// secondLinkedList.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std; 

class Node
{
public: 
    string dataField; 
    Node* pNext; 
};

void printList(Node* pNode); 

int main()
{
    cout << "This is my second linked list program!" << endl;

    // Create the pointers to the 
    Node* pHead = new Node(); 
    Node* pSecond = new Node(); 
    Node* pThird = new Node(); 

    // Fill the datafields 
    pHead->dataField = "a"; 
    pSecond->dataField = "b"; 
    pThird->dataField = "c"; 

    // Create list by linking the pointers
    pHead->pNext = pSecond; 
    pSecond->pNext = pThird; 
    pThird->pNext = nullptr; 

    printList(pHead); 







    cout << "This is my second linked list program!" << endl; 
    printList(pHead); 

    // Insert nodes to the linked list
    // 1. Create a new node
    Node* pCurrent = new Node; 
    // 2. Fill the new node's data field
    pCurrent->dataField = "h";
    // 3. Attatch new node to the head of the list
    pCurrent->pNext = pHead; 
    // 4. Reposition the head of the list (the pointer - that is pointing to the head of the list)
    pHead = pCurrent; 

    for (int i = 0; i < 10; i++)
    {

    }







}
void printList(Node* pNode)
{
    while (pNode != nullptr)
    {
        cout << pNode->dataField << endl; 
        pNode = pNode->pNext; 
    }
}

