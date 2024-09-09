/******************************************************************************

Write a function named indexOf that returns the index of a particular value in
an array of integers. The function is passed the array, its length, and the target
value as parameters, and it should return the index of the first occurrence of the
target value in the array. If the value is not in the array, return -1. For example,
if an array called list stores the following values:

int list[] = {42, 7, -9, 14, 8, 39, 42, 8, 19, 0};
Then the call indexOf(list, 10, 8) should return 4 because the index of the first
occurrence of value 8 in the array is at index 4. The call indexOf(list, 10, 2) should
return -1 because value 2 is not in the array.

*******************************************************************************/
#include <iostream>
using namespace std;

int indexOf(int [], int, int);

int main()
{
    int arraysize=6;
    int array[arraysize]={42, 87, 25, 63, 91, 77};
    int num=0;
    
    cout<<"Type in a random number to get the it's index (if it isn't, the code will return -1): ";
    cin>>num;
    
    int index=indexOf(array, arraysize, num);
    
    cout<<index;

    return 0;
}

int indexOf(int ar[], int arsz, int target)
{
    int index=-1;
    
    for(int i=0; i<arsz; i++)
    {
        if(ar[i]==target)
        {
            index=i;
            break;
        }
    }
    
    return index;
}
