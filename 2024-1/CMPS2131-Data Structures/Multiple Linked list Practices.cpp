#include <iostream>
using namespace std;

// Creating a node
class Node {
public:
    int value;
    Node* next;
};

// Function to print the linked list
void printList(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        cout << current->value << " ";
        current = current->next;
    }
    cout << endl;
}

// Function to insert a new node at the beginning of the list
void insertAtBeginning(Node*& head, int newValue) {
    Node* newNode = new Node();
    newNode->value = newValue;
    newNode->next = head; // Point new node's next to the current head
    head = newNode;       // Update head to point to the new node
}



void printOddNumber (Node* head)
{
    Node* current=head;

    while(current!=nullptr)
    {
        if(current->value % 2 != 0)
        {
         cout<<current->value<<" ";

        }
        current=current->next;
    }

}

void InsertNodeAtEnd(Node* end, int newinput)
    {
        Node* four =new Node();
        four->value=newinput;
        four->next=nullptr;
        end->next=four;
    }

//Insert a node after the value with three
void insertafterthree(Node* head, int input)
{
    Node* current = head;

    while(current->value!=3)
    {
        current=current->next;
    }

    Node* five=new Node();
    five->value=input;
    five->next=current->next;
    current->next=five;
}

//double the value in each node

void doublevalues(Node* head) {
    Node* current = head;

    while(current!=nullptr) {
        current->value=current->value*2;
        current=current->next;
    }
}

int main() {
    Node* head = nullptr;
    Node* one = nullptr;
    Node* two = nullptr;
    Node* three = nullptr;

    // Allocate 3 nodes in the heap
    one = new Node();
    two = new Node();
    three = new Node();

    // Assign values
    one->value = 1;
    two->value = 2;
    three->value = 3;

    // Connect nodes
    one->next = two;
    two->next = three;
    three->next = nullptr;

    // Set the head of the list
    head = one;

    // Print the initial list
    cout << "Original list: ";
    printList(head);

    // Insert a new node at the beginning
    insertAtBeginning(head, 0);

    // Print the updated list
    cout << "List after insertion at the beginning: ";
    printList(head);

    //Print the odd numbers
    cout<<"The list of odd numbers: ";
    printOddNumber(head);
    cout<<endl;

   InsertNodeAtEnd(three, 4);

   cout<<"The list after insertion at end: ";
   printList(head);

   //Insert a node after the one with 3
   insertafterthree(head, 5);

   cout<<"The list after insertion after the node with 3: ";
   printList(head);

    //Insert node after the one with the value 3

    insertafterthree(head, 6);

    cout<<"New list after a node is inserted after the one with 3: ";
    printList(head);

    //Double values in the nodes

    doublevalues(head);

    cout<<"New list after doubling their values: ";
    printList(head);

    // Clean up allocated memory
    delete one;
    delete two;
    delete three;

    return 0;
}
