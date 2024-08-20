#include <iostream>

using namespace std;

int sum(int, int array[]);

int main()
{
    int num, arraysize, counter=0;
    
    cout<<"Sum of all the numbers in the array! How many numbers would you like in the array? = ";
    cin>>arraysize;
    
    int array[arraysize]={0};
    
    cout<<"Enter your first number: ";
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
    
    int f=sum(arraysize, array);
    
    cout<<"The sum is "<<f<<".";

    return 0;
}

int sum(int arsz, int array[])
{
    int sum, counter = 0;
    
    while(counter<arsz)
    {
        sum+=array[counter];
        counter++;
    }
    
    return sum;
}
