//******************************************************************************
// Name: David Turnbough
// Date: January 6, 2018 Saturday
// Geeks for Geeks : Sum of Distinct Elements
// https://practice.geeksforgeeks.org/problems/sum-of-distinct-elements/0
//******************************************************************************
#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char** argv)
{
    cout << "Hello World!" << endl;
    
    int testCases = 0;
    
    cin >> testCases;
    
    while(testCases--)
    {
        int size = 0;
        
        cin >> size;
        
        int arr[size] = {0};
        
        for(int i = 0; i < size; ++i)
        {
            cin >> arr[i];
        }
        
        sort(arr, arr + size);
        
        for(int i = 0; i < size; ++i)
        {
            cout << arr[i] << endl;
        }
    }

    return 0;
}