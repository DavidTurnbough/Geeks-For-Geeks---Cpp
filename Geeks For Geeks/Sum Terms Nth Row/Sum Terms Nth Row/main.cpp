//******************************************************************************
// Name: David Turnbough
// Date: Sunday July 19, 2020
// Geeks For Geeks: Sum Terms Nth Row
// https://practice.geeksforgeeks.org/problems/sum-terms-nth-row/0
//******************************************************************************
#include <cstdlib>
#include <cstdio>
#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char** argv)
{
    int testCases = 0;

    cin >> testCases;

    while(testCases--)
    {
        int row = 0;

        cin >> row;

        int elementsInRow = 2 * row;


        int firstElement = 1;

        for(int i = 0; i < row; ++i)
        {
            firstElement += 2 * i;
        }

        int total = 0;

        for(int i = 0; i < elementsInRow; ++i)
        {
            total += firstElement;
            firstElement++;
        }

        printf("%d\n", total);
    }

    return 0;
}