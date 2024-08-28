#include <iostream>

using namespace std;

int main()
{
    
    int n1, n2, calc1, calc2;
    
    cout<<"Addition & Subtraction Calculator\n";
    
    cout<<"Enter number 1: ";
    cin>>n1;
    
    cout<<"Enter number 2: ";
    cin>>n2;
    
    calc1=n1+n2;
    calc2=calc1-n1;
    
    cout<<"The sum is "<<calc1<<" and the difference is "<<calc2<<" when subtracted from "<<n1<<".";

    return 0;
}
