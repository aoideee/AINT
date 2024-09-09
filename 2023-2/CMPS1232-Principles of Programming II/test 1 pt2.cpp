#include <iostream>
using namespace std;

const int arraysize=3;
int array[arraysize]={0};

int findMaximum(int [][arraysize], int);

int main()
{
    int max[arraysize][arraysize]={
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    

    int maximum=findMaximum(max, arraysize);
    
    for(int i=0; i<arraysize; i++)
    {
        cout<<"The sum of row "<<i<<" is "<<array[i]<<endl;
    }
    
    cout<<"The row with the greatest sum is row "<<maximum<<"."<<endl;
    
    
    return 0;
}

int findMaximum(int ar[][arraysize], int arsz)
{
    for(int row=0; row<arsz; row++)
    {
        for(int col=0; col<arsz; col++)
        {
            array[row]+=ar[row][col];
        }
    }
    
    int max=array[0];
    
    for(int i=0; i<arsz; i++)
    {
        if(max<array[i])
        {
            max=array[i];
        }
    }
    
    int j;
    
    for(j=0; j<arsz; j++)
    {
        bool great=false;
        
        if(max==array[j])
        {
            great=true;
            break;
        }
    }
    
    return j;
}
