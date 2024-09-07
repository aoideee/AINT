#include <iostream>

using namespace std;

int main()
{
    int average, result, counter=0;
    int array [10]={0};
    
    cout<<"This program will prompt you to enter 10 number. Enter your first value: ";
    cin>>array[counter];
    counter++;
    
    while(counter<=9)
    {
        cout<<"Enter value: ";
        cin>>array[counter];
        counter++;
    }
    
    for(int index=0; index<10; index++)
    {
        average+=array[index];
    }
    
    result=average/10;
    
    cout<<"The average of all the numbers entered is: "<<result<<".";
    

    return 0;
}
