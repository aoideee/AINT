#include <iostream>

using namespace std;

int main()
{
    int s;
    int A;
    int P;
    
    //Input:
    cout << "Input side: ";
    cin >> s;
    
    //Processing:
    A = s * s;
    P = s * 4;
    
    //Output:
    cout << "The area of the square is " << A << " and the perimeter is " << P;

    return 0;
}
