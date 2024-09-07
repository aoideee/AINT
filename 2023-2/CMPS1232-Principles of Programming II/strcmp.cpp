#include <iostream>
using namespace std;

int mystrcpy(char *, char *);

int main()
{
    char s1[]="Happy";
    char s2[]="Money";
    
    int copy=mystrcpy(s1, s2);
    
    cout<<copy;

    return 0;
}

int mystrcpy(char *p1, char *p2)
{
    int ans=0;
    
    for(int i=0; *(p1+i)!='\0'; i++)
    {
        if(*(p1+i)!=*(p2+i))
        {
            if(*(p1+i)>*(p2+i))
            {
                ans=1;
                break;
            }
            
            else if(*(p1+i)<*(p2+i))
            {
                ans=-1;
                break;
            }
        }
    }
    
    return ans;
}
