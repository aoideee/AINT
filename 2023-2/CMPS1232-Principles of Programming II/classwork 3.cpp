#include <iostream>

using namespace std;

int f(int [], int);

int main()
{
    int arraysize=4;
    
    int array[arraysize]={1, 2, 3, 4};
    
    int func=f(array, arraysize);
    
    cout<<func;

    return 0;
}

int f(int ar[], int arsz)
{
    int i=0;
    int sum=0;
    
    while(i<4)
    {
      sum+=ar[i];
      i++;
    }
    
    return sum;
}
