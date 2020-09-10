//******************************************************************************
// Name: David Turnbough
// Date: Wednesday July 29, 2020
// Geeks For Geeks: Print Pattern
// https://practice.geeksforgeeks.org/problems/print-pattern/0
//******************************************************************************
#include <cstdlib>
#include <iostream>

using namespace std;

void answer(int input, int currentValue)
{
    cout << currentValue << " ";

    if(currentValue <= 0)
    {
        return;
    }
    answer(input, currentValue - 5);
    answer(input, currentValue + 5);
    
    cout << endl;
}

int main(int argc, char** argv)
{
    int testCases = 0;

    cin >> testCases;

    while(testCases--)
    {
        int input = 0;

        cin >> input;

        answer(input, input);
    }

    return 0;
}

