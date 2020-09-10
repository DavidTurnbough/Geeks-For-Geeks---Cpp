//******************************************************************************
// Name: David Turnbough
// Date: Friday July 24, 2020
// Geeks For Geeks: Sorted Matrix
// https://practice.geeksforgeeks.org/problems/sorted-matrix/0
//******************************************************************************
#include <cstdlib>
#include <iostream>
#include <climits>

using namespace std;

int main(int argc, char** argv)
{
    int testCases = 0;

    cin >> testCases;

    while(testCases--)
    {
        // Get matrix size (n x n).
        int size = 0;

        cin >> size;

        // Get elements of matrix.
        int arr[size][size] = {};

        for(int i = 0; i < size; ++i)
        {
            for(int j = 0; j < size; ++j)
            {
                cin >> arr[i][j];
            }
        }

        int currentSmallest = INT_MAX;
        int previousSmallest = -1;
        
        int row = 0;
        int col = 0;
        int smallestRow = 0;
        int smallestCol = 0;
        int count = 0;
        
        while(count < (size * size))
        {
            while(row < size)
            {
                while(col < size)
                {
                    if(arr[row][col] < currentSmallest && arr[row][col] >= previousSmallest)
                    {
                        smallestRow = row;
                        smallestCol = col;
                        currentSmallest = arr[row][col];
                        break;
                    }
                    col++;
                }
                row++;
                col = 0;
            }
            
            cout << currentSmallest << " ";
            count++;
            previousSmallest = currentSmallest;
            currentSmallest = INT_MAX;
            row = 0;
            col = 0;
            arr[smallestRow][smallestCol] = -1;
        }

        cout << endl;

    }

    return 0;
}