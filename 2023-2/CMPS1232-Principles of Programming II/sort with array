#include <iostream>
using namespace std;

void sortarray(int *, int);

int main()
{
    int arraysize=5;
    int array1[arraysize]={1, 3, 2, 45, 15};
    
    sortarray(array1, arraysize);

    return 0;
}

void sortarray(int *ptr, int arsz)
{
    for(int i=0; i<arsz-1; i++)
    {
        int n1=0;
        int n2=0;
        
        for(int j=i+1; j<arsz; j++)
        {
            
            if (*(ptr+i) > *(ptr+j))
            {
                
                n1=*(ptr+i);
                n2=*(ptr+j);
                
                *(ptr+i)=n2;
                *(ptr+j)=n1;
            }
        }
    }
    
    for(int t=0; t<arsz; t++)
    {
        cout<<*(ptr+t)<<endl;
    }
}
