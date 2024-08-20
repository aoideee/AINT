#include <iostream>
using namespace std;

void join(char *, char *);

int main()
{
    char s1[40]="Sunshine ";
    char s2[40]="Lollipop";
    
    join(s1, s2);

    return 0;
}

void join(char *p1, char *p2)
{
    int i=0;
    for(; *(p1+i)!='\0'; i++)
    {
        cout<<*(p1+i);
    }
    
    for(int j=0; *(p2+j)!='\0'; j++)
    {
        *(p1+i+1)=*(p2+j);
        
        cout<<*(p1+i+1);
        i++;
    }
}
