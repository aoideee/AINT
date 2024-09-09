#include <iostream>
#include <iomanip>

using namespace std;

void roll(int frequency[]);
void printfrequency(int frequency[]);

int main()
{
    int frequency[6]={0};
    
    cout<<"Dice Roll! The dice will roll 50 times and we will give you the frequency for each number."<<endl;
    
    roll(frequency); // Call the roll function
    printfrequency(frequency);
    
    return 0;
}

void roll(int frequency[])
{
    srand(time(0));
    
    for(int roll=1; roll<=50; ++roll)
    {
      int value = 1 + rand() % 6;
      frequency[value-1]++;
    }
}

void printfrequency(int frequency[])
    {
        cout<<"Dice frequency: ";
    
        for(int index=0; index<6; index++)
        {
          cout<<frequency[index]<<" ";
        }
    }
