/*int temp = 1;
int i = 1;
int y;
cout << "Enter the value between 1-10 ";
cin >> y;
while (i < y)
{
temp = temp * i;
i++;
}
cout << temp;

 

Rewrite the body of the above code to use a single for-loop instead of a while-loop.

Note: your updated version of the code should produce the same results as the original code.*/

#include <iostream>

using namespace std;

int main()
{
    int y;
    int temp = 1;
    
    cout << "Enter the value between 1-10 ";
    cin >> y;
    
    for(int i=1; i<y;i++)
    {
        temp = temp * i;
    }
    
    cout << temp;

    return 0;
}
