#include <iostream>
using namespace std;

int main()
{
    int *pointer, value;
    value=10;
    pointer=&value;
    
    cout<<value<<endl;
    cout<<&value<<endl;
    cout<<pointer<<endl;
    cout<<*pointer;

    return 0;
}
