#include <iostream>
#include <array>

using namespace std;

bool return_number(int, int array[], int);

int main()
{
    const int arraysize=6;
    int array[arraysize]={0, 1, 2, 3, 4 ,5};
    int num=0;
    
    cout<<"Check to see if your number is in an array! Enter any number: ";
    cin>>num;
    
    bool f=return_number(arraysize, array, num);
    cout<<f;

    return 0;
}

bool return_number(int arsz, int ar[], int n)
{
    bool ans=false;
    
    for(int i=0; i<arsz; i++)
    {
        if(n==ar[i])
        {
            ans=true;
            break;
        }
        
    }
    
    return ans;
}
