/******************************************************************************

Array1 has 10 numbers.  You are tasked to copy the numbers from Array1 into another array Array2 which also can hold 10 numbers.
The numbers MUST be copied in reverse. Write a program to achieve this task.

Example

Array 1 - 1,2,3,4,5,6,7,8,9,10

Array2 (When all numbers from Array1 is copied into Array2 will have)

Array 2 - 10,9,8,7,6,5,4,3,2,1

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int Array1[10]={0};
    int Array2[10]={0};
    int counter=0;
    int reverse=9;
    
    cout<<"This program needs you to enter 10 values. Enter your first number: ";
    cin>>Array1[counter];
    Array2[reverse]=Array1[counter];
    counter++;
    reverse--;
    
    while(counter<=9)
    {
        cout<<"Enter value: ";
        cin>>Array1[counter];
        Array2[reverse]=Array1[counter];
        counter++;
        reverse--;
    }
    
    cout<<endl;
    cout<<"---------------------"<<endl;
    cout<<"\nArray1: ";
    
    for(int i=0; i<10; i++)
    {
        cout<<Array1[i]<<" ";
    }
    
    cout<<endl; 
    
    cout<<"Array2: ";
    
    for(int i=0; i<10; i++)
    {
        cout<<Array2[i]<<" ";
    }
  
    return 0;
}
