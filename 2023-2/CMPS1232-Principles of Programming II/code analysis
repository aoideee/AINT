/******************************************************************************

1)	findSum – Returns an integer. Parameters are as follows: a multidimensional array, number of rows, number of columns
This function will return the sum of the last row of the array
2)	findProduct – Returns an integer. Parameters are as follows: a multidimensional array, number of rows, number of columns
This function will return the product of the last column of the array
3)	printOddNumbers – Does not return anything. Parameters are as follows: a multidimensional array, number of rows, number of columns.
This functions will print all the odd numbers in the array
4)	findSumDiagonal - Returns an integer. Parameters are as follows: a multidimensional array, number of rows, number of columns
This functions will print all the numbers in the diagonal shown. Output should be 9,6,3


*******************************************************************************/
#include <iostream>
using namespace std;

const int col = 3; 

int findSum(int [][col], int, int);
int findProduct(int [][col], int, int);
void printOddNumbers(int [][col], int, int);
int findSumDiagonal(int [][col], int, int);

int main()
{
    int row=3;
    int array[row][col]={
        {1,2,3},
        {5,6,7},
        {9,10,11}
    };
    
    int sum=findSum(array, row, col);
    int product=findProduct(array, row, col);
    int diagonal=findSumDiagonal(array, row, col);
    
    cout<<"The sum of the last row is: "<<sum<<endl;
    cout<<"The product of the last row is: "<<product<<endl;
    printOddNumbers(array, row, col);
    cout<<endl;
    cout<<"The sum of the diagonal number is: "<<diagonal<<endl;

    return 0;
}

int findSum(int ar[][col], int r, int c)
{
    int sum=0;
    for(int i=0; i<c; i++)
    {
        sum+=ar[r-1][i]; 
    }
    return sum;
}

int findProduct(int ar[][col], int r, int c)
{
    int product=1;
    for(int i=0; i<c; i++)
    {
        product*=ar[r-1][i]; 
    }
    return product;
}

void printOddNumbers(int ar[][col], int r, int c)
{
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
          if (ar[i][j] % 2 != 0) 
          {
            cout<<ar[i][j]<<" ";
          }
        }
    }
}

int findSumDiagonal(int ar[][col], int r, int c)
{
    int sum=0;
    int col=0;
    
    for(int i=2; i>=0; i--)
    {
        sum+=ar[i][col];
        col++;
        
    }
    
    return sum;
}
