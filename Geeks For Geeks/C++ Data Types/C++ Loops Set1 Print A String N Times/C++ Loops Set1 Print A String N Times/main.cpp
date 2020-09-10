//******************************************************************************
// Name: David Turnbough
// Date: Thursday April 26, 2018
// Geeks For Geeks
// https://practice.geeksforgeeks.org/problems/cpp-loops-set-1-print-a-string-n-times/0
//******************************************************************************
#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
    int testCases = 0;
    int numberOfLoops = 0;
    
    cin >> testCases;
    
    while(testCases--)
    {
        cin >> numberOfLoops;
        
        for(int i = 0; i < numberOfLoops; ++i)
        {
            cout << "GeeksforGeeks" << endl;
        }
    }
    
    return 0;
}

