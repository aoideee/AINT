/******************************************************************************

Practice Problem: Inserting a Node at the Beginning of a Linked List

Problem Statement:
Write a C++ program to insert a new node at the beginning of an existing
linked list. The linked list should initially contain three nodes with values
10, 20, and 30. After inserting a new node with the value 5 at the beginning,
the linked list should be traversed, and the values of all nodes should be printed.

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
    
    Node* head=nullptr;
    
    Node* first=new Node();
    first->data=10;
    first->next=nullptr;
    head=first;
    
    Node* second=new Node();
    second->data=20;
    second->next=nullptr;
    first->next=second;
    
    Node* third=new Node();
    third->data=30;
    third->next=nullptr;
    second->next=third;
    
    Node* fourth=new Node();
    fourth->data=5;
    fourth->next=head; // Link the new node to the previous head
    head=fourth; // Update head to point to the new node
    
    Node* current=head;
    
    while(current!=nullptr)
    {
        cout<<"Node data: "<<current->data<<endl;
        current=current->next;
    }

    return 0;
}

/*Step-by-Step Explanation
Creating the New Node:

You create a new node (let's call it fourth) with the value 5.
fourth initially doesn’t point to anything, so you need to set its next pointer.
Setting fourth->next = head:

At this point, head is still pointing to the original first node (which has the value 10).
By writing fourth->next = head;, you’re saying, "I want this new node (with value 5) to point to the node that was originally the first node."
So now, the fourth node (with value 5) points to the node with value 10.
Updating head to fourth:

After linking fourth to the original first node, you update the head pointer to point to fourth.
This means that head now points to the node with value 5, making it the first node in the list.
Why This Works
The Linked List Order:

The linked list is always "read" by following the next pointers starting from head.
After you set head = fourth;, when you start from head, you’ll find that head points to fourth, and fourth->next points to the old first node
(which is the node with value 10).
This makes the new order of nodes: 5 -> 10 -> 20 -> 30.
No Infinite Loop:

You’re not creating an infinite loop because fourth->next is pointing to the old first node, not to itself. The linked list is a
straight chain: 5 -> 10 -> 20 -> 30 -> nullptr. The nullptr at the end signals that there are no more nodes.*/
