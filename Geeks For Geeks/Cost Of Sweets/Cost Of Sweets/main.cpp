//******************************************************************************
// Name: David Turnbough
// Date: Tuesday July 28, 2020
// Geeks For Geeks: Cost Of Sweets
// https://practice.geeksforgeeks.org/problems/cost-of-sweets/0
//******************************************************************************
#include <cstdlib>
#include <iostream>

using namespace std;

int calculateCost(int numberOfSweets)
{
    if(numberOfSweets == 1)
    {
        return 1;
    }
    
    
    return 1;
}

int main(int argc, char** argv)
{
    int testCases = 0;
    
    cin >> testCases;
    
    while(testCases--)
    {
        int numberOfSweets = 0;
        
        cin >> numberOfSweets;
        
        cout << calculateCost(numberOfSweets) << endl;
    }
    
    return 0;
}