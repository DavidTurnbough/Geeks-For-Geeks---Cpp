//******************************************************************************
// Name: David Turnbough
// Date: Sunday August 12, 2018
// Geeks for Geeks: Frequency of Array Elements
// https://practice.geeksforgeeks.org/problems/frequency-of-array-elements/0
//******************************************************************************
#include <iostream>

#define MAXIMUM_SIZE 100

using namespace std;

int main(int argc, char** argv)
{
    int testCases = 0;
    
    cin >> testCases;
    
    while(testCases--)
    {
        int size = 0;
        
        cin >> size;
        
        int foo[MAXIMUM_SIZE];
        
        for(int i = 0; i < size; ++i)
        {
            cin >> foo[i];
        }
        
        int bar[MAXIMUM_SIZE];
        
        for(int i = 0; i < size; ++i)
        {
            bar[foo[i]]++;
        }
        
        for(int i = 0; i < size; ++i)
        {
            cout << bar[i] << " ";
        }
        
        cout << endl;
        
        cout << "End" << endl;
        
    }
    
    return 0;
}

