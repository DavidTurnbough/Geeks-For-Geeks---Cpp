//******************************************************************************
// Name: David Turnbough
// Date: Sunday May 26, 2019
// Geeks For Geeks: C++ Arrays (Sum Of Array) | Set 1
// https://practice.geeksforgeeks.org/problems/c-arrays-sum-of-array-set-1/0
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
        
        int arr[size];
        
        for(int i = 0; i < size; ++i)
        {
            cin >> arr[i];
        }
        
        int total = 0;
        
        for(int i = 0; i < size; ++i)
        {
            total += arr[i];
        }
        
        cout << total << endl;
    }
    
    return 0;
}