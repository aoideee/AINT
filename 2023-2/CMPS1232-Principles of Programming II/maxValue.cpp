/******************************************************************************

Write a function named maxValue that accepts an array of integers and its length
as parameters and returns the maximum value in the array. For example, if an array
named a passed stores {17, 7, -1, 26, 3, 9}, the call of maxValue(a, 6) should return
26. You may assume that the array contains at least one element. Your function should
not modify the elements of the array.

*******************************************************************************/
#include <iostream>
using namespace std;

int maxValue(int [], int);

int main()
{
    int arraysize=6;
    int array[arraysize]={17, 7, -1, 26, 3, 9};
    
    int max=maxValue(array, arraysize);
    
    cout<<"The max value in tha array is "<<max<<".";
    

    return 0;
}

int maxValue(int ar[], int arsz)
{
    int max=ar[0];
    
    for(int i=0; i<arsz; i++)
    {
        if(ar[i]>max)
        {
            max=ar[i];
        }
    }
    
    return max;
}
