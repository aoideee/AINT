#include <iostream>

using namespace std;

int getLastDigit(int);

int main()
{
    int res=getLastDigit(16);
    cout<<"The last digit of the age 16 is "<<res<<".";

    return 0;
}

int getLastDigit(int age)
{
    int last_digit=age%10;
    
    return last_digit;
}
