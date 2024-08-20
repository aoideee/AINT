#include <iostream>
using namespace std;

void vowel(char *);

int main()
{
    char word[]="Unicorn";
    vowel(word);

    return 0;
}

void vowel(char *ptr)
{
    for(int i=0; *(ptr+i)!='\0'; i++)
    {
        if( *(ptr+i) == 'a' || *(ptr+i) == 'A' || *(ptr+i) == 'e' || *(ptr+i) == 'E' || *(ptr+i) == 'i' || *(ptr+i) == 'I' || *(ptr+i) == 'o' || *(ptr+i) == 'O' || *(ptr+i) == 'u' || *(ptr+i) == 'U')
        {
            *(ptr+i)='$';
        }
        
        cout<<*(ptr+i);
    }
}
