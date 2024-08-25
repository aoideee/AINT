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

// Function to delete a node
void deleteNode(Node* node) {
    Node* temp;
    temp=node->next;
    node->next=temp->next;
    delete temp;
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

    cout<<"Initial list: ";
    printList(head);
    cout<<endl;

    deleteNode(first);
    cout<<"List after deleting first node: ";
    printList(head);

    return 0;
}
