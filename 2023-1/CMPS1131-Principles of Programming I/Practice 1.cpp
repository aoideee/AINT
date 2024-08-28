#include <iostream>

using namespace std;

int sum(int a, int b)
    {
        int results=a+b;
        
        return results;
    }

int main()
{
    
    int n1, n2, results;
    
    cout<<"Insert number 1: ";
    cin>>n1;
    
    cout<<"Insert number 2: ";
    cin>>n2;
    
    results=sum(n1, n2);
    
    cout<<"The sum is "<<results;

    return 0;
    
}
