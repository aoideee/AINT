#include <iostream>
using namespace std;

void length(char *);

int main()
{
    
    char array[]={"Boston"};
    
    length(array);
    return 0;
}

void length(char *ptr)
{
    int counter=0;
    
    for(int i=0; *(ptr+i)!='\0'; i++)
    {
        counter++;
    }
    
    cout<<counter;
}
