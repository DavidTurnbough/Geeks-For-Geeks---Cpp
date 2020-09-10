//******************************************************************************
// Name: David Turnbough
// Date: Friday July 24, 2020
// Geeks For Geeks: Sum of Products 
// https://practice.geeksforgeeks.org/problems/sum-of-products/0
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
        // Get array size.
        int size = 0;

        cin >> size;

        // Get elements in array.
        int arr[size] = {};

        for(int i = 0; i < size; ++i)
        {
            cin >> arr[i];
        }

        // Calculate the sum.

        int sum = 0;

        for(int i = 0; i < size; ++i)
        {
            for(int j = i + 1; j < size; ++j)
            {
                sum += arr[i] & arr[j];
            }
        }

        cout << sum << endl;
    }

    return 0;
}