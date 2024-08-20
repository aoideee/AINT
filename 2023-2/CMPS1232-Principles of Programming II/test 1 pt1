#include <iostream>
using namespace std;

const int arraysize=3;

void print(int [][arraysize], int);

int main()
{
    int array[arraysize][arraysize]={
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    
    print(array, arraysize);

    return 0;
}

void print(int ar [][arraysize], int arsz)
{
    int row=0;
    
    for(int c=arsz-1; c>=0; c--)
    {
        cout<<ar[row][c]<<" ";
        row++;
    }
}
