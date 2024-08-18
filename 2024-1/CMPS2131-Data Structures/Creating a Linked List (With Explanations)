/******************************************************************************

Linked Lists Explanation: 

Alright, let's imagine you're building a train with a bunch of train cars. Each car in this train can carry one toy. But instead of all the cars being stuck together in a line, each car knows where the next car is.

Here's how it works:

Train Car (Node): Each train car (we call it a "node") carries one toy (a piece of data, like a number or word) and has a special pointer (like a finger pointing) that tells it where the next car is.

The Engine (Head): The first car (node) is connected to the engine, and the engine knows where to find this first car. This first car knows where the second car is, the second knows the third, and so on.

Last Car: The last car doesn’t have a pointer because there's no car after it. We say its pointer is "null," which just means it’s empty.

So, a linked list is like this train: each node knows where the next one is, and you start at the engine to go from car to car.

*******************************************************************************/
#include <iostream>
using namespace std;

/*Step One: Create a Node
-Each train car (node) can be a tiny program called a "struct" that holds the toy (data) and the pointer to the next car.*/
struct Node
{
    int data; //The toy in the car
    Node* next; //The pointer to the next car
};

/*Step Two: Set Up the Train (Linked List)
-We need a pointer to the first car (head). This pointer is how you start the journey from the engine.*/
int main()
{
    Node* head=nullptr;
    
/*Step Three: Add Cars to the Train
-You can create new cars (nodes) and add them to the train one by one.*/
    
    //Create the first car
    Node* first=new Node();
    first->data=1; //Put a toy in the first car
    first->next=nullptr; //This is the only car, so no next ar yet
    head=first; //The engine points to the first car
    
    //Create the second car
    Node* second=new Node();
    second->data=2; //Put a toy in teh second car
    second->next=nullptr; //No next car after this one yet
    first->next=second; //The first car points to the second
    
/*Step Four: Create more cars (if you want)
You keep adding cars by creating more nodes and pointing the last car's pointer to the new car.*/
    
    //Create the third car
    Node* third=new Node();
    third->data=3; // Put a toy in the third car
    third->next=nullptr;
    second->next=third; // The second car points to the third
    
    // Now you have a train with 3 cars: 1 -> 2 -> 3
    
/*Step Five: Compile and Run
You can type this code into a C++ compiler and run it. It won't show you the train, but in the computer's memory, your train is set up, ready to roll!*/
    return 0;
}
