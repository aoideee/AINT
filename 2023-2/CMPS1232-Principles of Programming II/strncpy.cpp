#include <iostream>
using namespace std;

void ncopy(char *, char *, int);

int main()
{
    char s1[]="It's Monday and it's raining";
    char s2[40];
    
    int num=0;
    
    cout<<"Tell me how many characters from this array: "<<s1<<"\n you would like to be copied into the other array: ";
    cin>>num;
    
    ncopy(s1, s2, num);

    return 0;
}

void ncopy(char *p1, char *p2, int value)
{
    for(int i=0; i<value; i++)
    {
        *(p2+i)=*(p1+i);
        cout<<*(p2+i);
    }
}
