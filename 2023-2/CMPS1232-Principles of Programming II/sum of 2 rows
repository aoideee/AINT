#include <iostream>

using namespace std;

int process(int [], int [], int);

int main()
{
    int arraysize=5;
    
    int array1[arraysize]={1, 2, 300, 42, 50};
    int array2[arraysize]={6, 7, 8, 9, 10};
    
    int p=process(array1, array2, arraysize);
    
    cout<<"There is/are "<<p<<" number(s) greater that 50 in the array.";

    return 0;
}

int process(int a1[], int a2[], int arsz)
{
    int row=3;
    int counter=0;
    
    int array[row][arsz]={{0}};
    
    for(int c=0; c<arsz; c++)
    {
        array[0][c]=a1[c];
    }
    
    for(int c=0; c<arsz; c++)
    {
        array[1][c]=a2[c];
    }
    
    for(int c=0; c<arsz; c++)
    {
        int sum=0;
        
        for(int r=0; r<row-1; r++)
        {
            sum+=array[r][c];
        }
        
        array[2][c]=sum;
        
        if(sum>50)
        {
            counter++;
        }
    }
    
    return counter;
}
