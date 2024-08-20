#include <iostream>
using namespace std;

void change(char *);

int main()
{
    char word[]="fun";
    change(word);

    return 0;
}

void change(char *ptr)
{
    int counter=0;
    
    for(int i=0; *(ptr+i)!='\0'; i++)
    {
        counter++;
    }
    
    if(counter<4)
    {
        for(int j=0; *(ptr+j)!='\0'; j++)
        {
            *(ptr+j)='$';
        }
    }
    
    else if(counter>=4)
    {
        for(int j=0; *(ptr+j)!='\0'; j++)
        {
            *(ptr+j)='#';
        }
    }
    
    for(int t=0; *(ptr+t)!='\0'; t++)
    {
        cout<<*(ptr+t);
    }
}
