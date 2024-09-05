#include <iostream>
using namespace std;

class Node {
    public:
        int value;
        Node* next;
        Node* prev;
};

//You are tasked to write TWO functions to accomplish the following tasks on a linked list:
//NOTE: YOU MUST USE CLASS TEMPLATES
//1.) Check if a linked list is a palindrome. A palindrome is a word, phrase, number, or other sequence of characters that reads the same forward and backward.
void isPalindrome(Node* &head, Node* temp) {
    while(head->next!=nullptr) {
        head=head->next;
    }

    while(head->prev!=nullptr && temp->next!=nullptr) {
        if(head->value!=temp->value) {
            cout<<"Not a palindrome"<<endl;
            return;
        }
        else {
            cout<<"Is a palindrome"<<endl;
            return;
        }
    }
}

//2.) Determine if the linked list has a cycle in it. A cycle is when a node in the linked list points to a previously visited node.
void hasCycle(Node* &head) {
    Node* slow=head;
    Node* fast=head;

    while(fast!=nullptr && fast->next!=nullptr) {
        slow=slow->next;
        fast=fast->next->next;

        if(slow==fast) {
            cout<<"Has a cycle"<<endl;
            return;
        }
    }
    cout<<"Does not have a cycle"<<endl;
}

int main(){
    Node* head=nullptr;

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
    third->value=1;
    second->next=third;
    third->prev=second;
    third->next=nullptr;

    Node* temporary=head;

    cout<<"This program checks if a linked list is a palindrome or not:"<<endl;
    isPalindrome(head, temporary);
    cout<<endl<<endl;

    cout<<"This program checks if a linked list has a cycle or not:"<<endl;
    hasCycle(head);

    return 0;
}