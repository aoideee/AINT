#include <iostream>

using namespace std;

int main()
{
    int n;
    int f;
    
    //Input
    cout<<"Enter the quantity of natural numbers you wish to sum: ";
    cin>>n;
    
    //Processing
    f = (n*(n+1))/2;
    
    //Output
    cout<<"The sum of "<<n<<" natural numbers is "<<f<<".";

    return 0;
}
