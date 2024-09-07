#include <iostream>
using namespace std;

void findmaximum(int *, int);

int main()
{
    int arraysize=10;
    int arr[arraysize] = {5, 2, 9, 1, 5, 6, 8, 3, 4, 7};
    
    findmaximum(arr, arraysize);


    return 0;
}

void findmaximum(int *ptr, int arsz)
{
    int max=*ptr;
    
    for(int i=1; i<arsz; i++)
    {
        if(max<*(ptr+i))
        {
            max=*(ptr+i);
        }
    }
    
    cout<<"The biggest number in the array is "<<max<<".";
}
