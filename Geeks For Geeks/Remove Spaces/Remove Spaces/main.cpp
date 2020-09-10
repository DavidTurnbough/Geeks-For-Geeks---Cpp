//******************************************************************************
// Name: David Turnbough
// Date: Saturday May 25, 2019
// Geeks For Geeks: Remove Spaces
// https://practice.geeksforgeeks.org/problems/remove-spaces/0
//******************************************************************************
#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv)
{
    int testCases = 0; 
    
    cin >> testCases;
    cin.get();
    
    while(testCases--)
    {
        string input = "";
        
        getline(cin, input);
        
        string output = "";
        
        for(int i = 0; i < input.length(); ++i)
        {
            if(input[i] != ' ')
            {
                output += input[i];
            }
        }
        
        cout << output << endl;
    }
    
    return 0;
}

