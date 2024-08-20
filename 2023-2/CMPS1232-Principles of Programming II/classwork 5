#include <iostream>
using namespace std;

#include <cstring>
using std::strcat;
using std::strncat;

int stringinfo(char *, char);
void stringinfo2(char *, char);

int main()
{
    char array[]="Sunshine Lollipop";
    char value;
    
    cout<<"This program counts how many times a certain letter is repeated. (Small and big letters are counted separately)\n Enter a letter: "<<endl;
    cin>>value;
    
    int func=stringinfo(array, value);
    
    cout<<"'"<<value<<"' was repeated "<<func<<" time(s).\n"<<endl;
    
    cout<<"This program replaces a certain letter with '$'. (Small and big letters are counted separately)\n Enter a letter: "<<endl;
    cin>>value;
    
    stringinfo2(array, value);
    
    char array2[]="Hello ";
    char array3[]="World";
    strcat(array2, array3);
    
    cout<<"This code will join '"<<array2<<"' and '"<<array3<<"' together.\n"<<array2<<endl;
    
    strncat(array2, array3, 3);
    
    cout<<"This code will join '"<<array2<<"' and '"<<array3<<"' together but by limiting the amount of characters from the second array.\n"<<array2<<endl;
    
    

    return 0;
}

int stringinfo(char *ptr, char letter)
{
    int counter=0;
    
    for(int i=0; *(ptr+i)!='\0'; i++)
    {
        if(*(ptr+i)==letter)
        {
            counter++;
        }
    }
    
    return counter;
}

void stringinfo2(char *ptr, char letter)
{
    for(int i=0; *(ptr+i)!='\0'; i++)
    {
        if(*(ptr+i)==letter)
        {
            *(ptr+i)='$';
        }
        
        cout<<*(ptr+i);
    }
}
