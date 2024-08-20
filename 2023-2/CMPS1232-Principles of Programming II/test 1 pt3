#include <iostream>
using namespace std;

void strcpyReverse(char[], char[], int);

int main()
{
    int arraysize=4;
    char array1[arraysize]={'N', 'A', 'M', 'E'};
    char array2[arraysize];
    
    strcpyReverse(array1, array2, arraysize);
    
    return 0;
}

void strcpyReverse(char ar1[], char ar2[], int arsz)
{
   int j=0;
   for(int i=arsz-1; i>=0; i--)
   {
       ar2[j]=ar1[i];
       j++;
   }
   
   for(int i=0; i<arsz; i++)
   {
       cout<<ar2[i]<<" ";
   }
}
