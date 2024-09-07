#include <iostream>

using namespace std;

void findtally(int [], int);

int main()
{
    
    int arraysize=6;
    int array[arraysize]={1, 8, 1, 5, 6, 7};
    
    findtally(array, arraysize);

    return 0;
}

void findtally(int ar[], int arsz)
{
    int row=2;
    int array[row][arsz]={{0}};
    
    for(int i=0; i<arsz; i++)
    {
        int count = 0;
        bool appearedBefore = false;

        for(int j=0; j<i; j++)
        {
            if(array[0][j] == ar[i])
            {
                appearedBefore = true;
                break;
            }
        }

        if(!appearedBefore)
        {
            array[0][i] = ar[i];
            for(int j=i; j<arsz; j++)
            {
                if(ar[j] == array[0][i])
                {
                    count++;
                }
            }
            array[1][i] = count;
        }
    }
    
    for(int i=0; i<arsz; i++)
    {
        if(array[0][i] != 0)
        {
            cout << "Number: " << array[0][i] << " Tally: " << array[1][i] << endl;
        }
    }
}
