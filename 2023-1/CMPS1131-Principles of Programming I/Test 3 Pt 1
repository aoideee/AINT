#include<iostream>
using namespace std;

int findSmallest(int);

int main(){
    int numberOfInputs=0;
    
    cout<<"Enter number of integers you want to input: "; 
    cin>>numberOfInputs;
    
    int results=findSmallest(numberOfInputs);
    
    cout<<"Smallest number entered is "<<results<<".";
    
return 0;
}

int findSmallest(int x)
{
    int counter=1;
    int number;
    int store;
    
    while(counter<=x)
    {
        cout<<"Enter a number: "; 
        cin>>number;
        
        while(store>number)
        {
            store=number;
        }
        
        ++counter;
    }
    
    return store;
}

//Function implementation - This function will take an integer as a parameter which represents the number of times the person will be prompted to enter integers
//The function will return the smallest number of all numbers entered
