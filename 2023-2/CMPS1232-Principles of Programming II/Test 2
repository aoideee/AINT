#include <iostream>
using namespace std;

#include <cstring>
using std::strtok;

void func(char *);

int main()
{
 
    char sentence[]="a fun sentence this is";
    char *tokenPtr=strtok(sentence, " ");
    
    while(tokenPtr!= NULL)
    {
        cout<<tokenPtr<<" ";
        func(tokenPtr);
        tokenPtr=strtok(NULL, " ");
    }

    return 0;
}

void func(char *ptr)
{
    for(int i=0; *(ptr+i)!='\0'; i++)
    {
        if(*(ptr+i)=='A' || *(ptr+i)=='a' || *(ptr+i)=='E' || *(ptr+i)=='e' || *(ptr+i)=='I' || *(ptr+i)=='i' || *(ptr+i)=='O' || *(ptr+i)=='o' || *(ptr+i)=='U' || *(ptr+i)=='u')
        {
            *(ptr+i)='$';
        }
        
        cout<<*(ptr+i);
    }
    
    cout<<endl;
}
