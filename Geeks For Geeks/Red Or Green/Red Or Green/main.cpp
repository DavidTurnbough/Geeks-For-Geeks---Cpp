//******************************************************************************
// Name: David Turnbough
// Date: Thursday July 23, 2020
// Geeks For Geeks: Red OR Green
// https://practice.geeksforgeeks.org/problems/red-or-green/0
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
        int numberOfPens = 0;
        string pens = "";
        
        cin >> numberOfPens >> pens;
        
        int numberOfRedPens = 0;
        int numberOfGreenPens = 0;
        
        for(int i = 0; i < numberOfPens; ++i)
        {
            if(pens[i] == 'R')
            {
                numberOfRedPens++;
            }
            else
            {
                numberOfGreenPens++;
            }
        }
        
        int numberOfSwaps = numberOfRedPens <= numberOfGreenPens ? numberOfRedPens : numberOfGreenPens;
        
        cout << numberOfSwaps << endl;
    }
    
    return 0;
}