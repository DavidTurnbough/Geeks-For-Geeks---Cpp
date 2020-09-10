//******************************************************************************
// Name: David Turnbough
// Date: Friday July 24, 2020
// Geeks For Geeks: Rotate Array 
// https://practice.geeksforgeeks.org/problems/rotate-array-by-n-elements/0
//******************************************************************************
#include <cstdlib>
#include <iostream>

using namespace std;

void print(int[], int);

int main(int argc, char** argv)
{
    int testCases = 0;

    cin >> testCases;

    while(testCases--)
    {
        // Get the array size.
        int size = 0;
        int rotation = 0;

        cin >> size >> rotation;

        // Get the array elements.
        int arr[size] = {};

        for(int i = 0; i < size; ++i)
        {
            cin >> arr[(i + size - rotation) % size];
        }

        // Print the rotated array.
        print(arr, size);
    }

    return 0;
}

void print(int arr[], int size)
{
    for(int i = 0; i < size; ++i)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}