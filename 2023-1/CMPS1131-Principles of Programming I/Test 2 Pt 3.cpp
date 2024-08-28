/******************************************************************************

Write a function called squareNumbers which will return the square of a number.
In the function, ask the user to enter integers until the number -1  is entered to quit. Then print out the square of the number.


Sample Output

Enter a number (-1 to quit): 3
The square of 3 is 9

Enter a number (-1 to quit): 4
The square of 4 is 16

Enter a number(-1 to quit): -1

Prototype of the function
void squareNumbers ();


Note:

1. create a function prototype above the main function

2. From inside main call the function.  

3. Implement the function after the main function

*******************************************************************************/
#include <iostream>

using namespace std;

void squareNumbers();

int main()
{
    squareNumbers();

    return 0;
}

void squareNumbers()
{
    int num, results;
    
    cout<<"Enter a number (-1 to quit): ";
    cin>>num;
    
    while(num!=-1)
    {
        results=num*num;
        
        cout<<"The square of "<<num<<" is "<<results<<"."<<endl;
        
        cout<<"Enter a number (-1 to quit): ";
        cin>>num;
    }
}
