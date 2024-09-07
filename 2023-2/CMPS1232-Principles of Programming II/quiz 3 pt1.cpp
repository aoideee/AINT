#include <iostream>
using namespace std;

const int arraysize=50;

void sumRows(int[][arraysize]);

int main()
{
    int temp[arraysize][arraysize]={
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
    
    sumRows(temp);
    
    return 0;
}

void sumRows(int ar[][arraysize])
{
    int counter=1; 
    
    for(int r=0; r<arraysize; r++)
    {
        int sum=0;
        
        for(int c=0; c<arraysize-1; c++)
        {
            sum+=ar[r][c];
        }
        
        ar[r][49]=sum;
        
        cout<<ar[r][49]<<" is the sum of all values in the "<<counter<<" row from column "<<counter<<" to the one before the last column"<<endl;
        counter++;
    }
}
