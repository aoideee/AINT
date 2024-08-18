#include <iostream>
using namespace std;

int main()
{
    int arsz=0;
    
    cout<<"This program will determine which number (based on your input) is the largest!!!"<<endl;
    cout<<"Enter the array size (the amount of numbers you want to input): ";
    cin>>arsz;
    
    int ar[arsz];
    
    cout<<"Enter your first value: ";
    cin>>ar[0];
    
    for(int i=1; i<arsz; i++)
    {
        cout<<"Enter your value: ";
        cin>>ar[i];
    }
    
    int *ptr=&ar[0];
    int big=*ptr;
    
    for(int j=0; j<arsz; j++)
    {
        
        if(big<*(ptr+j))
        {
            big=*(ptr+j);
        }
    }
    
    cout<<endl;
    
    cout<<"The largest number in the array is "<<big<<".";

    return 0;
}
