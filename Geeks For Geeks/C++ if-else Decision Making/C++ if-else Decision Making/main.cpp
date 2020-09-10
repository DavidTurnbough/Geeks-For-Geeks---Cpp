//******************************************************************************
// Name: David Turnbough
// Date: Saturday May 25, 2019
// Geeks For Geeks: C++ if-else (Decision Making)
// https://practice.geeksforgeeks.org/problems/c-if-else-decision-making/0
//******************************************************************************
#include <cstdlib>
#include <iostream>

using namespace std;

#define FIVE 5

int main(int argc, char** argv)
{
    int testCases = 0;

    cin >> testCases;

    while(testCases--)
    {
        int input = 0;

        cin >> input;

        if(input == FIVE)
        {
            cout << "Equal to 5" << endl;
        }
        else if(input > FIVE)
        {
            cout << "Greater than 5" << endl;
        }
        else
        {
            cout << "Less than 5" << endl;
        }
    }

    return 0;
}

