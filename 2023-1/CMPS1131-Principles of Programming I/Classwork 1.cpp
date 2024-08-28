#include <iostream>

using namespace std;

int main()
{
    int number=1;
    
    while(number<=19)
    {
        if(number%2==0)
        cout<<number<<" ";
        
        number++;
        
        if(number%6==1)
        cout<<endl;
        
    }

    return 0;
}
