#include <iostream>
using namespace std;

bool search(char *, char);

int main()
{
 
    char sentence[80] = "fluent in programming is tough but worth it!";
    char letter;
    
    cout<<"This program will tell you if a letter of your choice is in the array.\n Enter a letter: ";
    cin>>letter;
    
    bool func=search(sentence, letter);
    
    cout<<"'"<<letter<<"' = "<<func;

    return 0;
}

bool search(char * inputArray, char c)
{
    bool ans=false;
    
    for(int i=0; *(inputArray+i)!='\0'; i++)
    {
        if(*(inputArray+i)==c)
        {
            ans=true;
            break;
        }
    }
    
    return ans;
}
