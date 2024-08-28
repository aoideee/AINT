#include <iostream>

using namespace std;

int main()
{
    int a;
    
    cout <<"Enter average for letter grade: ";
    cin >> a;
    
    if (a>=90)
    cout << "A";
    else if(a>=80)
    cout<<"B";
    else if (a>=70)
    cout << "C";
    else if (a<=70)
    cout << "F";
    
    return 0;
}
