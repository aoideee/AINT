#include <iostream>

using namespace std;

int main()
{
    int n, a, d;
    int sum;
    
    //Input
    n=50;
    a=1;
    d=2;

    //Processing
    sum= n/2*(2*a+(n-1)*d);
    
    //Output
    cout<<"The sum of the first 50 odd numbers is "<<sum<<".";

    return 0;
}
