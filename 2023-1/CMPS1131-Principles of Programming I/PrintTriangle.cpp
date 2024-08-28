#include <iostream>

using namespace std;

void printTriangle();

int main()
{
    printTriangle();

    return 0;
}

void printTriangle()
{
    
    for (int i = 1; i <= 4; ++i)
    {
        for (int j = 1; j <= i; ++j)
        {
            cout << '%';
        }
        cout << endl;
    }
}
