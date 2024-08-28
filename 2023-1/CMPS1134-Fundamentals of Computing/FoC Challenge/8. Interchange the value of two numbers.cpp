#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    int c;
    
    //Input:
    cout<<"Input 1st number: ";
    cin >> a;
    
    cout<<"Input 2nd number: ";
    cin >> b;
    
    //Processing:
    c = a;
    a = b;
    b = c;
    
    //Output:
    cout << "The new numbers are " << a << " and " << b;

    return 0;
}
