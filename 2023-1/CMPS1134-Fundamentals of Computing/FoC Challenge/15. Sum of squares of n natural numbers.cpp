#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    int f;
    
    //Input
    cout<<"Enter the amount of natural numbers to find their sum of squares: ";
    cin>>n;
    
    //Processing
    f = n*(n+1)*(2*n+1)/6;
    
    //Output
    cout<<"The sum of squares of "<<n<<" natural numbers is "<<f<<".";

    return 0;
}
