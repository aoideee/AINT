#include <iostream>
using namespace std;

//Double Linked list
class Node {
public:
    int value;
    Node* next;
    Node* prev;
};

//Function that prints the linked list
void printList(Node* head) {
    Node* current=head;
    while(current!=nullptr) {
        cout<<current->value<<" ";
        current=current->next;
    }
}

//Function that prints the linked list backward
void printListBackward(Node* current) {
    while(current!=nullptr) {
        cout<<current->value<<" ";
        current=current->prev;
    }
}

//Function that adds a new node at the beginning
void addBeginning(Node* &head) {
    Node* temp=head;
    Node* fifth= new Node();
    fifth->value=0;
    fifth->next=temp;
    fifth->prev=nullptr;
    temp->prev=fifth;
    head=fifth;
}

//Function that adds a new node after the second node
void afterNode2(Node* &head) {
    Node* temp=head;
    int current=0;

    while(current<1) {
        temp=temp->next;
        current++;
    }

    Node* sixth = new Node();
    sixth->value=6;
    sixth->next=temp->next;
    sixth->prev=temp;
    temp->next=sixth;
}

//Function that adds a new node at the end
void atEnd(Node* &head) {
    Node* temp=head;

    while(temp->next!=nullptr) {
        temp=temp->next;
    }

    Node* seventh = new Node();
    seventh->value=7;
    temp->next=seventh;
    seventh->prev=temp;
    seventh->next=nullptr;
}

//Function that deletes the head node
void deleteHead(Node* &head) {
    Node* temp=head;
    head=temp->next;
    head->prev=nullptr;

    delete temp;
}

//Function that deletes the node after the second node
void deleteAfterNode2(Node* &head) {
    Node* temp=head;
    int counter=0;

    while(counter<1) {
        temp=temp->next;
        counter++;
    }

    Node* deleteNode=temp->next;
    Node* temp2=temp->next->next;
    temp->next=temp2;
    temp2->prev=temp;


    delete deleteNode;
}

//Function that deletes the last node
void deleteEnd(Node* &head) {
    Node* temp=head;

    while(temp->next->next!=nullptr) {
        temp=temp->next;
    }

    Node* deleteNode=temp->next;
    temp->next=nullptr;

    delete deleteNode;
}

int main() {
    Node* head = nullptr;

    Node* first = new Node();
    first->value=1;
    head=first;
    head->prev=nullptr;
    first->prev=nullptr;
    first->next=nullptr;

    Node* second = new Node();
    second->value=2;
    first->next=second;
    second->prev=first;
    second->next=nullptr;

    Node* third = new Node();
    third->value=3;
    second->next=third;
    third->prev=second;
    third->next=nullptr;

    Node* fourth = new Node();
    fourth->value=4;
    third->next=fourth;
    fourth->prev=third;
    fourth->next=nullptr;

    //Printing the linked list
    cout<<"********************************************************************"<<endl<<endl;
    cout<<"Linked list going forward: ";
    printList(head);
    cout<<endl<<endl;

    //Printing the linked list backward
    cout<<"********************************************************************"<<endl<<endl;
    cout<<"Linked list going backward: ";
    printListBackward(fourth);
    cout<<endl<<endl;

    //Inserting a new node at the beginning
    cout<<"********************************************************************"<<endl<<endl;
    addBeginning(head);
    cout<<"Linked list after inserting node at the beginning: ";
    printList(head);
    cout<<endl<<endl;

    //Inserting a new node after the second node
    cout<<"********************************************************************"<<endl<<endl;
    afterNode2(head);
    cout<<"Linked list after inserting node after the second node: ";
    printList(head);
    cout<<endl<<endl;

    //Inserting a new node at the end
    cout<<"********************************************************************"<<endl<<endl;
    atEnd(head);
    cout<<"Linked list after inserting node at the end: ";
    printList(head);
    cout<<endl<<endl;

    //Deleting the head node
    cout<<"********************************************************************"<<endl<<endl;
    deleteHead(head);
    cout<<"Linked list after deleting the head node: ";
    printList(head);
    cout<<endl<<endl;

    //Deleting the node after the second node
    cout<<"********************************************************************"<<endl<<endl;
    deleteAfterNode2(head);
    cout<<"Linked list after deleting the node after the second node: ";
    printList(head);
    cout<<endl<<endl;

    //Deleting the last node
    cout<<"********************************************************************"<<endl<<endl;
    deleteEnd(head);
    cout<<"Linked list after deleting the last node: ";
    printList(head);
    cout<<endl<<endl;
    cout<<"********************************************************************"<<endl;

    return 0;
}