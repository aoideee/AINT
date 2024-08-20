#include <iostream>
using namespace std;

const int row=50;
const int columns=3;

void sum(int[][columns]);

int main()
{
    
    int array[row][columns]={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    
    sum(array);
    
    cout<<array[49][0]<<" "<<array[49][1]<<" "<<array[49][2];
    

    return 0;
}

void sum(int ar[][columns])
{
    
    for(int c=0; c<columns; c++)
    {
       int add=0;
        
       for(int r=0; r<row-1; r++)
       {
           add+=ar[r][c];
       }
       
       ar[row-1][c]=add;
    }
    
}
