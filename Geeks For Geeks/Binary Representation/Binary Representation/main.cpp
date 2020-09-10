//******************************************************************************
// Name: David Turnbough
// Date: Wednesday May 29, 2019
// Geeks For Geeks: Binary Representation
// https://practice.geeksforgeeks.org/problems/binary-representation/0
//******************************************************************************
#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

#define MAX_LENGTH 13

int main(int argc, char** argv)
{
    int testCases = 0;

    cin >> testCases;

    while(testCases--)
    {
        int input = 0;

        cin >> input;

        int output = 0;

        while(input)
        {
            output += (input % 2);
            output *= 10;
            input /= 2;
        }

        cout << setw(MAX_LENGTH) << setfill('0') << output << endl;
    }

    return 0;
}