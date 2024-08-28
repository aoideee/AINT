#include <iostream>

using namespace std;

void practice();

int main()
{
    practice();

    return 0;
}

void practice()
{
    for (int i = 1; i <= 10; ++i)
    {
        for (int j = 1; j <= i; ++j)
        {
            cout << '*';
        }
        cout << endl;
    }
    
}
