#include <iostream>

using namespace std;

int main() {
    
    int length;
    int width;
    int area;
    
    //Input:
    cout << "Input length: ";
    cin >> length;
    
    cout << "Input width: ";
    cin >> width;
    
    //Proccesing:
    area = length * width;
    
    //Output:
    cout << "The area of the rectangle is " << area;
    
    return 0;
}
