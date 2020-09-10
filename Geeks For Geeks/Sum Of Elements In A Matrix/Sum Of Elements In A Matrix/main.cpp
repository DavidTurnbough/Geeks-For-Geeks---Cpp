//******************************************************************************
// Name: David Turnbough
// Date: Sunday May 25, 2019
// Geeks For Geeks: Sum Of Elements In A Matrix
// https://practice.geeksforgeeks.org/problems/sum-of-elements-in-a-matrix/0
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
        int row = 0;
        int column = 0;
        
        cin >> row >> column;
        
        int arr[row][column];
        
        for(int i = 0; i < row; ++i)
        {
            for(int j = 0; j < column; ++j)
            {
                cin >> arr[i][j];
            }
        }
        
        int total = 0;
        
        for(int i = 0; i < row; ++i)
        {
            for(int j = 0; j < column; ++j)
            {
                total += arr[i][j];
            }
        }
        
        cout << total << endl;
    }
    
    return 0;
}

