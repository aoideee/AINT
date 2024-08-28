#include <iostream>
using namespace std;

int main()
{
    int celsius;
    int calculation;
    
    // Step 1:
    cout << "Insert value for celsius: ";
    cin >> celsius;
    
    // Step 2:
    calculation = celsius * 9/5 + 32;
    
    // Step 3:
    cout << "The fahrenheit value is " << calculation;
    
    return 0;
}
