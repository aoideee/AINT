#include <iostream>

using namespace std;

const int ARRAY_SIZE=3;

int findSmallest(int[][ARRAY_SIZE]);

int main()
{
    int table[ARRAY_SIZE][ARRAY_SIZE]={{0}};
    int num=0;
    
    cout<<"For this program you'll need to enter 9 values."<<endl;
    
    
    for(int r=0;r<ARRAY_SIZE; r++)
    {
        for(int c=0; c<ARRAY_SIZE; c++)
        {
            cout<<"Enter your value: ";
            cin>>num;
            table[r][c]=num;
        }
    }
    
    int small=findSmallest(table);
    
    cout<<"The smallest number in the array is "<<small<<" .";
    
    return 0;
}

int findSmallest(int ar[][ARRAY_SIZE])
{
    int smallest=ar[0][0];
    
    for(int r=0;r<ARRAY_SIZE; r++)
    {
        for(int c=0; c<ARRAY_SIZE; c++)
        {
            if(ar[r][c]<smallest)
            {
                smallest=ar[r][c];
            }
        }
    }
    
    return smallest;
}
