//******************************************************************************
// Name: David Turnbough
// Date: Sunday May 25, 2019
// Geeks For Geeks: Compound Interest
// https://practice.geeksforgeeks.org/problems/compound-interest/0
//******************************************************************************
#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char** argv)
{
    int testCases = 0;
    
    cin >> testCases;
    
    while(testCases--)
    {
        double principal = 0.0;
        double time = 0.0;
        double compound = 0.0;
        double rate = 0.0;
        
        cin >> principal >> time >> compound >> rate;
        
        rate /= 100;
        
        int amount = principal * pow((1 + (rate / compound)), (time * compound));
        
        cout << amount << endl;
    }
    
    return 0;
}