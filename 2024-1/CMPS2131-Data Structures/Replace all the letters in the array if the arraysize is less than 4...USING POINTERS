#include <iostream>
using namespace std;

int main()
{
    char word[]="Hi";
    char *pointer=&word[0];
    
    int counter=0;
    
    for(int i = 0; *(pointer+i)!='\0'; i++)
    {
        counter++;
    }
    
    if(counter<=4)
    {
     int t=0;
        while(t<counter)
        {
            *(pointer+t)='$';
            t++;
        }
    }
    else
    {
        int t=0;
        while(t<counter)
        {
            *(pointer+t)='*';
            t++;
        }
    }
    
    for(int j=0; *(pointer+j)!='\0'; j++)
    {
        cout<<*(pointer+j);
    }

    return 0;
}
