#include <iostream>
using namespace std;

//Double Linked list
class Node {
public:
    int value;
    Node* next;
    Node* prev;
};

int main() {
    Node* head = nullptr;

    Node* first = new Node();
    first->value=1;
    head=first;
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

    Node* current=head;

    cout<<"Linked list going forward: ";
    while(current!=nullptr) {
        cout<<current->value<<" ";
        current=current->next;
    }
    cout<<endl;

    current=fourth;
    
    cout<<"Linked list going backward: ";
    while(current!=nullptr) {
        cout<<current->value<<" ";
        current=current->prev;
    }

    return 0;
}