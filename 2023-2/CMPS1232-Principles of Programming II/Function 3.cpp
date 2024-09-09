#include <iostream>

using namespace std;

int largest(int, int array[]);

int main()
{
    int num, counter=0;
    int arraysize=5;
    
    cout<<"Find the largest number in the array!";
    
    int array[arraysize]={0};
    
    cout<<"Enter your first number for the array: ";
    cin>>num;
    array[counter]=num;
    counter++;
    
    while(counter<arraysize)
    {
    cout<<"Enter number: ";
    cin>>num;
    array[counter]=num;
    counter++;
    }
    
    int f=largest(arraysize, array);
    
    cout<<"The largest number is "<<f<<".";

    return 0;
}

int largest(int arsz, int array[])
{   int max=0;
    for(int i=0; i<arsz; i++)
    {
        if(max<array[i])
        {
            max=array[i];
        }
        
    }
    
    return max;
}
