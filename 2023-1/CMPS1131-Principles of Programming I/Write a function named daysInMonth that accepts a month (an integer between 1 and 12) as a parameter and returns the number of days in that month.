#include <iostream>

using namespace std;

int daysInMonth(int);

int main()
{
    int month;
    
    cout<<"Month to days calculator\n";
    cout<<"Enter month (in numerical value): ";
    cin>>month;
    
    int results=daysInMonth(month);
    
    cout<<"The days in the month is "<<results<<".";

    return 0;
}

int daysInMonth(int m)
{
   int days;
   
   if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12)
   days=31;
   else
   if(m==2)
   days=28;
   else
   if(m==4 || m==6 || m==9 || m==11)
   days=30;
   
   return days;
}
