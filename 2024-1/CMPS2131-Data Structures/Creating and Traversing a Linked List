/******************************************************************************

Practice Problem: Creating and Traversing a Linked List

Problem Statement:
Write a C++ program to create a simple linked list of three nodes.
Each node should store an integer value. After creating the linked list,
your program should traverse the list and print out the values stored in each node.

*******************************************************************************/
#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

int main()
{
    Node* head=nullptr; //The engine
    
    Node* first=new Node();
    first->data=10;
    first->next=nullptr;
    head=first; //The enigine set to point at the first car
    
    Node* second=new Node();
    second->data=20;
    second->next=nullptr;
    first->next=second; //The first car set to point at the second car
    
    Node* third=new Node();
    third->data=30;
    third->next=nullptr;
    second->next=third; //The second car set to point at the third car
    
    Node* fourth=new Node();
    fourth->data=40;
    fourth->next=nullptr; //Th fourth car points at nothing since ist the last car
    third->next=fourth; //The third car set to point at the foruth car
    
    Node* current=head; //Created a new object called "current" to hold the value "head" which is pointed at the first car
    
    while(current!=nullptr) //while the car is not null/empty
    {
        cout<<"Node Data: "<<current->data<<endl; //pulls the data from the current car
        current=current->next; //moves to the next car
    }

    return 0;
}
