//******************************************************************************
// Name: David Turnbough
// Date: Saturday May 25, 2019
// Geeks For Geeks: C++ Strings
// https://practice.geeksforgeeks.org/problems/c-strings/0
//******************************************************************************
#include <cstdlib>
#include <cstdio>
#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
    int testCases = 0;
    
    cin >> testCases;
    
    while(testCases--)
    {
        string input1 = "";
        string input2 = "";
        
        cin >> input1 >> input2;
        
        int length = input1.length() > input2.length() ? input1.length() : input2.length();
        
        cout << length << endl << input1 << input2 << endl;
    }
    
    return 0;
}

