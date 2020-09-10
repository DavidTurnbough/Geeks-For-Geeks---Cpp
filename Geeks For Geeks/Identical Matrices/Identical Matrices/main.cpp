//******************************************************************************
// Name: David Turnbough
// Date: Wednesday June 5, 2019
// Geeks For Geeks: Identical Matrices
// https://practice.geeksforgeeks.org/problems/identical-matrices/0
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
        int size = 0;
        
        cin >> size;
        
        int foo[size][size];
        int bar[size][size];
        
        for(int i = 0; i < size; ++i)
        {
            for(int j = 0; j < size; ++j)
            {
                cin >> foo[i][j];
            }
        }
        
        for(int i = 0; i < size; ++i)
        {
            for(int j = 0; j < size; ++j)
            {
                cin >> bar[i][j];
            }
        }
        
        bool isMatch = true;
        
        for(int i = 0; i < size && isMatch; ++i)
        {
            for(int j = 0; j < size && isMatch; ++j)
            {
                if(foo[i][j] != bar[i][j])
                {
                    isMatch = false;
                }
            }
        }
        
        if(isMatch)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    
    return 0;
}