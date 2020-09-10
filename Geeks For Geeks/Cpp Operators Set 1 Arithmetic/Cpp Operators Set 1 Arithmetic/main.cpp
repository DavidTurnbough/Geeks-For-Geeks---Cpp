//******************************************************************************
// Name: David Turnbough
// Date: Monday May 27, 2019
// Geeks For Geeks: C++ Operators | Set 1 (Arithmetic)
// https://practice.geeksforgeeks.org/problems/c-operators/0
//******************************************************************************
#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    int testCases = 0;

    cin >> testCases;

    while(testCases--)
    {
        int larger = 0;
        int smaller = 0;

        cin >> larger >> smaller;

        if(smaller > larger)
        {
            int temp = smaller;
            smaller = larger;
            larger = temp;
        }

        cout << larger + smaller << endl;
        cout << larger - smaller << endl;
        cout << larger / smaller << endl;
        cout << larger * smaller << endl;
    }

    return 0;
}

