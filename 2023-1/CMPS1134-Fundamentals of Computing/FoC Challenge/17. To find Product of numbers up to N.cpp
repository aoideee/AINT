#include <iostream>

using namespace std;

int main()
{
    int n;
    int fact;
    
    //Input
    cout<<"Enter number to calculate the product up to selected value: ";
    cin>>n;
    fact=n;
    
    //Processing
    while(n>1)
    {
        n--;
        fact=fact*n;
        
    }
    
    //Output
    cout<<"The product of the numbers is "<<fact<<".";

    return 0;
}
