#include <iostream>

using namespace std;

bool isOdd(int);

int main()
{
    int res=isOdd(7);
    if (res)
    cout<<"false";
    else
    cout<<"true";

    return 0;
}

bool isOdd(int number)
{
    
    return(number%2==0);
}
