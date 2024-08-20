/******************************************************************************

Write a function named findRange that accepts an array of integers and its length 
as parameters and returns the range of values contained in the array, which is equal
to one more than the difference between its largest and smallest element. For example,
if the largest element is 17 and the smallest is 6, the range is 12. If the largest and
smallest values are the same, the range is 1.

Constraints: You may assume that the array contains at least one element (that its
length is at least 1). You should not modify the contents of the array.

*******************************************************************************/
#include <iostream>

using namespace std;

int findRange(int[], int);

int main()
{
    int arraysize=6;
    int array[arraysize]={42, 87, 25, 63, 91, 77};
    
    int range=findRange(array, arraysize);
    
    cout<<"The range of the array with the incrementation of 1 is "<<range<<".";

    return 0;
}

int findRange(int ar[], int arsz)
{
    int max=ar[0];
    int min=ar[0];
    int calc=0;
    
    for(int i=0; i<arsz; i++)
    {
        if(ar[i]>max)
        {
            max=ar[i];
        }
        
        if(ar[i]<min)
        {
            min=ar[i];
        }
    }
    
    calc=(max-min)+1;
    
    return calc;
}
