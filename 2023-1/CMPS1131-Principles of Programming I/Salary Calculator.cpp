#include <iostream>

using namespace std;

int main()
{
    int hours, rate, extra_rate, salary, diff;
    rate=10;
    
    cout<<"Enter hours worked (-1 to end): ";
    cin>>hours;
    
    while(hours>-1)
    {
        if(hours>40)
        {
          diff=hours-40;
          extra_rate=diff*5;
        }
        
        salary=(hours*rate)+extra_rate;
        cout<<"Salary is $"<<salary<<"."<<endl;
        
        cout<<"\nEnter hours worked (-1 to end): ";
        cin>>hours;
    }


    return 0;
}
