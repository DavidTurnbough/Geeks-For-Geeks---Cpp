//******************************************************************************
// Name: David Turnbough
// Date: Thursday May 10, 2018
// Geeks for Geeks - Series AP
// https://practice.geeksforgeeks.org/problems/series-ap/0
//******************************************************************************
#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
    int testCases = 0;

    cin >> testCases;

    while(testCases--)
    {
        int firstValue = 0;
        int secondValue = 0;
        int nthTerm = 0;

        cin >> firstValue >> secondValue >> nthTerm;

        int difference = secondValue - firstValue;
        
        cout << difference * (nthTerm - 2) + secondValue << endl;
    }

    return 0;
}