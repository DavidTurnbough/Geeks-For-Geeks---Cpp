//******************************************************************************
// Name: David Turnbough
// Date: Friday July 27, 2018
// Geeks for Geeks: Form Largest Number From Digits
// https://practice.geeksforgeeks.org/problems/form-largest-number-from-digits/0
//******************************************************************************
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char** argv)
{
    int testCases = 0;
    
    cin >> testCases;
    
    while(testCases--)
    {
        int numberOfElements = 0;
        
        cin >> numberOfElements;
        
        vector<int> arr;
        int temp = 0;
        
        for(int i = 0; i < numberOfElements; ++i)
        {
            cin >> temp;
            arr.push_back(temp);
        }
        
        sort(arr.begin(), arr.end());
        
        for(int i = numberOfElements - 1; i >= 0; --i)
        {
            cout << arr.at(i);
        }
        
        cout << endl;
    }

    return 0;
}