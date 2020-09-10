//******************************************************************************
// Name: David Turnbough
// Date: Wednesday June 5, 2019
// Geeks For Geeks: Value Equal To Index Value
// https://practice.geeksforgeeks.org/problems/value-equal-to-index-value/0
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
        
        bool isFound = false;
        
        for(int i = 0; i < size; ++i)
        {
            if((i + 1) == arr[i])
            {
                cout << arr[i] << " ";
                isFound = true;
            }
        }
        
        if(!isFound)
        {
            cout << "Not Found";
        }
        
        cout << endl;
    }
    
    return 0;
}