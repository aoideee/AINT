#include <iostream>

using namespace std;

int calculateFactorial(int);

int main()
{
    int n, result;
    
    cout<<"Factorial Calculator"<<endl;
    
    cout<<"Enter value: ";
    cin>>n;
    
    result=calculateFactorial(n);
    
    cout<<"The factorial of "<<n<<" is "<<result<<".";
    

    return 0;
}

int calculateFactorial(int n)
{
    int result=n;
    
    while(n>1)
    {
     n--;
     result=n*result;
    }
    return result;
    
}
