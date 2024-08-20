#include <iostream>
using namespace std;

void join(char *, char *, int);

int main()
{
    char s1[40]="Sunshine ";
    char s2[40]="Lollipop";
    
    int num=0;
    
    cout<<"Tell me how many characters from this array: "<<s2<<"\n you would like to be copied into the other array: ";
    cin>>num;
    
    join(s1, s2, num);

    return 0;
}

void join(char *p1, char *p2, int value)
{
    int i=0;
    for(; *(p1+i)!='\0'; i++)
    {
        cout<<*(p1+i);
    }
    
    for(int j=0; j<value; j++)
    {
        *(p1+i+1)=*(p2+j);
        
        cout<<*(p1+i+1);
        i++;
    }
}
