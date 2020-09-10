//******************************************************************************
// Name: David Turnbough
// Date: Sunday May 25, 2019
// Geeks For Geeks: C++ Switch Case Statement
// https://practice.geeksforgeeks.org/problems/c-switch-case-statement/0
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
        int input = 0;
        
        cin >> input;
        
        string output = "";
        
        switch(input)
        {
            case 1:
                output = "one";
                break;
            case 2:
                output = "two";
                break;
            case 3:
                output = "three";
                break;
            case 4:
                output = "four";
                break;
            case 5:
                output = "five";
                break;
            case 6:
                output = "six";
                break;
            case 7:
                output = "seven";
                break;
            case 8:
                output = "eight";
                break;
            case 9:
                output = "nine";
                break;
            case 10:
                output = "ten";
                break;
            default:
                output = "not in range";
        }
        
        cout << output << endl;
    }

    return 0;
}

