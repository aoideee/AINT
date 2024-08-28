#include <iostream>

using namespace std;

void classStatistics2();

int main()
{
    classStatistics2();

    return 0;
}

void classStatistics2()
{
    char grade;
    int A=0;
    int B=0;
    int C=0;
    int D=0;
    int F=0;
    int Default=0;
    
    cout<<"Enter a letter grade: ";
    cin>>grade;
    
    for(int counter=1; counter<=10; counter++)
    {
        
        switch(grade)
        {
            case 'A':
            case 'a':
            A++;
            break;
            
            case 'B':
            case 'b':
            B++;
            break;
            
            case 'C':
            case 'c':
            C++;
            break;
            
            case 'D':
            case 'd':
            D++;
            break;
            
            case 'F':
            case 'f':
            F++;
            break;
            
            default:
            Default++;
            
        }
        
        cout<<"Enter a letter grade: ";
        cin>>grade;
        
    }
    
    cout<<"A - "<<A<<" students\n";
    cout<<"B - "<<B<<" students\n";
    cout<<"C - "<<C<<" students\n";
    cout<<"D - "<<D<<" students\n";
    cout<<"F - "<<F<<" students\n";
    cout<<"Invalid Entry - "<<Default<<" students\n";
    
    
}
