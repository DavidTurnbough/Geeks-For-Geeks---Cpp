//******************************************************************************
// Name: David Turnbough
// Date: Sunday May 25, 2019
// Geeks For Geeks: C++ 2-D Arrays | Set-1
// https://practice.geeksforgeeks.org/problems/c-2-d-arrays/0
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
        
        int a[size][size];
        
        for(int i = 0; i < size; ++i)
        {
            for(int j = 0; j < size; ++j)
            {
                cin >> a[i][j];
            }
        }
        
        int b[size][size];
        
       
        for(int i = 0; i < size; ++i)
        {
            for(int j = 0; j < size; ++j)
            {
                b[j][i] = a[i][j];
            }
        }
        
        for(int i = 0; i < size; ++i)
        {
            for(int j = 0; j < size; ++j)
            {
                cout << b[i][j] << " ";
            }
        }
        
        cout << endl;
    }
    
    return 0;
}

