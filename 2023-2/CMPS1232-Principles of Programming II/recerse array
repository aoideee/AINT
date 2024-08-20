/******************************************************************************

*Reverse an Array*: You are given an array of integers. Write a function named
reverseArray that takes this array as input and returns the array in reverse order.

*******************************************************************************/
#include <iostream>

using namespace std;

void reverse_array(int array[], int);

int main()
{
    int index=0;
    
    cout<<"This program takes the set of numbers given and puts it in reverse.\n How many numbers would you like in your box: ";
    cin>>index;

    int array[index];

    reverse_array(array, index);

    return 0;
}

void reverse_array(int array[], int value)
{
    int i=0;
    for( ; i<value; i++)
    {
        cout<<"Enter a number: ";
        cin>>array[i];
    }
    
    cout<<"The reverse of the numbers entered are: ";
    for(i = value-1; i >= 0; i--)
    {
        cout<<array[i]<<" ";
    }
}
