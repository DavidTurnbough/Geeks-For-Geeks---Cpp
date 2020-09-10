//******************************************************************************
// Name: David Turnbough
// Date: Thursday April 26, 2018
// Geeks For Geeks
// https://practice.geeksforgeeks.org/problems/all-divisors-of-a-natural-number/0
//******************************************************************************
#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
    int testCases = 0;
    int value = 0;
    
    cin >> testCases;
    
    while(testCases--)
    {
        cin >> value;
        
        for(int i = 1; i <= value; ++i)
        {
            if(value % i == 0)
            {
                cout << i << " ";
            }
        }
        
        cout << endl;
    }
    
    return 0;
}

