//******************************************************************************
// Name: David Turnbough
// Date: Thursday July 23, 2020
// Geeks For Geeks: Rectangle Number
// https://practice.geeksforgeeks.org/problems/rectangle-number/0
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
        int col = 0;
        
        cin >> row >> col;
        
        int numberOfSquares = 0;
        
        int areaOfRectangle = row * col;
        
        for(int i = 1; i <= row; ++i)
        {
            for(int j = 1; j <= col; ++j)
            {
                if(areaOfRectangle % (i * j) == 0)
                {
                    cout << i << " - " << j << endl;
                    
                    numberOfSquares += (areaOfRectangle / (i * j));
                    
                    cout << numberOfSquares << endl;
                }
            }
        }
        
        cout << numberOfSquares << endl;
    }
    
    return 0;
}

