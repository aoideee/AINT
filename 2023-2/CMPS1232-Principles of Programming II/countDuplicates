/******************************************************************************

Write a function named countDuplicates that accepts an array of integers and its
length as parameters and that returns the number of duplicate values in the array.
A duplicate value is a value that also occurs earlier in the array. For example,
if an array named a contains {1, 4, 2, 4, 7, 1, 1, 9, 2, 3, 4, 1}, then the call
of countDuplicates(a, 12) should return 6 because there are three duplicates of
the value 1, one duplicate of the value 2, and two duplicates of the value 4.

Constraints: The array could be empty or could contain only a single element;
in such cases, your function should return 0. Do not modify the contents of the array.

*******************************************************************************/
#include <iostream>

using namespace std;

int countDuplicates(int [], int);

int main()
{
    int arraysize=12;
    int array[arraysize]={1, 4, 2, 4, 7, 1, 1, 9, 2, 3, 4, 1};
    
    int duplicates=countDuplicates(array, arraysize);
    
    cout<<"There are "<<duplicates<<" duplicates in the array.";

    return 0;
}

int countDuplicates(int ar[], int arsz)
{
    int duplicate=0;
    
    for(int i=0; i<arsz; i++)
    {
        for(int j=i+1; j<arsz; j++)
        {
          if(ar[i]==ar[j])
          {
              duplicate++;
              break; 
          }
        }
    }
    
    return duplicate;
}
