#include <iostream>
using namespace std;

#include <cstring>
using std::strtok;

void func(char *);

int main()
{
    char sentence[]="I am happy";
    char *tokenPtr;
    
    cout<<"The string to be tokenized is:\n"<<sentence<<"\n\n The tokens are:\n\n";
    
    tokenPtr=strtok(sentence, " ");
    int counter=0;
    
    while(tokenPtr != NULL)
    {
        if(counter>0)
        {
            func(tokenPtr);
        }
        
        cout<<tokenPtr<<endl;
        tokenPtr=strtok(NULL, " ");
        counter++;

    }

    return 0;
}

void func(char *Ptr)
{
    for(int num=0; *(Ptr+num) !='\0'; num++)
    {
        if(*(Ptr+num)=='A' || *(Ptr+num)=='a' || *(Ptr+num)=='E' || *(Ptr+num)=='e' || *(Ptr+num)=='I' || *(Ptr+num)=='i' || *(Ptr+num)=='O' || *(Ptr+num)=='o' || *(Ptr+num)=='U' || *(Ptr+num)=='u')
        {
            ;
        }
        else
        {
           *(Ptr+num)='$';
        }
    }
}
