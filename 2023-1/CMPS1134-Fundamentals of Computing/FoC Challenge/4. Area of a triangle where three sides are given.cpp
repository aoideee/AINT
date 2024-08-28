#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a, b, c, s, A;
    
    //Input:
    cout << "Input values of a: ";
    cin >> a;
    
    cout << "Input values of b: ";
    cin >> b;
    
    cout << "Input values of c: ";
    cin >> c;
    
    //Processing:
    s = (a+b+c)/2;
    
    A = sqrt(s*(s-a)*(s-b)*(s-c));
    
    //Output:
    cout << "The area of the triangle is " << A;

    return 0;
}
