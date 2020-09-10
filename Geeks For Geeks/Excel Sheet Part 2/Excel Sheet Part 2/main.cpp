//******************************************************************************
// Name: David Turnbough
// Date: Sunday July 19, 2020
// Geeks For Geeks: Excel Sheet | Part - 2
// https://practice.geeksforgeeks.org/problems/excel-sheet-part-2/0
//******************************************************************************
#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(int argc, char** argv)
{
    int testCases = 0;
    
    cin >> testCases;
    
    while(testCases--)
    {
        string column = "";
        
        cin >> column;
        
        int columnNumber = 0;
        
        for(int i = 0; i < column.size(); ++i)
        {
            columnNumber += (int)(column[i] - 64) + (25 * columnNumber);
        }
        
        cout << columnNumber << endl;
    }
    
    return 0;
}

