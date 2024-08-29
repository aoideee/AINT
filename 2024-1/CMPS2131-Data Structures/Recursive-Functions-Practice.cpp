#include <iostream>
using namespace std;

class Node {
    public:
        int value;
        Node* next;
};

class Word {
    public:
        string value;
        Word* next;
};

//Print the list of numbers
void printList(Node* head)
{
    Node* current = head;
    while (current != nullptr)
    {
        cout << current->value << " ";
        current = current->next;
    }
}

//Print the list in the opposite direction
void printOpposite(Node* head)
{
    if (head == nullptr)
    {
        return;
    }
    printOpposite(head->next);
    cout << head->value << " ";
}

//Print list of strings
void printStrings(Word* head)
{
    Word* current = head;
    while (current != nullptr)
    {
        cout << current->value << " ";
        current = current->next;
    }
}

/*Reverse a String
Write a function that takes a string as input and prints the string in reverse order using recursion.*/
void reverseString(Word* head) {
    if(head==nullptr) {
        return;
    }

    reverseString(head->next);
    cout<<head->value<<" ";
}

/*Sum of Elements in a linked list
Write a recursive function that computes the sum of elements in a linked list.*/
void sumElements(Node* head, int &sum) {
    if(head==nullptr) {
        return;
    }

    sum=sum+head->value;
    sumElements(head->next, sum);
}

int main() {

    Node* head = nullptr;

    Node* first = new Node();
    first->value = 1;
    head=first;
    first->next=nullptr;

    Node* second = new Node();
    second->value = 2;
    first->next=second;
    second->next=nullptr;

    Node* third = new Node();
    third->value = 3;
    second->next=third;
    third->next=nullptr;

/*****************************/

    cout<<"Original List: ";
    printList(head);
    cout<<endl;

    cout<<"Opposite List: ";
    printOpposite(head);
    cout<<endl;

    int number=0;
    cout<<"Sum of Elements: ";
    sumElements(head, number);
    cout<<number;
    cout<<endl<<endl;

    cout<<"*****************************"<<endl<<endl;

/*****************************/

    Word* front = nullptr;

    Word* one = new Word();
    one->value = "Hello";
    front=one;
    one->next=nullptr;

    Word* two = new Word();
    two->value = "World";
    one->next=two;
    two->next=nullptr;

    Word* three = new Word();
    three->value = "!";
    two->next=three;
    three->next=nullptr;

/*****************************/

    cout<<"The original string is: ";
    printStrings(front);
    cout<<endl;

    cout<<"The new string is: ";
    reverseString(front);

    return 0;
}
