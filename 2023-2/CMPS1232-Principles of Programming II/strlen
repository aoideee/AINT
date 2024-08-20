#include <iostream>
using namespace std;

int stringlngth(char *);

int main()
{
    char array[]="It's Monday and Raining";
    
    int length=stringlngth(array);
    
    cout<<"The amount of characters in: "<<array<<"\n is: "<<length;

    return 0;
}

int stringlngth(char *ptr)
{
    int counter=0;
    
    for(int i=0; *(ptr+i)!='\0'; i++)
    {
        counter++;
    }
    
    return counter;
}
