#include <iostream>
using namespace std;

class Node {
public:
    int value;
    Node* next;
};

// Function to print the linked list
void printList(Node* head) {
    Node* current=head;
    while(current!=nullptr) {
        cout<<current->value<<" ";
        current=current->next;
    }
}

//Function to add a node at the front of the list
void addBeginning(Node*& head) {
    Node* newNode=new Node();
    newNode->value=7;
    newNode->next=head;
    head=newNode;
}

//Function to add a node after Node 2
void addAfter(Node* head) {
    Node* temp=head;
    int current=0;

    while(current<2) {
        temp=temp->next;
        current++;
    }

    Node* NewNode1=new Node();
    NewNode1->value=9;
    NewNode1->next=temp->next;
    temp->next=NewNode1;
}

//Function to add a node at the end of the list
void addEnd(Node*& head) {
    Node* NewNode2=new Node();
    NewNode2->value=8;
    NewNode2->next=nullptr;

    if(head==nullptr) {
        head=NewNode2;
    } else {
        Node* current=head;
        while(current->next!=nullptr) {
            current=current->next;
        }
        current->next=NewNode2;
    }
}

//Delete the head node
void deleteHead(Node*& head) {
    Node* temp;
    temp=head;
    head=head->next;
    delete temp;
}

void deleteAfter(Node* head) {
    Node* temp=head;
    int current=0;

    while(current<1) {
        temp=temp->next;
        current++;
    }

    Node* nodeToDelete=temp->next;
    temp->next=nodeToDelete->next;
    delete nodeToDelete;
}

//Delete the last node
void deleteLastNode(Node* head) {
    if (head == nullptr || head->next == nullptr) {
        return; // Check if the list is empty or has only one node
    }

    Node* temp = head;
    while (temp->next->next != nullptr) {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = nullptr;
}

int main() {
    Node* head = nullptr;

    Node* first=new Node();
    first->value=1;
    head=first;
    first->next=nullptr;

    Node* second=new Node();
    second->value=2;
    first->next=second;
    second->next=nullptr;

    Node* third=new Node();
    third->value=3;
    second->next=third;
    third->next=nullptr;

    Node* fourth=new Node();
    fourth->value=4;
    third->next=fourth;
    fourth->next=nullptr;

    Node* fifth=new Node();
    fifth->value=5;
    fourth->next=fifth;
    fifth->next=nullptr;

    Node* sixth=new Node();
    sixth->value=6;
    fifth->next=sixth;
    sixth->next=nullptr;

    cout<<"Initial list: ";
    printList(head);
    cout<<endl<<endl;

    addBeginning(head);
    cout<<"List after adding a node at the beginning: ";
    printList(head);
    cout<<endl;

    addAfter(head);
    cout<<"List after adding a node after Node 2: ";
    printList(head);
    cout<<endl;

    addEnd(head);
    cout<<"List after adding a node at the end: ";
    printList(head);
    cout<<endl<<endl;

    deleteHead(head);
    cout<<"List after deleting head node: ";
    printList(head);
    cout<<endl;

    deleteAfter(head);
    cout<<"List after deleting a node after Node 2: ";
    printList(head);
    cout<<endl;

    deleteLastNode(head);
    cout<<"List after deleting the last node: ";
    printList(head);

    return 0;
}