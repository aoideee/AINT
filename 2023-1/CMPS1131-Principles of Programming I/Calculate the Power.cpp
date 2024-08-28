#include <iostream>
#include <cmath>

using namespace std;

double calculatePower(double, int);

int main()
{
    double base;
    int exponent;
    
    cout<<"Calculate the power"<<endl;
    
    cout<<"Enter the number for the base: ";
    cin>>base;
    cout<<"Enter the number for the exponent: ";
    cin>>exponent;
    
    double calc=calculatePower(base, exponent);
    
    cout<<"The base to the exponent is "<<calc<<".";
    
    return 0;
}

double calculatePower(double a, int b)
{
    double calc=pow(a, b);
    
    return calc;
}
