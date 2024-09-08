#include <iostream>
using namespace std;

class Node {
public:
    int value;
    Node* next;
};

//Prints list
void printList(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        cout << current->value << " ";
        current = current->next;
    }
    cout << endl;
}

//Deletes odd numbers in a linked list
void deleteOdd(Node* &head)
{
    //If the head node is odd
    while (head != nullptr && head->value % 2 == 1) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    //If the head node is even
    Node* current = head;
    while (current != nullptr && current->next != nullptr) {
        if (current->next->value % 2 == 1) {
            Node* temp = current->next;
            current->next = temp->next;
            delete temp;
        } else {
            current = current->next;
        }
    }
}

//Reverses the linked list
void Reverse(Node* &head)
{
    Node* prev = nullptr;
    Node* current = head;
    Node* next = nullptr;

    while (current != nullptr) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
}

int main(){
    Node* head=nullptr;

    Node* first = new Node();
    first->value=1;
    head=first;
    first->next=nullptr;

    Node* second = new Node();
    second->value=2;
    first->next=second;
    second->next=nullptr;

    Node* third = new Node();
    third->value=3;
    second->next=third;
    third->next=nullptr;

    Node* fourth = new Node();
    fourth->value=4;
    third->next=fourth;
    fourth->next=nullptr;

    cout<<"The original list: ";
    printList(head);
    cout<<endl;

    deleteOdd(head);
    cout<<"The list after deleting the odd numbers: ";
    printList(head);
    cout<<endl;

    Reverse(head);
    cout<<"The list in reverse: ";
    printList(head);


    return 0;
}