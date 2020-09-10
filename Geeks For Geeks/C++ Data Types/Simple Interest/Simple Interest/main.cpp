//******************************************************************************
// Name: David Turnbough
// Date: Thursday April 26, 2018
// Geeks For Geeks
// https://practice.geeksforgeeks.org/problems/simple-interest/0
//******************************************************************************
#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
    int testCases = 0;
    int principal = 0;
    int time = 0;
    double rate = 0;
    
    cin >> testCases;
    
    while(testCases--)
    {
        cin >> principal >> time >> rate;
        
        cout << (int)(principal * (rate / 100) * time) << endl;
    }
    
    return 0;
}