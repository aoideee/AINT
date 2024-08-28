/******************************************************************************

Write a function named "digit_to_name" that takes an integer argument in the range from 1 to 9 , inclusive, and returns the English name for that integer.

1) The function should return the English name for that integer.

2) If the argument is not in the required range, then the function should return "digit error" 

Example digit_to_name(7) will return seven


Note:

1. create a function prototype above the main function

2. From inside main call the function.  

3. Implement the function after the main function

*******************************************************************************/
#include <iostream>

using namespace std;

string digit_to_name(int);

int main()
{
    int number;
    
    cout<<"Enter a number between 1 to 9 to receive its English spelling: ";
    cin>>number;
    
    string results=digit_to_name(number);
    
    cout<<results;

    return 0;
}

string digit_to_name(int x)
{
    string name;
    if(x<1 ||x>9)
    {
        name="Digit error";
    }
    else if(x==1)
    {
        name="One";
    }
    else if(x==2)
    {
        name="Two";
    }
    else if(x==3)
    {
        name="Three";
    }
    else if(x==4)
    {
        name="Four";
    }
    else if(x==5)
    {
        name="Five";
    }
    else if(x==6)
    {
        name="Six";
    }
    else if(x==7)
    {
        name="Seven";
    }
    else if(x==8)
    {
        name="Eight";
    }
    else if(x==9)
    {
        name="Nine";
    }
    
    return name;
}
